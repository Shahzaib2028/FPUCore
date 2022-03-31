// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTopFile__Syms.h"


//======================

void VTopFile::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTopFile* t = (VTopFile*)userthis;
    VTopFile__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VTopFile::traceChgThis(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTopFile::traceChgThis__2(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->TopFile__DOT__aluControl_io_control),5);
        vcdp->chgBus(c+9,(vlTOPp->TopFile__DOT__alu_io_in1),32);
        vcdp->chgBus(c+17,(vlTOPp->TopFile__DOT__alu_io_in2),32);
        vcdp->chgBit(c+25,(vlTOPp->TopFile__DOT__alu_io_Branch));
        vcdp->chgBus(c+33,((IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_19)),32);
        vcdp->chgBus(c+41,(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp),3);
        vcdp->chgBit(c+49,((1U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                  >> 0x1eU))));
        vcdp->chgBus(c+57,((7U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                  >> 0xcU))),3);
        vcdp->chgBus(c+65,((0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)),7);
        vcdp->chgBus(c+73,((0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                     >> 0x1bU))),5);
        vcdp->chgBit(c+81,(((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
                            & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
                               & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
                                  & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)) 
                                     & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)))))));
        vcdp->chgBit(c+89,(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch));
        vcdp->chgBit(c+97,(((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
                            & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
                               & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
                                  & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load))))));
        vcdp->chgBit(c+105,(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite));
        vcdp->chgBus(c+113,(((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
                              ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
                                       ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
                                                ? 0U
                                                : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr)
                                                        ? 2U
                                                        : 
                                                       ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal)
                                                         ? 2U
                                                         : 
                                                        ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui)
                                                          ? 3U
                                                          : 0U))))))))))),2);
        vcdp->chgBit(c+121,(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel));
        vcdp->chgBus(c+129,(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel),2);
        vcdp->chgBus(c+137,(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel),2);
        vcdp->chgBit(c+145,(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite));
        vcdp->chgBit(c+153,(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegRead));
        vcdp->chgBus(c+161,(vlTOPp->TopFile__DOT__registerFile_io_rdata2),32);
        vcdp->chgBus(c+169,(vlTOPp->TopFile__DOT__dataMemory__DOT__memory
                            [(0xffU & (IData)((vlTOPp->TopFile__DOT__alu__DOT___GEN_19 
                                               >> 2U)))]),32);
        vcdp->chgBus(c+177,((0xffU & (IData)((vlTOPp->TopFile__DOT__alu__DOT___GEN_19 
                                              >> 2U)))),32);
        vcdp->chgBus(c+185,(vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data),32);
        vcdp->chgBus(c+193,(((((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
                                ? 0xfffffU : 0U) << 0xcU) 
                             | ((0xfe0U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                           >> 0x14U)) 
                                | (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                            >> 7U))))),32);
        vcdp->chgBus(c+201,((((((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
                                 ? 0x7ffffU : 0U) << 0xdU) 
                              | ((0x1000U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                             >> 0x13U)) 
                                 | ((0x800U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                               << 4U)) 
                                    | ((0x7e0U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                  >> 0x14U)) 
                                       | (0x1eU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                   >> 7U)))))) 
                             + vlTOPp->TopFile__DOT__pc__DOT__reg_)),32);
        vcdp->chgBus(c+209,((((((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
                                 ? 0x7ffU : 0U) << 0x15U) 
                              | ((0x100000U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                               >> 0xbU)) 
                                 | ((0xff000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data) 
                                    | ((0x800U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                  >> 9U)) 
                                       | (0x7feU & 
                                          (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                           >> 0x14U)))))) 
                             + vlTOPp->TopFile__DOT__pc__DOT__reg_)),32);
        vcdp->chgBus(c+217,((0xfffff000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)),32);
        vcdp->chgBus(c+225,(vlTOPp->TopFile__DOT__ImmediateGeneration_io_i_imm),32);
        vcdp->chgBus(c+233,(vlTOPp->TopFile__DOT__registerFile_io_rdata1),32);
        vcdp->chgBus(c+241,((0xfffffffeU & vlTOPp->TopFile__DOT__jalr__DOT___io_out_T_2)),32);
        vcdp->chgBus(c+249,(((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
                               & (~ (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch))) 
                              & (~ (IData)(vlTOPp->TopFile__DOT__alu_io_Branch)))
                              ? ((IData)(4U) + vlTOPp->TopFile__DOT__pc__DOT__reg_)
                              : ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
                                   & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch)) 
                                  & (~ (IData)(vlTOPp->TopFile__DOT__alu_io_Branch)))
                                  ? ((IData)(4U) + vlTOPp->TopFile__DOT__pc__DOT__reg_)
                                  : ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
                                       & (~ (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch))) 
                                      & (IData)(vlTOPp->TopFile__DOT__alu_io_Branch))
                                      ? ((IData)(4U) 
                                         + vlTOPp->TopFile__DOT__pc__DOT__reg_)
                                      : ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
                                           & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch)) 
                                          & (IData)(vlTOPp->TopFile__DOT__alu_io_Branch))
                                          ? (((((0x80000000U 
                                                 & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
                                                 ? 0x7ffffU
                                                 : 0U) 
                                               << 0xdU) 
                                              | ((0x1000U 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0x13U)) 
                                                 | ((0x800U 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                             >> 7U)))))) 
                                             + vlTOPp->TopFile__DOT__pc__DOT__reg_)
                                          : ((0U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel))
                                              ? ((IData)(4U) 
                                                 + vlTOPp->TopFile__DOT__pc__DOT__reg_)
                                              : ((2U 
                                                  == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel))
                                                  ? 
                                                 (((((0x80000000U 
                                                      & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
                                                      ? 0x7ffU
                                                      : 0U) 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data) 
                                                         | ((0x800U 
                                                             & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                  >> 0x14U)))))) 
                                                  + vlTOPp->TopFile__DOT__pc__DOT__reg_)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel))
                                                   ? 
                                                  (0xfffffffeU 
                                                   & vlTOPp->TopFile__DOT__jalr__DOT___io_out_T_2)
                                                   : 0U)))))))),32);
        vcdp->chgBus(c+257,((0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0xfU))),5);
        vcdp->chgBus(c+265,((0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x14U))),5);
        vcdp->chgBus(c+273,((0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 7U))),5);
        vcdp->chgBus(c+281,(vlTOPp->TopFile__DOT__registerFile_io_wdata),32);
        vcdp->chgBus(c+289,(vlTOPp->TopFile__DOT__freg_io_rdata1),32);
        vcdp->chgBus(c+297,(((0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                              >> 0x14U)))
                              ? ((0x1fU == (0x1fU & 
                                            (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                             >> 0x14U)))
                                  ? vlTOPp->TopFile__DOT__freg__DOT__regs_31
                                  : ((0x1eU == (0x1fU 
                                                & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                   >> 0x14U)))
                                      ? vlTOPp->TopFile__DOT__freg__DOT__regs_30
                                      : ((0x1dU == 
                                          (0x1fU & 
                                           (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                            >> 0x14U)))
                                          ? vlTOPp->TopFile__DOT__freg__DOT__regs_29
                                          : ((0x1cU 
                                              == (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0x14U)))
                                              ? vlTOPp->TopFile__DOT__freg__DOT__regs_28
                                              : ((0x1bU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlTOPp->TopFile__DOT__freg__DOT__regs_27
                                                  : vlTOPp->TopFile__DOT__freg__DOT___GEN_58)))))
                              : 0U)),32);
        vcdp->chgBus(c+305,(vlTOPp->TopFile__DOT__freg_io_wdata),32);
        vcdp->chgBit(c+313,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType));
        vcdp->chgBit(c+321,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load));
        vcdp->chgBit(c+329,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store));
        vcdp->chgBit(c+337,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch));
        vcdp->chgBit(c+345,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType));
        vcdp->chgBit(c+353,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr));
        vcdp->chgBit(c+361,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal));
        vcdp->chgBit(c+369,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui));
        vcdp->chgBit(c+377,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv));
        vcdp->chgBit(c+385,(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd));
        vcdp->chgBus(c+393,((0xffU & (IData)((vlTOPp->TopFile__DOT__alu__DOT___GEN_19 
                                              >> 2U)))),10);
        vcdp->chgBus(c+401,((0x7fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x19U))),7);
        vcdp->chgBus(c+409,(((0xfe0U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                        >> 0x14U)) 
                             | (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                         >> 7U)))),12);
        vcdp->chgBus(c+417,(((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
                              ? 0xfffffU : 0U)),20);
        vcdp->chgBit(c+425,((1U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                   >> 0x1fU))));
        vcdp->chgBit(c+433,((1U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                   >> 7U))));
        vcdp->chgBus(c+441,((0x3fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x19U))),6);
        vcdp->chgBus(c+449,((0xfU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                     >> 8U))),4);
        vcdp->chgBus(c+457,(((0x1000U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                         >> 0x13U)) 
                             | ((0x800U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                           << 4U)) 
                                | ((0x7e0U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                              >> 0x14U)) 
                                   | (0x1eU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                               >> 7U)))))),13);
        vcdp->chgBus(c+465,(((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
                              ? 0x7ffffU : 0U)),19);
        vcdp->chgBus(c+473,((0xffU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0xcU))),8);
        vcdp->chgBit(c+481,((1U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                   >> 0x14U))));
        vcdp->chgBus(c+489,((0x3ffU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                       >> 0x15U))),10);
        vcdp->chgBus(c+497,(((0x100000U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                           >> 0xbU)) 
                             | ((0xff000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data) 
                                | ((0x800U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                              >> 9U)) 
                                   | (0x7feU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                >> 0x14U)))))),21);
        vcdp->chgBus(c+505,(((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
                              ? 0xfffU : 0U)),12);
        vcdp->chgBus(c+513,((0xfffffU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                         >> 0xcU))),20);
        vcdp->chgBus(c+521,(((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
                              ? 0xfffffU : 0U)),20);
        vcdp->chgBus(c+529,((0xfffU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                       >> 0x14U))),12);
    }
}

