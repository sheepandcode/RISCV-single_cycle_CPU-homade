// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024ROOT_H_
#define VERILATED_VTOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ top_tb__DOT__clk;
    CData/*0:0*/ top_tb__DOT__nrst;
    CData/*0:0*/ top_tb__DOT__dut__DOT__pc_src;
    CData/*0:0*/ top_tb__DOT__dut__DOT__write_en;
    CData/*1:0*/ top_tb__DOT__dut__DOT__imm_src;
    CData/*0:0*/ top_tb__DOT__dut__DOT__alu_src;
    CData/*2:0*/ top_tb__DOT__dut__DOT__alu_control;
    CData/*0:0*/ top_tb__DOT__dut__DOT__zero;
    CData/*0:0*/ top_tb__DOT__dut__DOT__mem_write;
    CData/*0:0*/ top_tb__DOT__dut__DOT__mem_read;
    CData/*1:0*/ top_tb__DOT__dut__DOT__result_src;
    CData/*7:0*/ __VdfgTmp_h0dfe7ba0__0;
    CData/*7:0*/ __VdfgTmp_hda6b043c__0;
    CData/*7:0*/ __VdfgTmp_h0de70e8a__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__nrst__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ __VdfgTmp_h6d3c8714__0;
    IData/*31:0*/ top_tb__DOT__pass_count;
    IData/*31:0*/ top_tb__DOT__fail_count;
    IData/*31:0*/ top_tb__DOT__dut__DOT__imm_addr;
    IData/*31:0*/ top_tb__DOT__dut__DOT__pc_addr;
    IData/*31:0*/ top_tb__DOT__dut__DOT__instruction;
    IData/*31:0*/ top_tb__DOT__dut__DOT__read_data_1;
    IData/*31:0*/ top_tb__DOT__dut__DOT__read_data_2;
    IData/*31:0*/ top_tb__DOT__dut__DOT__src_B;
    IData/*31:0*/ top_tb__DOT__dut__DOT__result;
    IData/*31:0*/ top_tb__DOT__dut__DOT__program_counter__DOT__addr_reg;
    IData/*31:0*/ top_tb__DOT__dut__DOT__reg_file__DOT__i;
    IData/*31:0*/ top_tb__DOT__dut__DOT__data_mem__DOT__i;
    IData/*23:0*/ __VdfgTmp_hc51962fa__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 1024> top_tb__DOT__dut__DOT__inst_mem__DOT__mem;
    VlUnpacked<IData/*31:0*/, 32> top_tb__DOT__dut__DOT__reg_file__DOT__regs;
    VlUnpacked<IData/*31:0*/, 256> top_tb__DOT__dut__DOT__data_mem__DOT__mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h9d9a9879__0;
    VlTriggerScheduler __VtrigSched_h9d9a9148__0;
    VlTriggerScheduler __VtrigSched_h78673267__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb___024root();
    VL_UNCOPYABLE(Vtop_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
