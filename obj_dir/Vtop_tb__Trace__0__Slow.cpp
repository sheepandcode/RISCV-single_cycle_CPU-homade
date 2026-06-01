// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"nrst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"x1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"x4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"x5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"x6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"x7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"x8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+72,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"imm_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"pc_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"pc_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"read_data_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"read_data_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"imm_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+18,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"src_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"alu_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"result_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"pc_plus_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"src_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"src_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"alu_control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"zero_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("alu_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"alu_src",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"read_data_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"imm_ext",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"src_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("control_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"op_code",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+29,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+30,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+22,0,"zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"pc_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"alu_control",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+18,0,"alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"imm_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+14,0,"write_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"result_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("data_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"read_data_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("imm_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"imm_src",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"imm_ext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("inst_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"pc_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("program_counter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"pc_src",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"imm_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"pc_plus_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"pc_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"nrst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"read_data_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"read_data_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+36+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+68,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("result_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"result_src",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"pc_plus_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_top(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_top\n"); );
    // Body
    Vtop_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_tb___024root__trace_register(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
                            [1U]),32);
    bufp->fullIData(oldp+2,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
                            [2U]),32);
    bufp->fullIData(oldp+3,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
                            [3U]),32);
    bufp->fullIData(oldp+4,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
                            [4U]),32);
    bufp->fullIData(oldp+5,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
                            [5U]),32);
    bufp->fullIData(oldp+6,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
                            [6U]),32);
    bufp->fullIData(oldp+7,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
                            [7U]),32);
    bufp->fullIData(oldp+8,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs
                            [8U]),32);
    bufp->fullIData(oldp+9,(vlSelf->top_tb__DOT__dut__DOT__imm_addr),32);
    bufp->fullIData(oldp+10,(vlSelf->top_tb__DOT__dut__DOT__pc_addr),32);
    bufp->fullBit(oldp+11,(vlSelf->top_tb__DOT__dut__DOT__pc_src));
    bufp->fullIData(oldp+12,(vlSelf->top_tb__DOT__dut__DOT__instruction),32);
    bufp->fullIData(oldp+13,(((0U == (IData)(vlSelf->top_tb__DOT__dut__DOT__result_src))
                               ? vlSelf->top_tb__DOT__dut__DOT__result
                               : ((1U == (IData)(vlSelf->top_tb__DOT__dut__DOT__result_src))
                                   ? ((IData)(vlSelf->top_tb__DOT__dut__DOT__mem_read)
                                       ? vlSelf->top_tb__DOT__dut__DOT__data_mem__DOT__mem
                                      [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__result 
                                                 >> 2U))]
                                       : 0U) : ((2U 
                                                 == (IData)(vlSelf->top_tb__DOT__dut__DOT__result_src))
                                                 ? 
                                                ((IData)(4U) 
                                                 + vlSelf->top_tb__DOT__dut__DOT__pc_addr)
                                                 : vlSelf->top_tb__DOT__dut__DOT__result)))),32);
    bufp->fullBit(oldp+14,(vlSelf->top_tb__DOT__dut__DOT__write_en));
    bufp->fullIData(oldp+15,(vlSelf->top_tb__DOT__dut__DOT__read_data_1),32);
    bufp->fullIData(oldp+16,(vlSelf->top_tb__DOT__dut__DOT__read_data_2),32);
    bufp->fullCData(oldp+17,(vlSelf->top_tb__DOT__dut__DOT__imm_src),2);
    bufp->fullBit(oldp+18,(vlSelf->top_tb__DOT__dut__DOT__alu_src));
    bufp->fullIData(oldp+19,(vlSelf->top_tb__DOT__dut__DOT__src_B),32);
    bufp->fullCData(oldp+20,(vlSelf->top_tb__DOT__dut__DOT__alu_control),3);
    bufp->fullIData(oldp+21,(vlSelf->top_tb__DOT__dut__DOT__result),32);
    bufp->fullBit(oldp+22,(vlSelf->top_tb__DOT__dut__DOT__zero));
    bufp->fullBit(oldp+23,(vlSelf->top_tb__DOT__dut__DOT__mem_write));
    bufp->fullBit(oldp+24,(vlSelf->top_tb__DOT__dut__DOT__mem_read));
    bufp->fullIData(oldp+25,(((IData)(vlSelf->top_tb__DOT__dut__DOT__mem_read)
                               ? vlSelf->top_tb__DOT__dut__DOT__data_mem__DOT__mem
                              [(0xffU & (vlSelf->top_tb__DOT__dut__DOT__result 
                                         >> 2U))] : 0U)),32);
    bufp->fullCData(oldp+26,(vlSelf->top_tb__DOT__dut__DOT__result_src),2);
    bufp->fullIData(oldp+27,(((IData)(4U) + vlSelf->top_tb__DOT__dut__DOT__pc_addr)),32);
    bufp->fullCData(oldp+28,((0x7fU & (IData)(vlSelf->__VdfgTmp_hda6b043c__0))),7);
    bufp->fullCData(oldp+29,((7U & ((IData)(vlSelf->__VdfgTmp_h0de70e8a__0) 
                                    >> 4U))),3);
    bufp->fullCData(oldp+30,((0x7fU & ((IData)(vlSelf->__VdfgTmp_h0dfe7ba0__0) 
                                       >> 1U))),7);
    bufp->fullIData(oldp+31,(vlSelf->top_tb__DOT__dut__DOT__data_mem__DOT__i),32);
    bufp->fullIData(oldp+32,(((IData)(vlSelf->top_tb__DOT__dut__DOT__pc_src)
                               ? ((IData)(vlSelf->top_tb__DOT__dut__DOT__pc_src)
                                   ? (vlSelf->top_tb__DOT__dut__DOT__pc_addr 
                                      + vlSelf->top_tb__DOT__dut__DOT__imm_addr)
                                   : ((IData)(4U) + vlSelf->top_tb__DOT__dut__DOT__pc_addr))
                               : ((IData)(4U) + vlSelf->top_tb__DOT__dut__DOT__pc_addr))),32);
    bufp->fullCData(oldp+33,((0x1fU & (vlSelf->__VdfgTmp_hc51962fa__0 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+34,((0x1fU & (vlSelf->top_tb__DOT__dut__DOT__instruction 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+35,((0x1fU & ((IData)(vlSelf->__VdfgTmp_h6d3c8714__0) 
                                       >> 7U))),5);
    bufp->fullIData(oldp+36,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[0]),32);
    bufp->fullIData(oldp+37,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[1]),32);
    bufp->fullIData(oldp+38,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[2]),32);
    bufp->fullIData(oldp+39,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[3]),32);
    bufp->fullIData(oldp+40,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[4]),32);
    bufp->fullIData(oldp+41,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[5]),32);
    bufp->fullIData(oldp+42,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[6]),32);
    bufp->fullIData(oldp+43,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[7]),32);
    bufp->fullIData(oldp+44,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[8]),32);
    bufp->fullIData(oldp+45,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[9]),32);
    bufp->fullIData(oldp+46,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[10]),32);
    bufp->fullIData(oldp+47,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[11]),32);
    bufp->fullIData(oldp+48,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[12]),32);
    bufp->fullIData(oldp+49,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[13]),32);
    bufp->fullIData(oldp+50,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[14]),32);
    bufp->fullIData(oldp+51,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[15]),32);
    bufp->fullIData(oldp+52,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[16]),32);
    bufp->fullIData(oldp+53,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[17]),32);
    bufp->fullIData(oldp+54,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[18]),32);
    bufp->fullIData(oldp+55,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[19]),32);
    bufp->fullIData(oldp+56,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[20]),32);
    bufp->fullIData(oldp+57,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[21]),32);
    bufp->fullIData(oldp+58,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[22]),32);
    bufp->fullIData(oldp+59,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[23]),32);
    bufp->fullIData(oldp+60,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[24]),32);
    bufp->fullIData(oldp+61,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[25]),32);
    bufp->fullIData(oldp+62,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[26]),32);
    bufp->fullIData(oldp+63,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[27]),32);
    bufp->fullIData(oldp+64,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[28]),32);
    bufp->fullIData(oldp+65,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[29]),32);
    bufp->fullIData(oldp+66,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[30]),32);
    bufp->fullIData(oldp+67,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__regs[31]),32);
    bufp->fullIData(oldp+68,(vlSelf->top_tb__DOT__dut__DOT__reg_file__DOT__i),32);
    bufp->fullBit(oldp+69,(vlSelf->top_tb__DOT__clk));
    bufp->fullBit(oldp+70,(vlSelf->top_tb__DOT__nrst));
    bufp->fullIData(oldp+71,(vlSelf->top_tb__DOT__pass_count),32);
    bufp->fullIData(oldp+72,(vlSelf->top_tb__DOT__fail_count),32);
}