void VTopFile::traceChgThis__3(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+537,(vlTOPp->TopFile__DOT__pc__DOT__reg_),32);
        vcdp->chgBus(c+545,((0x3ffU & (vlTOPp->TopFile__DOT__pc__DOT__reg_ 
                                       >> 2U))),10);
        vcdp->chgBus(c+553,(((IData)(4U) + vlTOPp->TopFile__DOT__pc__DOT__reg_)),32);
        vcdp->chgBus(c+561,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_0),32);
        vcdp->chgBus(c+569,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_1),32);
        vcdp->chgBus(c+577,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_2),32);
        vcdp->chgBus(c+585,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_3),32);
        vcdp->chgBus(c+593,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_4),32);
        vcdp->chgBus(c+601,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_5),32);
        vcdp->chgBus(c+609,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_6),32);
        vcdp->chgBus(c+617,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_7),32);
        vcdp->chgBus(c+625,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_8),32);
        vcdp->chgBus(c+633,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_9),32);
        vcdp->chgBus(c+641,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_10),32);
        vcdp->chgBus(c+649,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_11),32);
        vcdp->chgBus(c+657,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_12),32);
        vcdp->chgBus(c+665,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_13),32);
        vcdp->chgBus(c+673,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_14),32);
        vcdp->chgBus(c+681,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_15),32);
        vcdp->chgBus(c+689,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_16),32);
        vcdp->chgBus(c+697,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_17),32);
        vcdp->chgBus(c+705,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_18),32);
        vcdp->chgBus(c+713,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_19),32);
        vcdp->chgBus(c+721,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_20),32);
        vcdp->chgBus(c+729,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_21),32);
        vcdp->chgBus(c+737,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_22),32);
        vcdp->chgBus(c+745,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_23),32);
        vcdp->chgBus(c+753,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_24),32);
        vcdp->chgBus(c+761,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_25),32);
        vcdp->chgBus(c+769,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_26),32);
        vcdp->chgBus(c+777,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_27),32);
        vcdp->chgBus(c+785,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_28),32);
        vcdp->chgBus(c+793,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_29),32);
        vcdp->chgBus(c+801,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_30),32);
        vcdp->chgBus(c+809,(vlTOPp->TopFile__DOT__registerFile__DOT__regs_31),32);
        vcdp->chgBus(c+817,(vlTOPp->TopFile__DOT__freg__DOT__regs_0),32);
        vcdp->chgBus(c+825,(vlTOPp->TopFile__DOT__freg__DOT__regs_1),32);
        vcdp->chgBus(c+833,(vlTOPp->TopFile__DOT__freg__DOT__regs_2),32);
        vcdp->chgBus(c+841,(vlTOPp->TopFile__DOT__freg__DOT__regs_3),32);
        vcdp->chgBus(c+849,(vlTOPp->TopFile__DOT__freg__DOT__regs_4),32);
        vcdp->chgBus(c+857,(vlTOPp->TopFile__DOT__freg__DOT__regs_5),32);
        vcdp->chgBus(c+865,(vlTOPp->TopFile__DOT__freg__DOT__regs_6),32);
        vcdp->chgBus(c+873,(vlTOPp->TopFile__DOT__freg__DOT__regs_7),32);
        vcdp->chgBus(c+881,(vlTOPp->TopFile__DOT__freg__DOT__regs_8),32);
        vcdp->chgBus(c+889,(vlTOPp->TopFile__DOT__freg__DOT__regs_9),32);
        vcdp->chgBus(c+897,(vlTOPp->TopFile__DOT__freg__DOT__regs_10),32);
        vcdp->chgBus(c+905,(vlTOPp->TopFile__DOT__freg__DOT__regs_11),32);
        vcdp->chgBus(c+913,(vlTOPp->TopFile__DOT__freg__DOT__regs_12),32);
        vcdp->chgBus(c+921,(vlTOPp->TopFile__DOT__freg__DOT__regs_13),32);
        vcdp->chgBus(c+929,(vlTOPp->TopFile__DOT__freg__DOT__regs_14),32);
        vcdp->chgBus(c+937,(vlTOPp->TopFile__DOT__freg__DOT__regs_15),32);
        vcdp->chgBus(c+945,(vlTOPp->TopFile__DOT__freg__DOT__regs_16),32);
        vcdp->chgBus(c+953,(vlTOPp->TopFile__DOT__freg__DOT__regs_17),32);
        vcdp->chgBus(c+961,(vlTOPp->TopFile__DOT__freg__DOT__regs_18),32);
        vcdp->chgBus(c+969,(vlTOPp->TopFile__DOT__freg__DOT__regs_19),32);
        vcdp->chgBus(c+977,(vlTOPp->TopFile__DOT__freg__DOT__regs_20),32);
        vcdp->chgBus(c+985,(vlTOPp->TopFile__DOT__freg__DOT__regs_21),32);
        vcdp->chgBus(c+993,(vlTOPp->TopFile__DOT__freg__DOT__regs_22),32);
        vcdp->chgBus(c+1001,(vlTOPp->TopFile__DOT__freg__DOT__regs_23),32);
        vcdp->chgBus(c+1009,(vlTOPp->TopFile__DOT__freg__DOT__regs_24),32);
        vcdp->chgBus(c+1017,(vlTOPp->TopFile__DOT__freg__DOT__regs_25),32);
        vcdp->chgBus(c+1025,(vlTOPp->TopFile__DOT__freg__DOT__regs_26),32);
        vcdp->chgBus(c+1033,(vlTOPp->TopFile__DOT__freg__DOT__regs_27),32);
        vcdp->chgBus(c+1041,(vlTOPp->TopFile__DOT__freg__DOT__regs_28),32);
        vcdp->chgBus(c+1049,(vlTOPp->TopFile__DOT__freg__DOT__regs_29),32);
        vcdp->chgBus(c+1057,(vlTOPp->TopFile__DOT__freg__DOT__regs_30),32);
        vcdp->chgBus(c+1065,(vlTOPp->TopFile__DOT__freg__DOT__regs_31),32);
    }
}

void VTopFile::traceChgThis__4(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1073,(vlTOPp->clock));
        vcdp->chgBit(c+1081,(vlTOPp->reset));
        vcdp->chgBus(c+1089,(vlTOPp->io_RegOut),32);
    }
}
