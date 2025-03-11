TOPNAME = encoder
NXDC_FILES = constr/encoder.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert --trace 

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
CXXFLAGS += -g

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

gdb:
	@echo "-------- VERILATE --- AND --- BUILD --------"

#清空再创建目的地目录
	@rm -rf $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)

#执行命令
	@$(VERILATOR) $(VERILATOR_CFLAGS) $(VSRCS) $(CSRCS)

	@echo
	@echo "-------------------- GDB --------------------"

#清空再创建波形文件夹并
	@rm -rf $(BUILD_DIR)/logs
	@mkdir -p $(BUILD_DIR)/logs

#gbd执行可执行文件，运行并仿真，生成波形
	gdb -s $(BIN) --args $(BIN)

	@echo
	@echo "-------------------- DONE --------------------"
	@echo "To see waveforms, open $(BUILD_DIR)/logs/cpu_wave.fst in a waveform viewer"
	@echo

all: default

run: $(BIN)
	@$^

clean:
	rm -rf $(BUILD_DIR)

.PHONY: default all clean run