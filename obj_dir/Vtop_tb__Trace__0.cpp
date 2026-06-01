// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
                               [1U]),32);
        bufp->chgIData(oldp+1,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
                               [2U]),32);
        bufp->chgIData(oldp+2,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
                               [3U]),32);
        bufp->chgIData(oldp+3,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
                               [4U]),32);
        bufp->chgIData(oldp+4,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
                               [5U]),32);
        bufp->chgIData(oldp+5,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
                               [6U]),32);
        bufp->chgIData(oldp+6,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
                               [7U]),32);
        bufp->chgIData(oldp+7,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
                               [8U]),32);
        bufp->chgIData(oldp+8,(vlSelf->top_tb__DOT__dut__DOT__imm_addr),32);
        bufp->chgIData(oldp+9,(vlSelf->top_tb__DOT__dut__DOT__pc_addr),32);
        bufp->chgBit(oldp+10,(vlSelf->top_tb__DOT__dut__DOT__pc_src));
        bufp->chgIData(oldp+11,(vlSelf->top_tb__DOT__dut__DOT__instruction),32);
        bufp->chgIData(oldp+12,(((0U == (IData)(vlSelf->top_tb__DOT__dut__DOT__result_src))
                                  ? vlSelf->top_tb__DOT__dut__DOT__result
                                  : ((1U == (IData)(vlSelf->top_tb__DOT__dut__DOT__result_src))
                                      ? ((IData)(vlSelf->top_tb__DOT__dut__DOT__mem_read)
                                          ? vlSelf->top_tb__DOT__dut__DOT__data_mem__DOT__mem
                                         [(0xffU & 
                                           (vlSelf->top_tb__DOT__dut__DOT__result 
                                            >> 2U))]
                                          : 0U) : (
                                                   (2U 
                                                    == (IData)(vlSelf->top_tb__DOT__dut__DOT__result_src))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->top_tb__DOT__dut__DOT__pc_addr)
                                                    : vlSelf->top_tb__DOT__dut__DOT__result)))),32);
        bufp->chgBit(oldp+13,(vlSelf->top_tb__DOT__dut__DOT__write_en));
        bufp->chgIData(oldp+14,(vlSelf->top_tb__DOT__dut__DOT__read_data_1),32);
        bufp->chgIData(oldp+15,(vlSelf->top_tb__DOT__dut__DOT__read_data_2),32);
        bufp->chgCData(oldp+16,(vlSelf->top_tb__DOT__dut__DOT__imm_src),2);
        bufp->chgBit(oldp+17,(vlSelf->top_tb__DOT__dut__DOT__alu_src));
        bufp->chgIData(oldp+18,(vlSelf->top_tb__DOT__dut__DOT__src_B),32);
        bufp->chgCData(oldp+19,(vlSelf->top_tb__DOT__dut__DOT__alu_control),3);
        bufp->chgIData(oldp+20,(vlSelf->top_tb__DOT__dut__DOT__result),32);
        bufp->chgBit(oldp+21,(vlSelf->top_tb__DOT__dut__DOT__zero));
        bufp->chgBit(oldp+22,(vlSelf->top_tb__DOT__dut__DOT__mem_write));
        bufp->chgBit(oldp+23,(vlSelf->top_tb__DOT__dut__DOT__mem_read));
        bufp->chgIData(oldp+24,(((IData)(vlSelf->top_tb__DOT__dut__DOT__mem_read)
                                  ? vlSelf->top_tb__DOT__dut__DOT__data_mem__DOT__mem
                                 [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__result 
                                            >> 2U))]
                                  : 0U)),32);
        bufp->chgCData(oldp+25,(vlSelf->top_tb__DOT__dut__DOT__result_src),2);
        bufp->chgIData(oldp+26,(((IData)(4U) + vlSelf->top_tb__DOT__dut__DOT__pc_addr)),32);
        bufp->chgCData(oldp+27,((0x7fU & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))),7);
        bufp->chgCData(oldp+28,((7U & ((IData)(vlSelf->__VdfgTmp_h0de70e8a__0) 
                                       >> 4U))),3);
        bufp->chgCData(oldp+29,((0x7fU & ((IData)(vlSelf->__VdfgTmp_h0dfe7ba0__0) 
                                          >> 1U))),7);
        bufp->chgIData(oldp+30,(vlSelf->top_tb__DOT__dut__DOT__data_mem__DOT__i),32);
        bufp->chgIData(oldp+31,(((IData)(vlSelf->top_tb__DOT__dut__DOT__pc_src)
                                  ? ((IData)(vlSelf->top_tb__DOT__dut__DOT__pc_src)
                                      ? (vlSelf->top_tb__DOT__dut__DOT__pc_addr 
                                         + vlSelf->top_tb__DOT__dut__DOT__imm_addr)
                                      : ((IData)(4U) 
                                         + vlSelf->top_tb__DOT__dut__DOT__pc_addr))
                                  : ((IData)(4U) + vlSelf->top_tb__DOT__dut__DOT__pc_addr))),32);
        bufp->chgCData(oldp+32,((0x1fU & (vlSelf->__VdfgTmp_hc51962fa__0 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+33,((0x1fU & (vlSelf->top_tb__DOT__dut__DOT__instruction 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+34,((0x1fU & ((IData)(vlSelf->__VdfgTmp_h6d3c8714__0) 
                                          >> 7U))),5);
        bufp->chgIData(oldp+35,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0]),32);
        bufp->chgIData(oldp+36,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[1]),32);
        bufp->chgIData(oldp+37,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[2]),32);
        bufp->chgIData(oldp+38,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[3]),32);
        bufp->chgIData(oldp+39,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[4]),32);
        bufp->chgIData(oldp+40,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[5]),32);
        bufp->chgIData(oldp+41,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[6]),32);
        bufp->chgIData(oldp+42,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[7]),32);
        bufp->chgIData(oldp+43,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[8]),32);
        bufp->chgIData(oldp+44,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[9]),32);
        bufp->chgIData(oldp+45,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[10]),32);
        bufp->chgIData(oldp+46,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[11]),32);
        bufp->chgIData(oldp+47,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[12]),32);
        bufp->chgIData(oldp+48,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[13]),32);
        bufp->chgIData(oldp+49,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[14]),32);
        bufp->chgIData(oldp+50,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[15]),32);
        bufp->chgIData(oldp+51,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[16]),32);
        bufp->chgIData(oldp+52,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[17]),32);
        bufp->chgIData(oldp+53,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[18]),32);
        bufp->chgIData(oldp+54,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[19]),32);
        bufp->chgIData(oldp+55,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[20]),32);
        bufp->chgIData(oldp+56,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[21]),32);
        bufp->chgIData(oldp+57,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[22]),32);
        bufp->chgIData(oldp+58,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[23]),32);
        bufp->chgIData(oldp+59,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[24]),32);
        bufp->chgIData(oldp+60,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[25]),32);
        bufp->chgIData(oldp+61,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[26]),32);
        bufp->chgIData(oldp+62,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[27]),32);
        bufp->chgIData(oldp+63,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[28]),32);
        bufp->chgIData(oldp+64,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[29]),32);
        bufp->chgIData(oldp+65,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[30]),32);
        bufp->chgIData(oldp+66,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[31]),32);
        bufp->chgIData(oldp+67,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__i),32);
    }
    bufp->chgBit(oldp+68,(vlSelf->top_tb__DOT__clk));
    bufp->chgBit(oldp+69,(vlSelf->top_tb__DOT__nrst));
    bufp->chgIData(oldp+70,(vlSelf->top_tb__DOT__pass_count),32);
    bufp->chgIData(oldp+71,(vlSelf->top_tb__DOT__fail_count),32);
}

void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_cleanup\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
