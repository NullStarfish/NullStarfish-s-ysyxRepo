VSRCS = $(wildcard ./vsrc/*.v)
CSRCS = $(wildcard ./csrc/*.cpp)
TOP_NAME = alutb
VERILATOR_CFLAGS = -Wall --cc --trace --exe --build --timing --top-module $(TOP_NAME)
all: $(VSRCS) $(CSRS)
	verilator $(VSRCS) $(CSRCS) $(VERILATOR_CFLAGS) 

clean:
	rm -rf ./obj_dir