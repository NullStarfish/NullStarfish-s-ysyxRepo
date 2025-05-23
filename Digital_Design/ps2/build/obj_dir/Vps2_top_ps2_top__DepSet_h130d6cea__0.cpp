// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vps2_top_ps2_top.h"

VL_INLINE_OPT void Vps2_top_ps2_top___ico_sequent__TOP__ps2_top__0(Vps2_top_ps2_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vps2_top_ps2_top___ico_sequent__TOP__ps2_top__0\n"); );
    // Body
    vlSelf->__PVT__fsm__DOT__next_state = vlSelf->__PVT__fsm__DOT__cur_state;
    vlSelf->__PVT__nextdata_n = 1U;
    if ((0U == (IData)(vlSelf->__PVT__fsm__DOT__cur_state))) {
        if (vlSelf->ready) {
            vlSelf->__PVT__fsm__DOT__next_state = 1U;
            vlSelf->__PVT__nextdata_n = 0U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__fsm__DOT__cur_state))) {
        vlSelf->__PVT__fsm__DOT__next_state = 0U;
        vlSelf->__PVT__nextdata_n = 1U;
    }
    vlSelf->__PVT__fsm__DOT__next_cnt = vlSelf->__PVT__press_cnt;
    vlSelf->__PVT__fsm__DOT__next_key_pressed = vlSelf->__PVT__key_pressed;
    vlSelf->__PVT__fsm__DOT__next_data_to_seg = vlSelf->__PVT__data_to_seg;
    if ((0U != (IData)(vlSelf->__PVT__fsm__DOT__cur_state))) {
        if ((1U == (IData)(vlSelf->__PVT__fsm__DOT__cur_state))) {
            if ((0xf0U == (IData)(vlSelf->data))) {
                vlSelf->__PVT__fsm__DOT__next_cnt = 
                    (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__press_cnt)));
            }
            if ((0xf0U != (IData)(vlSelf->data))) {
                vlSelf->__PVT__fsm__DOT__next_key_pressed = 1U;
                vlSelf->__PVT__fsm__DOT__next_data_to_seg 
                    = vlSelf->data;
            } else {
                vlSelf->__PVT__fsm__DOT__next_key_pressed = 0U;
                vlSelf->__PVT__fsm__DOT__next_data_to_seg = 0U;
            }
        }
    }
}
