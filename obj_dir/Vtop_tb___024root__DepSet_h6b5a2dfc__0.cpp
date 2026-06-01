// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf);
VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_tb___024root* vlSelf);
VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_tb___024root* vlSelf);
VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__2(Vtop_tb___024root* vlSelf);
VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__3(Vtop_tb___024root* vlSelf);

void Vtop_tb___024root___eval_initial(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial\n"); );
    // Body
    Vtop_tb___024root___eval_initial__TOP(vlSelf);
    Vtop_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtop_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtop_tb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 
        = vlSelf->top_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__nrst__0 
        = vlSelf->top_tb__DOT__nrst;
}

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->top_tb__DOT__nrst = 0U;
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       10);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       10);
    co_await vlSelf->__VtrigSched_h9d9a9148__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       11);
    vlSelf->top_tb__DOT__nrst = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_top_tb__DOT__check__0__actual;
    __Vtask_top_tb__DOT__check__0__actual = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__check__0__expected;
    __Vtask_top_tb__DOT__check__0__expected = 0;
    std::string __Vtask_top_tb__DOT__check__0__label;
    IData/*31:0*/ __Vtask_top_tb__DOT__check__1__actual;
    __Vtask_top_tb__DOT__check__1__actual = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__check__1__expected;
    __Vtask_top_tb__DOT__check__1__expected = 0;
    std::string __Vtask_top_tb__DOT__check__1__label;
    IData/*31:0*/ __Vtask_top_tb__DOT__check__2__actual;
    __Vtask_top_tb__DOT__check__2__actual = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__check__2__expected;
    __Vtask_top_tb__DOT__check__2__expected = 0;
    std::string __Vtask_top_tb__DOT__check__2__label;
    IData/*31:0*/ __Vtask_top_tb__DOT__check__3__actual;
    __Vtask_top_tb__DOT__check__3__actual = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__check__3__expected;
    __Vtask_top_tb__DOT__check__3__expected = 0;
    std::string __Vtask_top_tb__DOT__check__3__label;
    IData/*31:0*/ __Vtask_top_tb__DOT__check__4__actual;
    __Vtask_top_tb__DOT__check__4__actual = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__check__4__expected;
    __Vtask_top_tb__DOT__check__4__expected = 0;
    std::string __Vtask_top_tb__DOT__check__4__label;
    IData/*31:0*/ __Vtask_top_tb__DOT__check__5__actual;
    __Vtask_top_tb__DOT__check__5__actual = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__check__5__expected;
    __Vtask_top_tb__DOT__check__5__expected = 0;
    std::string __Vtask_top_tb__DOT__check__5__label;
    IData/*31:0*/ __Vtask_top_tb__DOT__check__6__actual;
    __Vtask_top_tb__DOT__check__6__actual = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__check__6__expected;
    __Vtask_top_tb__DOT__check__6__expected = 0;
    std::string __Vtask_top_tb__DOT__check__6__label;
    IData/*31:0*/ __Vtask_top_tb__DOT__check__7__actual;
    __Vtask_top_tb__DOT__check__7__actual = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__check__7__expected;
    __Vtask_top_tb__DOT__check__7__expected = 0;
    std::string __Vtask_top_tb__DOT__check__7__label;
    // Body
    vlSelf->top_tb__DOT__pass_count = 0U;
    vlSelf->top_tb__DOT__fail_count = 0U;
    co_await vlSelf->__VtrigSched_h78673267__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.nrst)", 
                                                       "dv/top_tb.sv", 
                                                       58);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       59);
    __Vtask_top_tb__DOT__check__0__label = std::string{"x1  (JAL ret addr)"};
    __Vtask_top_tb__DOT__check__0__expected = 0x30U;
    __Vtask_top_tb__DOT__check__0__actual = vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
        [1U];
    if ((__Vtask_top_tb__DOT__check__0__actual == __Vtask_top_tb__DOT__check__0__expected)) {
        VL_WRITEF("PASS %@ = %0# (expected %0#)\n",
                  -1,&(__Vtask_top_tb__DOT__check__0__label),
                  32,__Vtask_top_tb__DOT__check__0__actual,
                  32,__Vtask_top_tb__DOT__check__0__expected);
        vlSelf->top_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL  %@ = %0# (expected %0#)\n",
                  -1,&(__Vtask_top_tb__DOT__check__0__label),
                  32,__Vtask_top_tb__DOT__check__0__actual,
                  32,__Vtask_top_tb__DOT__check__0__expected);
        vlSelf->top_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__fail_count);
    }
    __Vtask_top_tb__DOT__check__1__label = std::string{"x2  (addi x0,5)   "};
    __Vtask_top_tb__DOT__check__1__expected = 5U;
    __Vtask_top_tb__DOT__check__1__actual = vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
        [2U];
    if ((__Vtask_top_tb__DOT__check__1__actual == __Vtask_top_tb__DOT__check__1__expected)) {
        VL_WRITEF("PASS %@ = %0# (expected %0#)\n",
                  -1,&(__Vtask_top_tb__DOT__check__1__label),
                  32,__Vtask_top_tb__DOT__check__1__actual,
                  32,__Vtask_top_tb__DOT__check__1__expected);
        vlSelf->top_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL  %@ = %0# (expected %0#)\n",
                  -1,&(__Vtask_top_tb__DOT__check__1__label),
                  32,__Vtask_top_tb__DOT__check__1__actual,
                  32,__Vtask_top_tb__DOT__check__1__expected);
        vlSelf->top_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__fail_count);
    }
    __Vtask_top_tb__DOT__check__2__label = std::string{"x3  (add)          "};
    __Vtask_top_tb__DOT__check__2__expected = 0xfU;
    __Vtask_top_tb__DOT__check__2__actual = vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
        [3U];
    if ((__Vtask_top_tb__DOT__check__2__actual == __Vtask_top_tb__DOT__check__2__expected)) {
        VL_WRITEF("PASS %@ = %0# (expected %0#)\n",
                  -1,&(__Vtask_top_tb__DOT__check__2__label),
                  32,__Vtask_top_tb__DOT__check__2__actual,
                  32,__Vtask_top_tb__DOT__check__2__expected);
        vlSelf->top_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL  %@ = %0# (expected %0#)\n",
                  -1,&(__Vtask_top_tb__DOT__check__2__label),
                  32,__Vtask_top_tb__DOT__check__2__actual,
                  32,__Vtask_top_tb__DOT__check__2__expected);
        vlSelf->top_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__fail_count);
    }
    __Vtask_top_tb__DOT__check__3__label = std::string{"x4  (sub)          "};
    __Vtask_top_tb__DOT__check__3__expected = 5U;
    __Vtask_top_tb__DOT__check__3__actual = vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
        [4U];
    if ((__Vtask_top_tb__DOT__check__3__actual == __Vtask_top_tb__DOT__check__3__expected)) {
        VL_WRITEF("PASS %@ = %0# (expected %0#)\n",
                  -1,&(__Vtask_top_tb__DOT__check__3__label),
                  32,__Vtask_top_tb__DOT__check__3__actual,
                  32,__Vtask_top_tb__DOT__check__3__expected);
        vlSelf->top_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL  %@ = %0# (expected %0#)\n",
                  -1,&(__Vtask_top_tb__DOT__check__3__label),
                  32,__Vtask_top_tb__DOT__check__3__actual,
                  32,__Vtask_top_tb__DOT__check__3__expected);
        vlSelf->top_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__fail_count);
    }
    __Vtask_top_tb__DOT__check__4__label = std::string{"x5  (and)          "};
    __Vtask_top_tb__DOT__check__4__expected = 0U;
    __Vtask_top_tb__DOT__check__4__actual = vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
        [5U];
    if ((__Vtask_top_tb__DOT__check__4__actual == __Vtask_top_tb__DOT__check__4__expected)) {
        VL_WRITEF("PASS %@ = %0# (expected %0#)\n",
                  -1,&(__Vtask_top_tb__DOT__check__4__label),
                  32,__Vtask_top_tb__DOT__check__4__actual,
                  32,__Vtask_top_tb__DOT__check__4__expected);
        vlSelf->top_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL  %@ = %0# (expected %0#)\n",
                  -1,&(__Vtask_top_tb__DOT__check__4__label),
                  32,__Vtask_top_tb__DOT__check__4__actual,
                  32,__Vtask_top_tb__DOT__check__4__expected);
        vlSelf->top_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__fail_count);
    }
    __Vtask_top_tb__DOT__check__5__label = std::string{"x6  (or)           "};
    __Vtask_top_tb__DOT__check__5__expected = 0xfU;
    __Vtask_top_tb__DOT__check__5__actual = vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
        [6U];
    if ((__Vtask_top_tb__DOT__check__5__actual == __Vtask_top_tb__DOT__check__5__expected)) {
        VL_WRITEF("PASS %@ = %0# (expected %0#)\n",
                  -1,&(__Vtask_top_tb__DOT__check__5__label),
                  32,__Vtask_top_tb__DOT__check__5__actual,
                  32,__Vtask_top_tb__DOT__check__5__expected);
        vlSelf->top_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL  %@ = %0# (expected %0#)\n",
                  -1,&(__Vtask_top_tb__DOT__check__5__label),
                  32,__Vtask_top_tb__DOT__check__5__actual,
                  32,__Vtask_top_tb__DOT__check__5__expected);
        vlSelf->top_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__fail_count);
    }
    __Vtask_top_tb__DOT__check__6__label = std::string{"x7  (lw)           "};
    __Vtask_top_tb__DOT__check__6__expected = 0xfU;
    __Vtask_top_tb__DOT__check__6__actual = vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
        [7U];
    if ((__Vtask_top_tb__DOT__check__6__actual == __Vtask_top_tb__DOT__check__6__expected)) {
        VL_WRITEF("PASS %@ = %0# (expected %0#)\n",
                  -1,&(__Vtask_top_tb__DOT__check__6__label),
                  32,__Vtask_top_tb__DOT__check__6__actual,
                  32,__Vtask_top_tb__DOT__check__6__expected);
        vlSelf->top_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL  %@ = %0# (expected %0#)\n",
                  -1,&(__Vtask_top_tb__DOT__check__6__label),
                  32,__Vtask_top_tb__DOT__check__6__actual,
                  32,__Vtask_top_tb__DOT__check__6__expected);
        vlSelf->top_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__fail_count);
    }
    __Vtask_top_tb__DOT__check__7__label = std::string{"x8  (pass marker)  "};
    __Vtask_top_tb__DOT__check__7__expected = 0x63U;
    __Vtask_top_tb__DOT__check__7__actual = vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
        [8U];
    if ((__Vtask_top_tb__DOT__check__7__actual == __Vtask_top_tb__DOT__check__7__expected)) {
        VL_WRITEF("PASS %@ = %0# (expected %0#)\n",
                  -1,&(__Vtask_top_tb__DOT__check__7__label),
                  32,__Vtask_top_tb__DOT__check__7__actual,
                  32,__Vtask_top_tb__DOT__check__7__expected);
        vlSelf->top_tb__DOT__pass_count = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL  %@ = %0# (expected %0#)\n",
                  -1,&(__Vtask_top_tb__DOT__check__7__label),
                  32,__Vtask_top_tb__DOT__check__7__actual,
                  32,__Vtask_top_tb__DOT__check__7__expected);
        vlSelf->top_tb__DOT__fail_count = ((IData)(1U) 
                                           + vlSelf->top_tb__DOT__fail_count);
    }
    VL_WRITEF("  %0d passed, %0d failed\n",32,vlSelf->top_tb__DOT__pass_count,
              32,vlSelf->top_tb__DOT__fail_count);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       72);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       72);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       72);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       72);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       72);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       72);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       72);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       72);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       72);
    co_await vlSelf->__VtrigSched_h9d9a9879__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_tb.clk)", 
                                                       "dv/top_tb.sv", 
                                                       72);
    VL_FINISH_MT("dv/top_tb.sv", 73, "");
}

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__2(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "dv/top_tb.sv", 
                                       77);
    VL_WRITEF("TIMEOUT \342\200\224 simulation ran too long\n");
    VL_FINISH_MT("dv/top_tb.sv", 79, "");
}

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__3(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "dv/top_tb.sv", 
                                           5);
        vlSelf->top_tb__DOT__clk = (1U & (~ (IData)(vlSelf->top_tb__DOT__clk)));
    }
}

