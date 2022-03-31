// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOPFILE_H_
#define _VTOPFILE_H_  // guard

#include "verilated_heavy.h"

//==========

class VTopFile__Syms;
class VTopFile_VerilatedVcd;


//----------

VL_MODULE(VTopFile) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT(io_RegOut,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ TopFile__DOT__alu_io_Branch;
        CData/*4:0*/ TopFile__DOT__aluControl_io_control;
        CData/*1:0*/ TopFile__DOT__alu__DOT___GEN_11;
        CData/*4:0*/ TopFile__DOT__aluControl__DOT___io_control_T_35;
        CData/*0:0*/ TopFile__DOT__control__DOT__typeDec_io_RType;
        CData/*0:0*/ TopFile__DOT__control__DOT__typeDec_io_Load;
        CData/*0:0*/ TopFile__DOT__control__DOT__typeDec_io_Store;
        CData/*0:0*/ TopFile__DOT__control__DOT__typeDec_io_Branch;
        CData/*0:0*/ TopFile__DOT__control__DOT__typeDec_io_IType;
        CData/*0:0*/ TopFile__DOT__control__DOT__typeDec_io_Jalr;
        CData/*0:0*/ TopFile__DOT__control__DOT__typeDec_io_Jal;
        CData/*0:0*/ TopFile__DOT__control__DOT__typeDec_io_Lui;
        CData/*0:0*/ TopFile__DOT__control__DOT__typeDec_io_Fmv;
        CData/*0:0*/ TopFile__DOT__control__DOT__typeDec_io_Fadd;
        CData/*0:0*/ TopFile__DOT__control__DOT__controlDec_io_Branch;
        CData/*0:0*/ TopFile__DOT__control__DOT__controlDec_io_RegWrite;
        CData/*2:0*/ TopFile__DOT__control__DOT__controlDec_io_AluOp;
        CData/*0:0*/ TopFile__DOT__control__DOT__controlDec_io_Operand_bSel;
        CData/*1:0*/ TopFile__DOT__control__DOT__controlDec_io_ExtendSel;
        CData/*1:0*/ TopFile__DOT__control__DOT__controlDec_io_NextPcSel;
        CData/*0:0*/ TopFile__DOT__control__DOT__controlDec_io_FRegWrite;
        CData/*0:0*/ TopFile__DOT__control__DOT__controlDec_io_FRegRead;
        CData/*0:0*/ TopFile__DOT__control__DOT__controlDec__DOT___GEN_12;
        IData/*31:0*/ TopFile__DOT__alu_io_in1;
        IData/*31:0*/ TopFile__DOT__alu_io_in2;
        IData/*31:0*/ TopFile__DOT__ImmediateGeneration_io_i_imm;
        IData/*31:0*/ TopFile__DOT__pc_io_in;
        IData/*31:0*/ TopFile__DOT__registerFile_io_rdata1;
        IData/*31:0*/ TopFile__DOT__registerFile_io_rdata2;
        IData/*31:0*/ TopFile__DOT__registerFile_io_wdata;
        IData/*31:0*/ TopFile__DOT__freg_io_rdata1;
        IData/*31:0*/ TopFile__DOT__freg_io_wdata;
        IData/*31:0*/ TopFile__DOT__alu__DOT___io_out_T_2;
        IData/*31:0*/ TopFile__DOT__alu__DOT___GEN_17;
        IData/*31:0*/ TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data;
        IData/*31:0*/ TopFile__DOT__jalr__DOT___io_out_T_2;
        IData/*31:0*/ TopFile__DOT__pc__DOT__reg_;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_0;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_1;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_2;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_3;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_4;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_5;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_6;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_7;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_8;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_9;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_10;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_11;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_12;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_13;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_14;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_15;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_16;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_17;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_18;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_19;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_20;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_21;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_22;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_23;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_24;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_25;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_26;
    };
    struct {
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_27;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_28;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_29;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_30;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT__regs_31;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT___GEN_13;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT___GEN_26;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT___GEN_45;
        IData/*31:0*/ TopFile__DOT__registerFile__DOT___GEN_58;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_0;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_1;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_2;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_3;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_4;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_5;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_6;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_7;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_8;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_9;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_10;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_11;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_12;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_13;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_14;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_15;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_16;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_17;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_18;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_19;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_20;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_21;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_22;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_23;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_24;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_25;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_26;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_27;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_28;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_29;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_30;
        IData/*31:0*/ TopFile__DOT__freg__DOT__regs_31;
        IData/*31:0*/ TopFile__DOT__freg__DOT___GEN_13;
        IData/*31:0*/ TopFile__DOT__freg__DOT___GEN_26;
        IData/*31:0*/ TopFile__DOT__freg__DOT___GEN_45;
        IData/*31:0*/ TopFile__DOT__freg__DOT___GEN_58;
        QData/*62:0*/ TopFile__DOT__alu__DOT___GEN_19;
        IData/*31:0*/ TopFile__DOT__dataMemory__DOT__memory[1024];
        IData/*31:0*/ TopFile__DOT__Memory__DOT__imem[1024];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTopFile__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTopFile);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VTopFile(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTopFile();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTopFile__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTopFile__Syms* symsp, bool first);
  private:
    static QData _change_request(VTopFile__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VTopFile__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VTopFile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VTopFile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VTopFile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VTopFile__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VTopFile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VTopFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
