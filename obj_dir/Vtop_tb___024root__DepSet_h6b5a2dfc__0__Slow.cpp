// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_static(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop_tb___024root___eval_final(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_settle(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("dv/top_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->__VdfgTmp_h0dfe7ba0__0 = vlSelf->top_tb__DOT__dut__DOT__inst_mem__DOT__mem
        [(0x3ffU & ((IData)(3U) + vlSelf->top_tb__DOT__dut__DOT__pc_addr))];
    vlSelf->__VdfgTmp_h0de70e8a__0 = vlSelf->top_tb__DOT__dut__DOT__inst_mem__DOT__mem
        [(0x3ffU & ((IData)(1U) + vlSelf->top_tb__DOT__dut__DOT__pc_addr))];
    vlSelf->__VdfgTmp_hda6b043c__0 = vlSelf->top_tb__DOT__dut__DOT__inst_mem__DOT__mem
        [(0x3ffU & vlSelf->top_tb__DOT__dut__DOT__pc_addr)];
    vlSelf->top_tb__DOT__dut__DOT__mem_write = 0U;
    vlSelf->top_tb__DOT__dut__DOT__mem_read = 0U;
    if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                            if ((1U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                                vlSelf->top_tb__DOT__dut__DOT__mem_write = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                            if ((1U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                                vlSelf->top_tb__DOT__dut__DOT__mem_read = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_tb__DOT__dut__DOT__write_en = 0U;
    vlSelf->top_tb__DOT__dut__DOT__result_src = 0U;
    vlSelf->top_tb__DOT__dut__DOT__alu_control = 0U;
    vlSelf->top_tb__DOT__dut__DOT__alu_src = 0U;
    vlSelf->top_tb__DOT__dut__DOT__imm_src = 0U;
    vlSelf->__VdfgTmp_h6d3c8714__0 = (((IData)(vlSelf->__VdfgTmp_h0de70e8a__0) 
                                       << 8U) | (IData)(vlSelf->__VdfgTmp_hda6b043c__0));
    vlSelf->__VdfgTmp_hc51962fa__0 = ((vlSelf->top_tb__DOT__dut__DOT__inst_mem__DOT__mem
                                       [(0x3ffU & ((IData)(2U) 
                                                   + vlSelf->top_tb__DOT__dut__DOT__pc_addr))] 
                                       << 0x10U) | (IData)(vlSelf->__VdfgTmp_h6d3c8714__0));
    vlSelf->top_tb__DOT__dut__DOT__read_data_1 = vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
        [(0x1fU & (vlSelf->__VdfgTmp_hc51962fa__0 >> 0xfU))];
    vlSelf->top_tb__DOT__dut__DOT__instruction = (((IData)(vlSelf->__VdfgTmp_h0dfe7ba0__0) 
                                                   << 0x18U) 
                                                  | vlSelf->__VdfgTmp_hc51962fa__0);
    vlSelf->top_tb__DOT__dut__DOT__read_data_2 = vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
        [(0x1fU & (vlSelf->top_tb__DOT__dut__DOT__instruction 
                   >> 0x14U))];
    if ((0x40U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
        if ((0x20U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
            if ((0x10U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                vlSelf->top_tb__DOT__dut__DOT__write_en = 0U;
                vlSelf->top_tb__DOT__dut__DOT__result_src = 0U;
                vlSelf->top_tb__DOT__dut__DOT__alu_control = 0U;
                vlSelf->top_tb__DOT__dut__DOT__alu_src = 0U;
            } else if ((8U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                vlSelf->top_tb__DOT__dut__DOT__write_en 
                    = ((1U & ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                              >> 2U)) && ((1U & ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))));
                if ((4U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                    if ((2U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                        vlSelf->top_tb__DOT__dut__DOT__result_src 
                            = ((1U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))
                                ? 2U : 0U);
                        if ((1U & (~ (IData)(vlSelf->__VdfgTmp_hda6b043c__0)))) {
                            vlSelf->top_tb__DOT__dut__DOT__alu_control = 0U;
                            vlSelf->top_tb__DOT__dut__DOT__alu_src = 0U;
                        }
                    } else {
                        vlSelf->top_tb__DOT__dut__DOT__result_src = 0U;
                        vlSelf->top_tb__DOT__dut__DOT__alu_control = 0U;
                        vlSelf->top_tb__DOT__dut__DOT__alu_src = 0U;
                    }
                } else {
                    vlSelf->top_tb__DOT__dut__DOT__result_src = 0U;
                    vlSelf->top_tb__DOT__dut__DOT__alu_control = 0U;
                    vlSelf->top_tb__DOT__dut__DOT__alu_src = 0U;
                }
            } else if ((4U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                vlSelf->top_tb__DOT__dut__DOT__write_en = 0U;
                vlSelf->top_tb__DOT__dut__DOT__result_src = 0U;
                vlSelf->top_tb__DOT__dut__DOT__alu_control = 0U;
                vlSelf->top_tb__DOT__dut__DOT__alu_src = 0U;
            } else if ((2U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                if ((1U & (~ (IData)(vlSelf->__VdfgTmp_hda6b043c__0)))) {
                    vlSelf->top_tb__DOT__dut__DOT__write_en = 0U;
                    vlSelf->top_tb__DOT__dut__DOT__result_src = 0U;
                    vlSelf->top_tb__DOT__dut__DOT__alu_src = 0U;
                }
                vlSelf->top_tb__DOT__dut__DOT__alu_control 
                    = ((1U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))
                        ? 1U : 0U);
            } else {
                vlSelf->top_tb__DOT__dut__DOT__write_en = 0U;
                vlSelf->top_tb__DOT__dut__DOT__result_src = 0U;
                vlSelf->top_tb__DOT__dut__DOT__alu_control = 0U;
                vlSelf->top_tb__DOT__dut__DOT__alu_src = 0U;
            }
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                    if ((4U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                        if ((2U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                            if ((1U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                                vlSelf->top_tb__DOT__dut__DOT__imm_src = 3U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                        if ((1U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                            vlSelf->top_tb__DOT__dut__DOT__imm_src = 2U;
                        }
                    }
                }
            }
        } else {
            vlSelf->top_tb__DOT__dut__DOT__write_en = 0U;
            vlSelf->top_tb__DOT__dut__DOT__result_src = 0U;
            vlSelf->top_tb__DOT__dut__DOT__alu_control = 0U;
            vlSelf->top_tb__DOT__dut__DOT__alu_src = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
        if ((0x10U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
            vlSelf->top_tb__DOT__dut__DOT__write_en 
                = ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelf->__VdfgTmp_hda6b043c__0)))));
            vlSelf->top_tb__DOT__dut__DOT__result_src = 0U;
            if ((8U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                vlSelf->top_tb__DOT__dut__DOT__alu_control = 0U;
            } else if ((4U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                vlSelf->top_tb__DOT__dut__DOT__alu_control = 0U;
            } else if ((2U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                if ((1U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                    if ((0x40U & (IData)(vlSelf->__VdfgTmp_h0de70e8a__0))) {
                        vlSelf->top_tb__DOT__dut__DOT__alu_control 
                            = ((0x20U & (IData)(vlSelf->__VdfgTmp_h0de70e8a__0))
                                ? ((0x10U & (IData)(vlSelf->__VdfgTmp_h0de70e8a__0))
                                    ? 2U : 3U) : ((0x10U 
                                                   & (IData)(vlSelf->__VdfgTmp_h0de70e8a__0))
                                                   ? 2U
                                                   : 4U));
                    } else if ((0x20U & (IData)(vlSelf->__VdfgTmp_h0de70e8a__0))) {
                        vlSelf->top_tb__DOT__dut__DOT__alu_control = 2U;
                    } else if ((0x10U & (IData)(vlSelf->__VdfgTmp_h0de70e8a__0))) {
                        vlSelf->top_tb__DOT__dut__DOT__alu_control = 2U;
                    } else if ((0U == (0x7fU & ((IData)(vlSelf->__VdfgTmp_h0dfe7ba0__0) 
                                                >> 1U)))) {
                        vlSelf->top_tb__DOT__dut__DOT__alu_control = 0U;
                    } else if ((0x20U == (0x7fU & ((IData)(vlSelf->__VdfgTmp_h0dfe7ba0__0) 
                                                   >> 1U)))) {
                        vlSelf->top_tb__DOT__dut__DOT__alu_control = 1U;
                    }
                } else {
                    vlSelf->top_tb__DOT__dut__DOT__alu_control = 0U;
                }
            } else {
                vlSelf->top_tb__DOT__dut__DOT__alu_control = 0U;
            }
        } else {
            if ((8U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                vlSelf->top_tb__DOT__dut__DOT__write_en = 0U;
                vlSelf->top_tb__DOT__dut__DOT__result_src = 0U;
            } else if ((4U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                vlSelf->top_tb__DOT__dut__DOT__write_en = 0U;
                vlSelf->top_tb__DOT__dut__DOT__result_src = 0U;
            } else if ((2U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                if ((1U & (~ (IData)(vlSelf->__VdfgTmp_hda6b043c__0)))) {
                    vlSelf->top_tb__DOT__dut__DOT__write_en = 0U;
                    vlSelf->top_tb__DOT__dut__DOT__result_src = 0U;
                }
            } else {
                vlSelf->top_tb__DOT__dut__DOT__write_en = 0U;
                vlSelf->top_tb__DOT__dut__DOT__result_src = 0U;
            }
            vlSelf->top_tb__DOT__dut__DOT__alu_control = 0U;
        }
        vlSelf->top_tb__DOT__dut__DOT__alu_src = ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                                       >> 4U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                                           >> 3U))) 
                                                      && ((1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                                               >> 2U))) 
                                                          && ((1U 
                                                               & ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                                                  >> 1U)) 
                                                              && (1U 
                                                                  & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))))));
        if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                        if ((1U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                            vlSelf->top_tb__DOT__dut__DOT__imm_src = 1U;
                        }
                    }
                }
            }
        }
    } else {
        if ((0x10U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
            vlSelf->top_tb__DOT__dut__DOT__write_en 
                = ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelf->__VdfgTmp_hda6b043c__0)))));
            vlSelf->top_tb__DOT__dut__DOT__result_src = 0U;
            vlSelf->top_tb__DOT__dut__DOT__alu_src 
                = ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelf->__VdfgTmp_hda6b043c__0)))));
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                        if ((1U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                            vlSelf->top_tb__DOT__dut__DOT__imm_src = 0U;
                        }
                    }
                }
            }
        } else {
            vlSelf->top_tb__DOT__dut__DOT__write_en 
                = ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelf->__VdfgTmp_hda6b043c__0)))));
            vlSelf->top_tb__DOT__dut__DOT__result_src 
                = ((8U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))
                    ? 0U : ((4U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))
                             ? 0U : ((2U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))
                                      ? ((1U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))
                                          ? 1U : 0U)
                                      : 0U)));
            vlSelf->top_tb__DOT__dut__DOT__alu_src 
                = ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelf->__VdfgTmp_hda6b043c__0)))));
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                        if ((1U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                            vlSelf->top_tb__DOT__dut__DOT__imm_src = 0U;
                        }
                    }
                }
            }
        }
        vlSelf->top_tb__DOT__dut__DOT__alu_control = 0U;
    }
    vlSelf->top_tb__DOT__dut__DOT__imm_addr = ((2U 
                                                & (IData)(vlSelf->top_tb__DOT__dut__DOT__imm_src))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->top_tb__DOT__dut__DOT__imm_src))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top_tb__DOT__dut__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0x15U) 
                                                    | ((0x100000U 
                                                        & (vlSelf->top_tb__DOT__dut__DOT__instruction 
                                                           >> 0xbU)) 
                                                       | ((0xff000U 
                                                           & vlSelf->top_tb__DOT__dut__DOT__instruction) 
                                                          | ((0x800U 
                                                              & (vlSelf->top_tb__DOT__dut__DOT__instruction 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->top_tb__DOT__dut__DOT__instruction 
                                                                   >> 0x14U))))))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->top_tb__DOT__dut__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xdU) 
                                                    | ((0x1000U 
                                                        & (vlSelf->top_tb__DOT__dut__DOT__instruction 
                                                           >> 0x13U)) 
                                                       | ((0x800U 
                                                           & (vlSelf->top_tb__DOT__dut__DOT__instruction 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->top_tb__DOT__dut__DOT__instruction 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->top_tb__DOT__dut__DOT__instruction 
                                                                   >> 7U)))))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->top_tb__DOT__dut__DOT__imm_src))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top_tb__DOT__dut__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->top_tb__DOT__dut__DOT__instruction 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->top_tb__DOT__dut__DOT__instruction 
                                                             >> 7U))))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->top_tb__DOT__dut__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->top_tb__DOT__dut__DOT__instruction 
                                                       >> 0x14U))));
    vlSelf->top_tb__DOT__dut__DOT__src_B = ((IData)(vlSelf->top_tb__DOT__dut__DOT__alu_src)
                                             ? vlSelf->top_tb__DOT__dut__DOT__imm_addr
                                             : vlSelf->top_tb__DOT__dut__DOT__read_data_2);
    vlSelf->top_tb__DOT__dut__DOT__result = ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__alu_control))
                                              ? ((2U 
                                                  & (IData)(vlSelf->top_tb__DOT__dut__DOT__alu_control))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top_tb__DOT__dut__DOT__alu_control))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->top_tb__DOT__dut__DOT__read_data_1 
                                                   ^ vlSelf->top_tb__DOT__dut__DOT__src_B)))
                                              : ((2U 
                                                  & (IData)(vlSelf->top_tb__DOT__dut__DOT__alu_control))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top_tb__DOT__dut__DOT__alu_control))
                                                   ? 
                                                  (vlSelf->top_tb__DOT__dut__DOT__read_data_1 
                                                   | vlSelf->top_tb__DOT__dut__DOT__src_B)
                                                   : 
                                                  (vlSelf->top_tb__DOT__dut__DOT__read_data_1 
                                                   & vlSelf->top_tb__DOT__dut__DOT__src_B))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top_tb__DOT__dut__DOT__alu_control))
                                                   ? 
                                                  (vlSelf->top_tb__DOT__dut__DOT__read_data_1 
                                                   - vlSelf->top_tb__DOT__dut__DOT__src_B)
                                                   : 
                                                  (vlSelf->top_tb__DOT__dut__DOT__read_data_1 
                                                   + vlSelf->top_tb__DOT__dut__DOT__src_B))));
    vlSelf->top_tb__DOT__dut__DOT__zero = (0U == vlSelf->top_tb__DOT__dut__DOT__result);
    vlSelf->top_tb__DOT__dut__DOT__pc_src = 0U;
    if ((0x40U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
        if ((0x20U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                    if ((4U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                        if ((2U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                            if ((1U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                                vlSelf->top_tb__DOT__dut__DOT__pc_src = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hda6b043c__0) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                        if ((1U & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))) {
                            vlSelf->top_tb__DOT__dut__DOT__pc_src 
                                = vlSelf->top_tb__DOT__dut__DOT__zero;
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_tb__DOT__dut__DOT__program_counter__DOT__addr_reg 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__pc_src)
            ? ((IData)(vlSelf->top_tb__DOT__dut__DOT__pc_src)
                ? (vlSelf->top_tb__DOT__dut__DOT__pc_addr 
                   + vlSelf->top_tb__DOT__dut__DOT__imm_addr)
                : ((IData)(4U) + vlSelf->top_tb__DOT__dut__DOT__pc_addr))
            : ((IData)(4U) + vlSelf->top_tb__DOT__dut__DOT__pc_addr));
}

VL_ATTR_COLD void Vtop_tb___024root___eval_stl(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtop_tb___024root___eval_triggers__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge top_tb.clk or negedge top_tb.nrst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge top_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge top_tb.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge top_tb.nrst)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge top_tb.clk or negedge top_tb.nrst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge top_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge top_tb.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge top_tb.nrst)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___ctor_var_reset(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->top_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__nrst = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__pass_count = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__fail_count = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__imm_addr = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__pc_addr = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__pc_src = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__read_data_1 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__read_data_2 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__imm_src = VL_RAND_RESET_I(2);
    vlSelf->top_tb__DOT__dut__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__src_B = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__alu_control = VL_RAND_RESET_I(3);
    vlSelf->top_tb__DOT__dut__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__dut__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__dut__DOT__result_src = VL_RAND_RESET_I(2);
    vlSelf->top_tb__DOT__dut__DOT__program_counter__DOT__addr_reg = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top_tb__DOT__dut__DOT__inst_mem__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top_tb__DOT__dut__DOT__data_mem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_tb__DOT__dut__DOT__data_mem__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_h0dfe7ba0__0 = 0;
    vlSelf->__VdfgTmp_hc51962fa__0 = 0;
    vlSelf->__VdfgTmp_h6d3c8714__0 = 0;
    vlSelf->__VdfgTmp_hda6b043c__0 = 0;
    vlSelf->__VdfgTmp_h0de70e8a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__nrst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