void Vtop_tb___024root___eval_act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v0;
    __Vdlyvdim0__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v0;
    __Vdlyvval__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v0;
    __Vdlyvset__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v1;
    __Vdlyvset__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v2;
    __Vdlyvset__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v2 = 0;
    CData/*7:0*/ __Vdlyvdim0__top_tb__DOT__dut__DOT__data_mem__DOT__mem__v0;
    __Vdlyvdim0__top_tb__DOT__dut__DOT__data_mem__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top_tb__DOT__dut__DOT__data_mem__DOT__mem__v0;
    __Vdlyvval__top_tb__DOT__dut__DOT__data_mem__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top_tb__DOT__dut__DOT__data_mem__DOT__mem__v0;
    __Vdlyvset__top_tb__DOT__dut__DOT__data_mem__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__top_tb__DOT__dut__DOT__data_mem__DOT__mem__v0 = 0U;
    __Vdlyvset__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v0 = 0U;
    __Vdlyvset__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v1 = 0U;
    __Vdlyvset__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v2 = 0U;
    if ((1U & (~ (IData)(vlSelf->top_tb__DOT__nrst)))) {
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__i = 0x20U;
        vlSelf->top_tb__DOT__dut__DOT__data_mem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelf->top_tb__DOT__dut__DOT__data_mem__DOT__i)) {
            vlSelf->top_tb__DOT__dut__DOT__data_mem__DOT__mem[(0xffU 
                                                               & vlSelf->top_tb__DOT__dut__DOT__data_mem__DOT__i)] = 0U;
            vlSelf->top_tb__DOT__dut__DOT__data_mem__DOT__i 
                = ((IData)(1U) + vlSelf->top_tb__DOT__dut__DOT__data_mem__DOT__i);
        }
    }
    if (vlSelf->top_tb__DOT__nrst) {
        if (vlSelf->top_tb__DOT__dut__DOT__mem_write) {
            __Vdlyvval__top_tb__DOT__dut__DOT__data_mem__DOT__mem__v0 
                = vlSelf->top_tb__DOT__dut__DOT__read_data_2;
            __Vdlyvset__top_tb__DOT__dut__DOT__data_mem__DOT__mem__v0 = 1U;
            __Vdlyvdim0__top_tb__DOT__dut__DOT__data_mem__DOT__mem__v0 
                = (0xffU & (vlSelf->top_tb__DOT__dut__DOT__result 
                            >> 2U));
        }
        if (((IData)(vlSelf->top_tb__DOT__dut__DOT__write_en) 
             & (0U != (0x1fU & ((IData)(vlSelf->__VdfgTmp_h6d3c8714__0) 
                                >> 7U))))) {
            __Vdlyvval__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v0 
                = ((0U == (IData)(vlSelf->top_tb__DOT__dut__DOT__result_src))
                    ? vlSelf->top_tb__DOT__dut__DOT__result
                    : ((1U == (IData)(vlSelf->top_tb__DOT__dut__DOT__result_src))
                        ? ((IData)(vlSelf->top_tb__DOT__dut__DOT__mem_read)
                            ? vlSelf->top_tb__DOT__dut__DOT__data_mem__DOT__mem
                           [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__result 
                                      >> 2U))] : 0U)
                        : ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__result_src))
                            ? ((IData)(4U) + vlSelf->top_tb__DOT__dut__DOT__pc_addr)
                            : vlSelf->top_tb__DOT__dut__DOT__result)));
            __Vdlyvset__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v0 = 1U;
            __Vdlyvdim0__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v0 
                = (0x1fU & ((IData)(vlSelf->__VdfgTmp_h6d3c8714__0) 
                            >> 7U));
        }
        __Vdlyvset__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v1 = 1U;
        vlSelf->top_tb__DOT__dut__DOT__pc_addr = vlSelf->top_tb__DOT__dut__DOT__program_counter__DOT__addr_reg;
    } else {
        __Vdlyvset__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v2 = 1U;
        vlSelf->top_tb__DOT__dut__DOT__pc_addr = 0U;
    }
    if (__Vdlyvset__top_tb__DOT__dut__DOT__data_mem__DOT__mem__v0) {
        vlSelf->top_tb__DOT__dut__DOT__data_mem__DOT__mem[__Vdlyvdim0__top_tb__DOT__dut__DOT__data_mem__DOT__mem__v0] 
            = __Vdlyvval__top_tb__DOT__dut__DOT__data_mem__DOT__mem__v0;
    }
    if (__Vdlyvset__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v0) {
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[__Vdlyvdim0__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v0;
    }
    if (__Vdlyvset__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v1) {
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0U] = 0U;
    }
    if (__Vdlyvset__top_tb__DOT__dut__DOT__reg_file__DOT__regs__v2) {
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[1U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[2U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[3U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[4U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[5U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[6U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[7U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[8U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[9U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0xaU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0xbU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0xcU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0xdU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0xeU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0xfU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0x10U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0x11U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0x12U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0x13U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0x14U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0x15U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0x16U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0x17U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0x18U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0x19U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0x1aU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0x1bU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0x1cU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0x1dU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0x1eU] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0x1fU] = 0U;
    }
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

void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop_tb___024root___timing_resume(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h9d9a9879__0.resume("@(posedge top_tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h9d9a9148__0.resume("@(negedge top_tb.clk)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h78673267__0.resume("@(posedge top_tb.nrst)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtop_tb___024root___timing_commit(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h9d9a9879__0.commit("@(posedge top_tb.clk)");
    }
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h9d9a9148__0.commit("@(negedge top_tb.clk)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h78673267__0.commit("@(posedge top_tb.nrst)");
    }
}

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf);

bool Vtop_tb___024root___eval_phase__act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_tb___024root___eval_triggers__act(vlSelf);
    Vtop_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop_tb___024root___timing_resume(vlSelf);
        Vtop_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop_tb___024root___eval_phase__nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dv/top_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dv/top_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_tb___024root___eval_debug_assertions(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
