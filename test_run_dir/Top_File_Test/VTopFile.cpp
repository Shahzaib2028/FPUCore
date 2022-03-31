// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopFile.h for the primary calling header

#include "VTopFile.h"
#include "VTopFile__Syms.h"

//==========

VL_CTOR_IMP(VTopFile) {
    VTopFile__Syms* __restrict vlSymsp = __VlSymsp = new VTopFile__Syms(this, name());
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTopFile::__Vconfigure(VTopFile__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTopFile::~VTopFile() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VTopFile::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTopFile::eval\n"); );
    VTopFile__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("TopFile.v", 1423, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTopFile::_eval_initial_loop(VTopFile__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("TopFile.v", 1423, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTopFile::_initial__TOP__1(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopFile::_initial__TOP__1\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*319:0*/ __Vtemp1[10];
    // Body
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x46696c65U;
    __Vtemp1[2U] = 0x6e737472U;
    __Vtemp1[3U] = 0x74682f69U;
    __Vtemp1[4U] = 0x74617061U;
    __Vtemp1[5U] = 0x612f4461U;
    __Vtemp1[6U] = 0x7363616cU;
    __Vtemp1[7U] = 0x61696e2fU;
    __Vtemp1[8U] = 0x72632f6dU;
    __Vtemp1[9U] = 0x73U;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(10, __Vtemp1)
                 , vlTOPp->TopFile__DOT__Memory__DOT__imem
                 , 0, ~VL_ULL(0));
}

VL_INLINE_OPT void VTopFile::_sequent__TOP__2(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopFile::_sequent__TOP__2\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__TopFile__DOT__dataMemory__DOT__memory__v0;
    SData/*9:0*/ __Vdlyvdim0__TopFile__DOT__dataMemory__DOT__memory__v0;
    IData/*31:0*/ __Vdlyvval__TopFile__DOT__dataMemory__DOT__memory__v0;
    // Body
    __Vdlyvset__TopFile__DOT__dataMemory__DOT__memory__v0 = 0U;
    if (((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
         & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
            & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
               & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)) 
                  & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)))))) {
        __Vdlyvval__TopFile__DOT__dataMemory__DOT__memory__v0 
            = vlTOPp->TopFile__DOT__registerFile_io_rdata2;
        __Vdlyvset__TopFile__DOT__dataMemory__DOT__memory__v0 = 1U;
        __Vdlyvdim0__TopFile__DOT__dataMemory__DOT__memory__v0 
            = (0xffU & (IData)((vlTOPp->TopFile__DOT__alu__DOT___GEN_19 
                                >> 2U)));
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x1bU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_27 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x1cU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_28 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x1dU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_29 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_30 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x1fU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_31 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x1bU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_27 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x1cU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_28 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x1dU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_29 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_30 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x1fU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_31 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x12U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_18 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x11U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_17 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x10U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_16 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0xfU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_15 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x18U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_24 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0xeU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_14 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x1aU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_26 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x17U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_23 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x14U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_20 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x13U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_19 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x19U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_25 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x15U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_21 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x16U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_22 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x13U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_19 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x12U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_18 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x11U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_17 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x10U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_16 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x18U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_24 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0xeU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_14 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x19U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_25 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0xfU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_15 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x15U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_21 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x14U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_20 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x1aU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_26 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x16U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_22 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0x17U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_23 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((6U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_6 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((5U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_5 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((4U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_4 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((3U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_3 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_0 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((2U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_2 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0xdU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_13 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0xaU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_10 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((9U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_9 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((1U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_1 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0xbU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_11 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0xcU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_12 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((7U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_7 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((8U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__freg__DOT__regs_8 
                = vlTOPp->TopFile__DOT__freg_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((7U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_7 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((6U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_6 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((5U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_5 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((1U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_1 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((3U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_3 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((4U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_4 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    vlTOPp->TopFile__DOT__registerFile__DOT__regs_0 
        = (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
            & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 7U)))) ? ((0U == 
                                             (0x1fU 
                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                 >> 7U)))
                                             ? vlTOPp->TopFile__DOT__registerFile_io_wdata
                                             : 0U) : 0U);
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0xbU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_11 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0xaU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_10 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((2U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_2 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0xcU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_12 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((0xdU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_13 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((8U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_8 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    if (((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite) 
         & (0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 7U))))) {
        if ((9U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                             >> 7U)))) {
            vlTOPp->TopFile__DOT__registerFile__DOT__regs_9 
                = vlTOPp->TopFile__DOT__registerFile_io_wdata;
        }
    }
    vlTOPp->TopFile__DOT__pc__DOT__reg_ = ((IData)(vlTOPp->reset)
                                            ? 0U : vlTOPp->TopFile__DOT__pc_io_in);
    if (__Vdlyvset__TopFile__DOT__dataMemory__DOT__memory__v0) {
        vlTOPp->TopFile__DOT__dataMemory__DOT__memory[__Vdlyvdim0__TopFile__DOT__dataMemory__DOT__memory__v0] 
            = __Vdlyvval__TopFile__DOT__dataMemory__DOT__memory__v0;
    }
    vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
        = vlTOPp->TopFile__DOT__Memory__DOT__imem[(0x3ffU 
                                                   & (vlTOPp->TopFile__DOT__pc__DOT__reg_ 
                                                      >> 2U))];
    vlTOPp->TopFile__DOT__ImmediateGeneration_io_i_imm 
        = ((((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
              ? 0xfffffU : 0U) << 0xcU) | (0xfffU & 
                                           (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                            >> 0x14U)));
    vlTOPp->TopFile__DOT__freg__DOT___GEN_45 = ((0xdU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0x14U)))
                                                 ? vlTOPp->TopFile__DOT__freg__DOT__regs_13
                                                 : 
                                                ((0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlTOPp->TopFile__DOT__freg__DOT__regs_12
                                                  : 
                                                 ((0xbU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlTOPp->TopFile__DOT__freg__DOT__regs_11
                                                   : 
                                                  ((0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TopFile__DOT__freg__DOT__regs_10
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TopFile__DOT__freg__DOT__regs_9
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlTOPp->TopFile__DOT__freg__DOT__regs_8
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                           >> 0x14U)))
                                                       ? vlTOPp->TopFile__DOT__freg__DOT__regs_7
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                            >> 0x14U)))
                                                        ? vlTOPp->TopFile__DOT__freg__DOT__regs_6
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                             >> 0x14U)))
                                                         ? vlTOPp->TopFile__DOT__freg__DOT__regs_5
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                              >> 0x14U)))
                                                          ? vlTOPp->TopFile__DOT__freg__DOT__regs_4
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                               >> 0x14U)))
                                                           ? vlTOPp->TopFile__DOT__freg__DOT__regs_3
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                >> 0x14U)))
                                                            ? vlTOPp->TopFile__DOT__freg__DOT__regs_2
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                 >> 0x14U)))
                                                             ? vlTOPp->TopFile__DOT__freg__DOT__regs_1
                                                             : vlTOPp->TopFile__DOT__freg__DOT__regs_0)))))))))))));
    vlTOPp->TopFile__DOT__registerFile__DOT___GEN_45 
        = ((0xdU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                              >> 0x14U))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_13
            : ((0xcU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                  >> 0x14U))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_12
                : ((0xbU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x14U))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_11
                    : ((0xaU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                          >> 0x14U)))
                        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_10
                        : ((9U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                            >> 0x14U)))
                            ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_9
                            : ((8U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                >> 0x14U)))
                                ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                            >> 0x14U)))
                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                  >> 0x14U)))
                                        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                            ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                    >> 0x14U)))
                                                ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_1
                                                      : vlTOPp->TopFile__DOT__registerFile__DOT__regs_0)))))))))))));
    vlTOPp->TopFile__DOT__freg__DOT___GEN_13 = ((0xdU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0xfU)))
                                                 ? vlTOPp->TopFile__DOT__freg__DOT__regs_13
                                                 : 
                                                ((0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                                  ? vlTOPp->TopFile__DOT__freg__DOT__regs_12
                                                  : 
                                                 ((0xbU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0xfU)))
                                                   ? vlTOPp->TopFile__DOT__freg__DOT__regs_11
                                                   : 
                                                  ((0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlTOPp->TopFile__DOT__freg__DOT__regs_10
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlTOPp->TopFile__DOT__freg__DOT__regs_9
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlTOPp->TopFile__DOT__freg__DOT__regs_8
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlTOPp->TopFile__DOT__freg__DOT__regs_7
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlTOPp->TopFile__DOT__freg__DOT__regs_6
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                             >> 0xfU)))
                                                         ? vlTOPp->TopFile__DOT__freg__DOT__regs_5
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                              >> 0xfU)))
                                                          ? vlTOPp->TopFile__DOT__freg__DOT__regs_4
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                               >> 0xfU)))
                                                           ? vlTOPp->TopFile__DOT__freg__DOT__regs_3
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                >> 0xfU)))
                                                            ? vlTOPp->TopFile__DOT__freg__DOT__regs_2
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                 >> 0xfU)))
                                                             ? vlTOPp->TopFile__DOT__freg__DOT__regs_1
                                                             : vlTOPp->TopFile__DOT__freg__DOT__regs_0)))))))))))));
    vlTOPp->TopFile__DOT__registerFile__DOT___GEN_13 
        = ((0xdU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                              >> 0xfU))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_13
            : ((0xcU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                  >> 0xfU))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_12
                : ((0xbU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0xfU))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_11
                    : ((0xaU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                          >> 0xfU)))
                        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_10
                        : ((9U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                            >> 0xfU)))
                            ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_9
                            : ((8U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                >> 0xfU)))
                                ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                            >> 0xfU)))
                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                  >> 0xfU)))
                                        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                            ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                    >> 0xfU)))
                                                ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_1
                                                      : vlTOPp->TopFile__DOT__registerFile__DOT__regs_0)))))))))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x1bU))) & 
                  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
              & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                       & ((0x63U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                          & (0x13U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x1bU))) & 
                  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
              & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                    & (0x23U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x1bU))) & 
                  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
              & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                       & (0x63U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x1bU))) & 
                  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
              & (0x33U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x1bU))) & 
                  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
              & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                 & (3U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x1bU))) & 
                  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
              & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                       & ((0x63U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                          & ((0x13U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                             & ((0x67U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                                & ((0x6fU != (0x7fU 
                                              & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                                   & (0x37U == (0x7fU 
                                                & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))))))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x1bU))) & 
                  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
              & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                       & ((0x63U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                          & ((0x13U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                             & (0x67U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x1bU))) & 
                  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
              & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                       & ((0x63U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                          & ((0x13U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                             & ((0x67U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                                & (0x6fU == (0x7fU 
                                             & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))))))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                  >> 0x1bU))) & (0x53U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd 
        = ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 0x1bU))) & (0x53U == 
                                           (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)));
    vlTOPp->TopFile__DOT__freg__DOT___GEN_58 = ((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0x14U)))
                                                 ? vlTOPp->TopFile__DOT__freg__DOT__regs_26
                                                 : 
                                                ((0x19U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlTOPp->TopFile__DOT__freg__DOT__regs_25
                                                  : 
                                                 ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlTOPp->TopFile__DOT__freg__DOT__regs_24
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TopFile__DOT__freg__DOT__regs_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TopFile__DOT__freg__DOT__regs_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlTOPp->TopFile__DOT__freg__DOT__regs_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                           >> 0x14U)))
                                                       ? vlTOPp->TopFile__DOT__freg__DOT__regs_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                            >> 0x14U)))
                                                        ? vlTOPp->TopFile__DOT__freg__DOT__regs_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                             >> 0x14U)))
                                                         ? vlTOPp->TopFile__DOT__freg__DOT__regs_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                              >> 0x14U)))
                                                          ? vlTOPp->TopFile__DOT__freg__DOT__regs_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                               >> 0x14U)))
                                                           ? vlTOPp->TopFile__DOT__freg__DOT__regs_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                >> 0x14U)))
                                                            ? vlTOPp->TopFile__DOT__freg__DOT__regs_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                 >> 0x14U)))
                                                             ? vlTOPp->TopFile__DOT__freg__DOT__regs_14
                                                             : vlTOPp->TopFile__DOT__freg__DOT___GEN_45)))))))))))));
    vlTOPp->TopFile__DOT__registerFile__DOT___GEN_58 
        = ((0x1aU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 0x14U))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_26
            : ((0x19U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                   >> 0x14U))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_25
                : ((0x18U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                       >> 0x14U))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_24
                    : ((0x17U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                           >> 0x14U)))
                        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_23
                        : ((0x16U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                               >> 0x14U)))
                            ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_22
                            : ((0x15U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                   >> 0x14U)))
                                ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_21
                                : ((0x14U == (0x1fU 
                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                 >> 0x14U)))
                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0x14U)))
                                        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                >> 0x14U)))
                                            ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                    >> 0x14U)))
                                                ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_14
                                                      : vlTOPp->TopFile__DOT__registerFile__DOT___GEN_45)))))))))))));
    vlTOPp->TopFile__DOT__freg__DOT___GEN_26 = ((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0xfU)))
                                                 ? vlTOPp->TopFile__DOT__freg__DOT__regs_26
                                                 : 
                                                ((0x19U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                                  ? vlTOPp->TopFile__DOT__freg__DOT__regs_25
                                                  : 
                                                 ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0xfU)))
                                                   ? vlTOPp->TopFile__DOT__freg__DOT__regs_24
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlTOPp->TopFile__DOT__freg__DOT__regs_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlTOPp->TopFile__DOT__freg__DOT__regs_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlTOPp->TopFile__DOT__freg__DOT__regs_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlTOPp->TopFile__DOT__freg__DOT__regs_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlTOPp->TopFile__DOT__freg__DOT__regs_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                             >> 0xfU)))
                                                         ? vlTOPp->TopFile__DOT__freg__DOT__regs_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                              >> 0xfU)))
                                                          ? vlTOPp->TopFile__DOT__freg__DOT__regs_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                               >> 0xfU)))
                                                           ? vlTOPp->TopFile__DOT__freg__DOT__regs_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                >> 0xfU)))
                                                            ? vlTOPp->TopFile__DOT__freg__DOT__regs_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                 >> 0xfU)))
                                                             ? vlTOPp->TopFile__DOT__freg__DOT__regs_14
                                                             : vlTOPp->TopFile__DOT__freg__DOT___GEN_13)))))))))))));
    vlTOPp->TopFile__DOT__registerFile__DOT___GEN_26 
        = ((0x1aU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 0xfU))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_26
            : ((0x19U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                   >> 0xfU))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_25
                : ((0x18U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                       >> 0xfU))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_24
                    : ((0x17U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                           >> 0xfU)))
                        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_23
                        : ((0x16U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                               >> 0xfU)))
                            ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_22
                            : ((0x15U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                   >> 0xfU)))
                                ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_21
                                : ((0x14U == (0x1fU 
                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                 >> 0xfU)))
                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0xfU)))
                                        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                >> 0xfU)))
                                            ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                    >> 0xfU)))
                                                ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_14
                                                      : vlTOPp->TopFile__DOT__registerFile__DOT___GEN_13)))))))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec__DOT___GEN_12 
        = ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr)) 
           & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal)) 
              & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui)));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite 
        = ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
           & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
              & ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType) 
                 | ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load) 
                    | ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)) 
                       & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)) 
                          & ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType) 
                             | ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr) 
                                | ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal) 
                                   | (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui))))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch 
        = ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
           & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
              & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
                 & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)) 
                    & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)) 
                       & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel 
        = ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
            ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
                     ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
                              ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
                                       ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)
                                                ? 0U
                                                : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal)
                                                       ? 2U
                                                       : 0U)))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegRead 
        = ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
           & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite 
        = ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv) 
           | (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp 
        = ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
            ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
                     ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
                              ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
                                       ? 4U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)
                                                ? 5U
                                                : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType)
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui)
                                                        ? 6U
                                                        : 0U))))))))));
    vlTOPp->TopFile__DOT__registerFile_io_rdata2 = 
        ((0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                          >> 0x14U))) ? ((0x1fU == 
                                          (0x1fU & 
                                           (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                            >> 0x14U)))
                                          ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_31
                                          : ((0x1eU 
                                              == (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0x14U)))
                                              ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_30
                                              : ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_27
                                                    : vlTOPp->TopFile__DOT__registerFile__DOT___GEN_58)))))
          : 0U);
    vlTOPp->TopFile__DOT__freg_io_rdata1 = ((0U != 
                                             (0x1fU 
                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                 >> 0xfU)))
                                             ? ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0xfU)))
                                                 ? vlTOPp->TopFile__DOT__freg__DOT__regs_31
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                                  ? vlTOPp->TopFile__DOT__freg__DOT__regs_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0xfU)))
                                                   ? vlTOPp->TopFile__DOT__freg__DOT__regs_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlTOPp->TopFile__DOT__freg__DOT__regs_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlTOPp->TopFile__DOT__freg__DOT__regs_27
                                                     : vlTOPp->TopFile__DOT__freg__DOT___GEN_26)))))
                                             : 0U);
    vlTOPp->TopFile__DOT__registerFile_io_rdata1 = 
        ((0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                          >> 0xfU))) ? ((0x1fU == (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                         ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_31
                                         : ((0x1eU 
                                             == (0x1fU 
                                                 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                    >> 0xfU)))
                                             ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_30
                                             : ((0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0xfU)))
                                                 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_29
                                                 : 
                                                ((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                                  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_28
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0xfU)))
                                                   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_27
                                                   : vlTOPp->TopFile__DOT__registerFile__DOT___GEN_26)))))
          : 0U);
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel 
        = ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
           & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
              & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
                 & ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load) 
                    | ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store) 
                       | ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)) 
                          & ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType) 
                             | (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec__DOT___GEN_12))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel 
        = ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
            ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
                     ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
                              ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
                                       ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)
                                                ? 2U
                                                : (
                                                   (~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)) 
                                                   & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType)) 
                                                      & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec__DOT___GEN_12))))))));
    vlTOPp->TopFile__DOT__aluControl__DOT___io_control_T_35 
        = (((0U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
            & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
               >> 0x1eU)) ? (8U | (7U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                         >> 0xcU)))
            : ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
                 & (5U == (7U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                 >> 0xcU)))) & (~ (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                   >> 0x1eU)))
                ? (7U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                         >> 0xcU)) : ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
                                        & (5U == (7U 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0xcU)))) 
                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                          >> 0x1eU))
                                       ? (8U | (7U 
                                                & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                   >> 0xcU)))
                                       : (((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
                                           & (1U == 
                                              (7U & 
                                               (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                >> 0xcU))))
                                           ? (7U & 
                                              (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                               >> 0xcU))
                                           : ((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp))
                                               ? (7U 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0xcU))
                                               : ((2U 
                                                   == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp))
                                                   ? 
                                                  (0x10U 
                                                   | (7U 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0xcU)))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp))
                                                    ? 0x1fU
                                                    : 0U)))))));
    vlTOPp->TopFile__DOT__jalr__DOT___io_out_T_2 = 
        (vlTOPp->TopFile__DOT__registerFile_io_rdata1 
         + vlTOPp->TopFile__DOT__ImmediateGeneration_io_i_imm);
    vlTOPp->TopFile__DOT__alu_io_in1 = (((0U == ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
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
                                                           : 0U))))))))))) 
                                         | (3U == ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
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
                                                             : 0U))))))))))))
                                         ? ((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegRead)
                                             ? vlTOPp->TopFile__DOT__freg_io_rdata1
                                             : vlTOPp->TopFile__DOT__registerFile_io_rdata1)
                                         : ((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegRead)
                                             ? ((IData)(4U) 
                                                + vlTOPp->TopFile__DOT__pc__DOT__reg_)
                                             : vlTOPp->TopFile__DOT__freg_io_rdata1));
    vlTOPp->TopFile__DOT__alu_io_in2 = ((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite)
                                         ? ((0U != 
                                             (0x1fU 
                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                 >> 0x14U)))
                                             ? ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0x14U)))
                                                 ? vlTOPp->TopFile__DOT__freg__DOT__regs_31
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlTOPp->TopFile__DOT__freg__DOT__regs_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlTOPp->TopFile__DOT__freg__DOT__regs_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TopFile__DOT__freg__DOT__regs_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TopFile__DOT__freg__DOT__regs_27
                                                     : vlTOPp->TopFile__DOT__freg__DOT___GEN_58)))))
                                             : 0U) : 
                                        (((0U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel)) 
                                          & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel))
                                          ? vlTOPp->TopFile__DOT__ImmediateGeneration_io_i_imm
                                          : (((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel)) 
                                              & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel))
                                              ? (0xfffff000U 
                                                 & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
                                              : (((2U 
                                                   == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel)) 
                                                  & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel))
                                                  ? 
                                                 ((((0x80000000U 
                                                     & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
                                                     ? 0xfffffU
                                                     : 0U) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                           >> 7U))))
                                                  : vlTOPp->TopFile__DOT__registerFile_io_rdata2))));
    vlTOPp->TopFile__DOT__aluControl_io_control = (
                                                   ((0U 
                                                     == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
                                                    & (~ 
                                                       (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0x1eU)))
                                                    ? 
                                                   (7U 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0xcU))
                                                    : (IData)(vlTOPp->TopFile__DOT__aluControl__DOT___io_control_T_35));
    vlTOPp->TopFile__DOT__alu__DOT___io_out_T_2 = (vlTOPp->TopFile__DOT__alu_io_in1 
                                                   + vlTOPp->TopFile__DOT__alu_io_in2);
    vlTOPp->TopFile__DOT__alu__DOT___GEN_11 = ((0x15U 
                                                == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                ? (
                                                   VL_GTES_III(1,32,32, vlTOPp->TopFile__DOT__alu_io_in1, vlTOPp->TopFile__DOT__alu_io_in2)
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                    ? 
                                                   ((vlTOPp->TopFile__DOT__alu_io_in1 
                                                     >= vlTOPp->TopFile__DOT__alu_io_in2)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (((3U 
                                                      == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)) 
                                                     | (0x16U 
                                                        == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)))
                                                     ? 
                                                    ((vlTOPp->TopFile__DOT__alu_io_in1 
                                                      < vlTOPp->TopFile__DOT__alu_io_in2)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                      ? 
                                                     ((vlTOPp->TopFile__DOT__alu_io_in1 
                                                       == vlTOPp->TopFile__DOT__alu_io_in2)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     (((2U 
                                                        == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)) 
                                                       | (0x14U 
                                                          == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)))
                                                       ? 
                                                      (VL_LTS_III(1,32,32, vlTOPp->TopFile__DOT__alu_io_in1, vlTOPp->TopFile__DOT__alu_io_in2)
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      ((vlTOPp->TopFile__DOT__alu_io_in1 
                                                        != vlTOPp->TopFile__DOT__alu_io_in2)
                                                        ? 1U
                                                        : 0U))))));
    vlTOPp->TopFile__DOT__alu__DOT___GEN_17 = ((4U 
                                                == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                ? (vlTOPp->TopFile__DOT__alu_io_in1 
                                                   ^ vlTOPp->TopFile__DOT__alu_io_in2)
                                                : (
                                                   ((5U 
                                                     == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)) 
                                                    | (0xdU 
                                                       == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlTOPp->TopFile__DOT__alu_io_in1, 
                                                                  (0x1fU 
                                                                   & vlTOPp->TopFile__DOT__alu_io_in2))
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                     ? 
                                                    (vlTOPp->TopFile__DOT__alu_io_in1 
                                                     | vlTOPp->TopFile__DOT__alu_io_in2)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                      ? 
                                                     (vlTOPp->TopFile__DOT__alu_io_in1 
                                                      & vlTOPp->TopFile__DOT__alu_io_in2)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                       ? 
                                                      (vlTOPp->TopFile__DOT__alu_io_in1 
                                                       - vlTOPp->TopFile__DOT__alu_io_in2)
                                                       : 
                                                      ((0x1fU 
                                                        == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                        ? vlTOPp->TopFile__DOT__alu_io_in1
                                                        : 
                                                       ((0xfffffffcU 
                                                         & (VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_11) 
                                                                                >> 1U)))) 
                                                            << 2U)) 
                                                        | (IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_11))))))));
    vlTOPp->TopFile__DOT__alu__DOT___GEN_19 = (VL_ULL(0x7fffffffffffffff) 
                                               & ((0U 
                                                   == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->TopFile__DOT__alu__DOT___io_out_T_2 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->TopFile__DOT__alu__DOT___io_out_T_2)))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                    ? 
                                                   ((((QData)((IData)(
                                                                      (0x7fffffffU 
                                                                       & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->TopFile__DOT__alu_io_in1 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlTOPp->TopFile__DOT__alu_io_in1))) 
                                                    << 
                                                    (0x1fU 
                                                     & vlTOPp->TopFile__DOT__alu_io_in2))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x7fffffffU 
                                                                      & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->TopFile__DOT__alu__DOT___GEN_17 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_17))))));
    vlTOPp->TopFile__DOT__freg_io_wdata = ((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite)
                                            ? (IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_19)
                                            : 0U);
    vlTOPp->TopFile__DOT__registerFile_io_wdata = (
                                                   ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
                                                    & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
                                                       & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
                                                          & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load))))
                                                    ? 
                                                   vlTOPp->TopFile__DOT__dataMemory__DOT__memory
                                                   [
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlTOPp->TopFile__DOT__alu__DOT___GEN_19 
                                                               >> 2U)))]
                                                    : (IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_19));
    vlTOPp->TopFile__DOT__alu_io_Branch = ((1U == (IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_19)) 
                                           & (2U == 
                                              (3U & 
                                               ((IData)(vlTOPp->TopFile__DOT__aluControl_io_control) 
                                                >> 3U))));
    vlTOPp->io_RegOut = vlTOPp->TopFile__DOT__registerFile_io_wdata;
    vlTOPp->TopFile__DOT__pc_io_in = ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
                                        & (~ (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch))) 
                                       & (~ (IData)(vlTOPp->TopFile__DOT__alu_io_Branch)))
                                       ? ((IData)(4U) 
                                          + vlTOPp->TopFile__DOT__pc__DOT__reg_)
                                       : ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
                                            & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch)) 
                                           & (~ (IData)(vlTOPp->TopFile__DOT__alu_io_Branch)))
                                           ? ((IData)(4U) 
                                              + vlTOPp->TopFile__DOT__pc__DOT__reg_)
                                           : ((((1U 
                                                 == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
                                                & (~ (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch))) 
                                               & (IData)(vlTOPp->TopFile__DOT__alu_io_Branch))
                                               ? ((IData)(4U) 
                                                  + vlTOPp->TopFile__DOT__pc__DOT__reg_)
                                               : ((
                                                   ((1U 
                                                     == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
                                                    & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch)) 
                                                   & (IData)(vlTOPp->TopFile__DOT__alu_io_Branch))
                                                   ? 
                                                  (((((0x80000000U 
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
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlTOPp->TopFile__DOT__pc__DOT__reg_)
                                                    : 
                                                   ((2U 
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
                                                      : 0U)))))));
}

void VTopFile::_settle__TOP__3(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopFile::_settle__TOP__3\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
        = vlTOPp->TopFile__DOT__Memory__DOT__imem[(0x3ffU 
                                                   & (vlTOPp->TopFile__DOT__pc__DOT__reg_ 
                                                      >> 2U))];
    vlTOPp->TopFile__DOT__ImmediateGeneration_io_i_imm 
        = ((((0x80000000U & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
              ? 0xfffffU : 0U) << 0xcU) | (0xfffU & 
                                           (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                            >> 0x14U)));
    vlTOPp->TopFile__DOT__freg__DOT___GEN_45 = ((0xdU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0x14U)))
                                                 ? vlTOPp->TopFile__DOT__freg__DOT__regs_13
                                                 : 
                                                ((0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlTOPp->TopFile__DOT__freg__DOT__regs_12
                                                  : 
                                                 ((0xbU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlTOPp->TopFile__DOT__freg__DOT__regs_11
                                                   : 
                                                  ((0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TopFile__DOT__freg__DOT__regs_10
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TopFile__DOT__freg__DOT__regs_9
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlTOPp->TopFile__DOT__freg__DOT__regs_8
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                           >> 0x14U)))
                                                       ? vlTOPp->TopFile__DOT__freg__DOT__regs_7
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                            >> 0x14U)))
                                                        ? vlTOPp->TopFile__DOT__freg__DOT__regs_6
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                             >> 0x14U)))
                                                         ? vlTOPp->TopFile__DOT__freg__DOT__regs_5
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                              >> 0x14U)))
                                                          ? vlTOPp->TopFile__DOT__freg__DOT__regs_4
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                               >> 0x14U)))
                                                           ? vlTOPp->TopFile__DOT__freg__DOT__regs_3
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                >> 0x14U)))
                                                            ? vlTOPp->TopFile__DOT__freg__DOT__regs_2
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                 >> 0x14U)))
                                                             ? vlTOPp->TopFile__DOT__freg__DOT__regs_1
                                                             : vlTOPp->TopFile__DOT__freg__DOT__regs_0)))))))))))));
    vlTOPp->TopFile__DOT__registerFile__DOT___GEN_45 
        = ((0xdU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                              >> 0x14U))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_13
            : ((0xcU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                  >> 0x14U))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_12
                : ((0xbU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x14U))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_11
                    : ((0xaU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                          >> 0x14U)))
                        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_10
                        : ((9U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                            >> 0x14U)))
                            ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_9
                            : ((8U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                >> 0x14U)))
                                ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                            >> 0x14U)))
                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                  >> 0x14U)))
                                        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                            ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                    >> 0x14U)))
                                                ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_1
                                                      : vlTOPp->TopFile__DOT__registerFile__DOT__regs_0)))))))))))));
    vlTOPp->TopFile__DOT__freg__DOT___GEN_13 = ((0xdU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0xfU)))
                                                 ? vlTOPp->TopFile__DOT__freg__DOT__regs_13
                                                 : 
                                                ((0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                                  ? vlTOPp->TopFile__DOT__freg__DOT__regs_12
                                                  : 
                                                 ((0xbU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0xfU)))
                                                   ? vlTOPp->TopFile__DOT__freg__DOT__regs_11
                                                   : 
                                                  ((0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlTOPp->TopFile__DOT__freg__DOT__regs_10
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlTOPp->TopFile__DOT__freg__DOT__regs_9
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlTOPp->TopFile__DOT__freg__DOT__regs_8
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlTOPp->TopFile__DOT__freg__DOT__regs_7
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlTOPp->TopFile__DOT__freg__DOT__regs_6
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                             >> 0xfU)))
                                                         ? vlTOPp->TopFile__DOT__freg__DOT__regs_5
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                              >> 0xfU)))
                                                          ? vlTOPp->TopFile__DOT__freg__DOT__regs_4
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                               >> 0xfU)))
                                                           ? vlTOPp->TopFile__DOT__freg__DOT__regs_3
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                >> 0xfU)))
                                                            ? vlTOPp->TopFile__DOT__freg__DOT__regs_2
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                 >> 0xfU)))
                                                             ? vlTOPp->TopFile__DOT__freg__DOT__regs_1
                                                             : vlTOPp->TopFile__DOT__freg__DOT__regs_0)))))))))))));
    vlTOPp->TopFile__DOT__registerFile__DOT___GEN_13 
        = ((0xdU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                              >> 0xfU))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_13
            : ((0xcU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                  >> 0xfU))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_12
                : ((0xbU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0xfU))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_11
                    : ((0xaU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                          >> 0xfU)))
                        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_10
                        : ((9U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                            >> 0xfU)))
                            ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_9
                            : ((8U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                >> 0xfU)))
                                ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                            >> 0xfU)))
                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                  >> 0xfU)))
                                        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                            ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                    >> 0xfU)))
                                                ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_1
                                                      : vlTOPp->TopFile__DOT__registerFile__DOT__regs_0)))))))))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x1bU))) & 
                  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
              & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                       & ((0x63U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                          & (0x13U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x1bU))) & 
                  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
              & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                    & (0x23U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x1bU))) & 
                  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
              & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                       & (0x63U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x1bU))) & 
                  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
              & (0x33U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x1bU))) & 
                  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
              & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                 & (3U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x1bU))) & 
                  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
              & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                       & ((0x63U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                          & ((0x13U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                             & ((0x67U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                                & ((0x6fU != (0x7fU 
                                              & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                                   & (0x37U == (0x7fU 
                                                & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))))))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x1bU))) & 
                  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
              & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                       & ((0x63U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                          & ((0x13U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                             & (0x67U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((~ ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                      >> 0x1bU))) & 
                  (0x53U == (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
              & ((0x33U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                 & ((3U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                    & ((0x23U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                       & ((0x63U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                          & ((0x13U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                             & ((0x67U != (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)) 
                                & (0x6fU == (0x7fU 
                                             & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))))))))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv 
        = ((~ ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                >> 0x1bU))) & (0x53U 
                                               == (0x7fU 
                                                   & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)))) 
           & ((0x1eU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                  >> 0x1bU))) & (0x53U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data))));
    vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd 
        = ((0U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                            >> 0x1bU))) & (0x53U == 
                                           (0x7fU & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)));
    vlTOPp->TopFile__DOT__freg__DOT___GEN_58 = ((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0x14U)))
                                                 ? vlTOPp->TopFile__DOT__freg__DOT__regs_26
                                                 : 
                                                ((0x19U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlTOPp->TopFile__DOT__freg__DOT__regs_25
                                                  : 
                                                 ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlTOPp->TopFile__DOT__freg__DOT__regs_24
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TopFile__DOT__freg__DOT__regs_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TopFile__DOT__freg__DOT__regs_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlTOPp->TopFile__DOT__freg__DOT__regs_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                           >> 0x14U)))
                                                       ? vlTOPp->TopFile__DOT__freg__DOT__regs_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                            >> 0x14U)))
                                                        ? vlTOPp->TopFile__DOT__freg__DOT__regs_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                             >> 0x14U)))
                                                         ? vlTOPp->TopFile__DOT__freg__DOT__regs_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                              >> 0x14U)))
                                                          ? vlTOPp->TopFile__DOT__freg__DOT__regs_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                               >> 0x14U)))
                                                           ? vlTOPp->TopFile__DOT__freg__DOT__regs_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                >> 0x14U)))
                                                            ? vlTOPp->TopFile__DOT__freg__DOT__regs_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                 >> 0x14U)))
                                                             ? vlTOPp->TopFile__DOT__freg__DOT__regs_14
                                                             : vlTOPp->TopFile__DOT__freg__DOT___GEN_45)))))))))))));
    vlTOPp->TopFile__DOT__registerFile__DOT___GEN_58 
        = ((0x1aU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 0x14U))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_26
            : ((0x19U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                   >> 0x14U))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_25
                : ((0x18U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                       >> 0x14U))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_24
                    : ((0x17U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                           >> 0x14U)))
                        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_23
                        : ((0x16U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                               >> 0x14U)))
                            ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_22
                            : ((0x15U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                   >> 0x14U)))
                                ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_21
                                : ((0x14U == (0x1fU 
                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                 >> 0x14U)))
                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0x14U)))
                                        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                >> 0x14U)))
                                            ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                    >> 0x14U)))
                                                ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_14
                                                      : vlTOPp->TopFile__DOT__registerFile__DOT___GEN_45)))))))))))));
    vlTOPp->TopFile__DOT__freg__DOT___GEN_26 = ((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0xfU)))
                                                 ? vlTOPp->TopFile__DOT__freg__DOT__regs_26
                                                 : 
                                                ((0x19U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                                  ? vlTOPp->TopFile__DOT__freg__DOT__regs_25
                                                  : 
                                                 ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0xfU)))
                                                   ? vlTOPp->TopFile__DOT__freg__DOT__regs_24
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlTOPp->TopFile__DOT__freg__DOT__regs_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlTOPp->TopFile__DOT__freg__DOT__regs_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlTOPp->TopFile__DOT__freg__DOT__regs_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlTOPp->TopFile__DOT__freg__DOT__regs_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlTOPp->TopFile__DOT__freg__DOT__regs_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                             >> 0xfU)))
                                                         ? vlTOPp->TopFile__DOT__freg__DOT__regs_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                              >> 0xfU)))
                                                          ? vlTOPp->TopFile__DOT__freg__DOT__regs_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                               >> 0xfU)))
                                                           ? vlTOPp->TopFile__DOT__freg__DOT__regs_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                >> 0xfU)))
                                                            ? vlTOPp->TopFile__DOT__freg__DOT__regs_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                                 >> 0xfU)))
                                                             ? vlTOPp->TopFile__DOT__freg__DOT__regs_14
                                                             : vlTOPp->TopFile__DOT__freg__DOT___GEN_13)))))))))))));
    vlTOPp->TopFile__DOT__registerFile__DOT___GEN_26 
        = ((0x1aU == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                               >> 0xfU))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_26
            : ((0x19U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                   >> 0xfU))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_25
                : ((0x18U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                       >> 0xfU))) ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_24
                    : ((0x17U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                           >> 0xfU)))
                        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_23
                        : ((0x16U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                               >> 0xfU)))
                            ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_22
                            : ((0x15U == (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                   >> 0xfU)))
                                ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_21
                                : ((0x14U == (0x1fU 
                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                 >> 0xfU)))
                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0xfU)))
                                        ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                >> 0xfU)))
                                            ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                    >> 0xfU)))
                                                ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_14
                                                      : vlTOPp->TopFile__DOT__registerFile__DOT___GEN_13)))))))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec__DOT___GEN_12 
        = ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr)) 
           & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal)) 
              & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui)));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_RegWrite 
        = ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
           & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
              & ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType) 
                 | ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load) 
                    | ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)) 
                       & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)) 
                          & ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType) 
                             | ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr) 
                                | ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal) 
                                   | (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui))))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch 
        = ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
           & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
              & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
                 & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)) 
                    & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)) 
                       & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel 
        = ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
            ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
                     ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
                              ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
                                       ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)
                                                ? 0U
                                                : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal)
                                                       ? 2U
                                                       : 0U)))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegRead 
        = ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
           & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite 
        = ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv) 
           | (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp 
        = ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
            ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
                     ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
                              ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
                                       ? 4U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)
                                                ? 5U
                                                : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType)
                                                     ? 1U
                                                     : 
                                                    ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jalr)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Jal)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Lui)
                                                        ? 6U
                                                        : 0U))))))))));
    vlTOPp->TopFile__DOT__registerFile_io_rdata2 = 
        ((0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                          >> 0x14U))) ? ((0x1fU == 
                                          (0x1fU & 
                                           (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                            >> 0x14U)))
                                          ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_31
                                          : ((0x1eU 
                                              == (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0x14U)))
                                              ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_30
                                              : ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_27
                                                    : vlTOPp->TopFile__DOT__registerFile__DOT___GEN_58)))))
          : 0U);
    vlTOPp->TopFile__DOT__freg_io_rdata1 = ((0U != 
                                             (0x1fU 
                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                 >> 0xfU)))
                                             ? ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0xfU)))
                                                 ? vlTOPp->TopFile__DOT__freg__DOT__regs_31
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                                  ? vlTOPp->TopFile__DOT__freg__DOT__regs_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0xfU)))
                                                   ? vlTOPp->TopFile__DOT__freg__DOT__regs_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlTOPp->TopFile__DOT__freg__DOT__regs_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlTOPp->TopFile__DOT__freg__DOT__regs_27
                                                     : vlTOPp->TopFile__DOT__freg__DOT___GEN_26)))))
                                             : 0U);
    vlTOPp->TopFile__DOT__registerFile_io_rdata1 = 
        ((0U != (0x1fU & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                          >> 0xfU))) ? ((0x1fU == (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                         ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_31
                                         : ((0x1eU 
                                             == (0x1fU 
                                                 & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                    >> 0xfU)))
                                             ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_30
                                             : ((0x1dU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0xfU)))
                                                 ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_29
                                                 : 
                                                ((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0xfU)))
                                                  ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_28
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0xfU)))
                                                   ? vlTOPp->TopFile__DOT__registerFile__DOT__regs_27
                                                   : vlTOPp->TopFile__DOT__registerFile__DOT___GEN_26)))))
          : 0U);
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel 
        = ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
           & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
              & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
                 & ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load) 
                    | ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store) 
                       | ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)) 
                          & ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType) 
                             | (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec__DOT___GEN_12))))))));
    vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel 
        = ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
            ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
                     ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
                              ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
                                       ? 0U : ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Store)
                                                ? 2U
                                                : (
                                                   (~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Branch)) 
                                                   & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_IType)) 
                                                      & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec__DOT___GEN_12))))))));
    vlTOPp->TopFile__DOT__aluControl__DOT___io_control_T_35 
        = (((0U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
            & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
               >> 0x1eU)) ? (8U | (7U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                         >> 0xcU)))
            : ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
                 & (5U == (7U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                 >> 0xcU)))) & (~ (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                   >> 0x1eU)))
                ? (7U & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                         >> 0xcU)) : ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
                                        & (5U == (7U 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0xcU)))) 
                                       & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                          >> 0x1eU))
                                       ? (8U | (7U 
                                                & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                   >> 0xcU)))
                                       : (((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
                                           & (1U == 
                                              (7U & 
                                               (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                >> 0xcU))))
                                           ? (7U & 
                                              (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                               >> 0xcU))
                                           : ((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp))
                                               ? (7U 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0xcU))
                                               : ((2U 
                                                   == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp))
                                                   ? 
                                                  (0x10U 
                                                   | (7U 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0xcU)))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp))
                                                    ? 0x1fU
                                                    : 0U)))))));
    vlTOPp->TopFile__DOT__jalr__DOT___io_out_T_2 = 
        (vlTOPp->TopFile__DOT__registerFile_io_rdata1 
         + vlTOPp->TopFile__DOT__ImmediateGeneration_io_i_imm);
    vlTOPp->TopFile__DOT__alu_io_in1 = (((0U == ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
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
                                                           : 0U))))))))))) 
                                         | (3U == ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load)
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
                                                             : 0U))))))))))))
                                         ? ((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegRead)
                                             ? vlTOPp->TopFile__DOT__freg_io_rdata1
                                             : vlTOPp->TopFile__DOT__registerFile_io_rdata1)
                                         : ((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegRead)
                                             ? ((IData)(4U) 
                                                + vlTOPp->TopFile__DOT__pc__DOT__reg_)
                                             : vlTOPp->TopFile__DOT__freg_io_rdata1));
    vlTOPp->TopFile__DOT__alu_io_in2 = ((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite)
                                         ? ((0U != 
                                             (0x1fU 
                                              & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                 >> 0x14U)))
                                             ? ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                     >> 0x14U)))
                                                 ? vlTOPp->TopFile__DOT__freg__DOT__regs_31
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlTOPp->TopFile__DOT__freg__DOT__regs_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlTOPp->TopFile__DOT__freg__DOT__regs_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TopFile__DOT__freg__DOT__regs_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TopFile__DOT__freg__DOT__regs_27
                                                     : vlTOPp->TopFile__DOT__freg__DOT___GEN_58)))))
                                             : 0U) : 
                                        (((0U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel)) 
                                          & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel))
                                          ? vlTOPp->TopFile__DOT__ImmediateGeneration_io_i_imm
                                          : (((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel)) 
                                              & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel))
                                              ? (0xfffff000U 
                                                 & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
                                              : (((2U 
                                                   == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_ExtendSel)) 
                                                  & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Operand_bSel))
                                                  ? 
                                                 ((((0x80000000U 
                                                     & vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data)
                                                     ? 0xfffffU
                                                     : 0U) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                           >> 7U))))
                                                  : vlTOPp->TopFile__DOT__registerFile_io_rdata2))));
    vlTOPp->TopFile__DOT__aluControl_io_control = (
                                                   ((0U 
                                                     == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_AluOp)) 
                                                    & (~ 
                                                       (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                        >> 0x1eU)))
                                                    ? 
                                                   (7U 
                                                    & (vlTOPp->TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data 
                                                       >> 0xcU))
                                                    : (IData)(vlTOPp->TopFile__DOT__aluControl__DOT___io_control_T_35));
    vlTOPp->TopFile__DOT__alu__DOT___io_out_T_2 = (vlTOPp->TopFile__DOT__alu_io_in1 
                                                   + vlTOPp->TopFile__DOT__alu_io_in2);
    vlTOPp->TopFile__DOT__alu__DOT___GEN_11 = ((0x15U 
                                                == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                ? (
                                                   VL_GTES_III(1,32,32, vlTOPp->TopFile__DOT__alu_io_in1, vlTOPp->TopFile__DOT__alu_io_in2)
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                    ? 
                                                   ((vlTOPp->TopFile__DOT__alu_io_in1 
                                                     >= vlTOPp->TopFile__DOT__alu_io_in2)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (((3U 
                                                      == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)) 
                                                     | (0x16U 
                                                        == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)))
                                                     ? 
                                                    ((vlTOPp->TopFile__DOT__alu_io_in1 
                                                      < vlTOPp->TopFile__DOT__alu_io_in2)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                      ? 
                                                     ((vlTOPp->TopFile__DOT__alu_io_in1 
                                                       == vlTOPp->TopFile__DOT__alu_io_in2)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     (((2U 
                                                        == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)) 
                                                       | (0x14U 
                                                          == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)))
                                                       ? 
                                                      (VL_LTS_III(1,32,32, vlTOPp->TopFile__DOT__alu_io_in1, vlTOPp->TopFile__DOT__alu_io_in2)
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      ((vlTOPp->TopFile__DOT__alu_io_in1 
                                                        != vlTOPp->TopFile__DOT__alu_io_in2)
                                                        ? 1U
                                                        : 0U))))));
    vlTOPp->TopFile__DOT__alu__DOT___GEN_17 = ((4U 
                                                == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                ? (vlTOPp->TopFile__DOT__alu_io_in1 
                                                   ^ vlTOPp->TopFile__DOT__alu_io_in2)
                                                : (
                                                   ((5U 
                                                     == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)) 
                                                    | (0xdU 
                                                       == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control)))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlTOPp->TopFile__DOT__alu_io_in1, 
                                                                  (0x1fU 
                                                                   & vlTOPp->TopFile__DOT__alu_io_in2))
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                     ? 
                                                    (vlTOPp->TopFile__DOT__alu_io_in1 
                                                     | vlTOPp->TopFile__DOT__alu_io_in2)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                      ? 
                                                     (vlTOPp->TopFile__DOT__alu_io_in1 
                                                      & vlTOPp->TopFile__DOT__alu_io_in2)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                       ? 
                                                      (vlTOPp->TopFile__DOT__alu_io_in1 
                                                       - vlTOPp->TopFile__DOT__alu_io_in2)
                                                       : 
                                                      ((0x1fU 
                                                        == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                        ? vlTOPp->TopFile__DOT__alu_io_in1
                                                        : 
                                                       ((0xfffffffcU 
                                                         & (VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_11) 
                                                                                >> 1U)))) 
                                                            << 2U)) 
                                                        | (IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_11))))))));
    vlTOPp->TopFile__DOT__alu__DOT___GEN_19 = (VL_ULL(0x7fffffffffffffff) 
                                               & ((0U 
                                                   == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->TopFile__DOT__alu__DOT___io_out_T_2 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->TopFile__DOT__alu__DOT___io_out_T_2)))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlTOPp->TopFile__DOT__aluControl_io_control))
                                                    ? 
                                                   ((((QData)((IData)(
                                                                      (0x7fffffffU 
                                                                       & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->TopFile__DOT__alu_io_in1 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlTOPp->TopFile__DOT__alu_io_in1))) 
                                                    << 
                                                    (0x1fU 
                                                     & vlTOPp->TopFile__DOT__alu_io_in2))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x7fffffffU 
                                                                      & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->TopFile__DOT__alu__DOT___GEN_17 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_17))))));
    vlTOPp->TopFile__DOT__freg_io_wdata = ((IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_FRegWrite)
                                            ? (IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_19)
                                            : 0U);
    vlTOPp->TopFile__DOT__registerFile_io_wdata = (
                                                   ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fmv)) 
                                                    & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Fadd)) 
                                                       & ((~ (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_RType)) 
                                                          & (IData)(vlTOPp->TopFile__DOT__control__DOT__typeDec_io_Load))))
                                                    ? 
                                                   vlTOPp->TopFile__DOT__dataMemory__DOT__memory
                                                   [
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlTOPp->TopFile__DOT__alu__DOT___GEN_19 
                                                               >> 2U)))]
                                                    : (IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_19));
    vlTOPp->TopFile__DOT__alu_io_Branch = ((1U == (IData)(vlTOPp->TopFile__DOT__alu__DOT___GEN_19)) 
                                           & (2U == 
                                              (3U & 
                                               ((IData)(vlTOPp->TopFile__DOT__aluControl_io_control) 
                                                >> 3U))));
    vlTOPp->io_RegOut = vlTOPp->TopFile__DOT__registerFile_io_wdata;
    vlTOPp->TopFile__DOT__pc_io_in = ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
                                        & (~ (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch))) 
                                       & (~ (IData)(vlTOPp->TopFile__DOT__alu_io_Branch)))
                                       ? ((IData)(4U) 
                                          + vlTOPp->TopFile__DOT__pc__DOT__reg_)
                                       : ((((1U == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
                                            & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch)) 
                                           & (~ (IData)(vlTOPp->TopFile__DOT__alu_io_Branch)))
                                           ? ((IData)(4U) 
                                              + vlTOPp->TopFile__DOT__pc__DOT__reg_)
                                           : ((((1U 
                                                 == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
                                                & (~ (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch))) 
                                               & (IData)(vlTOPp->TopFile__DOT__alu_io_Branch))
                                               ? ((IData)(4U) 
                                                  + vlTOPp->TopFile__DOT__pc__DOT__reg_)
                                               : ((
                                                   ((1U 
                                                     == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel)) 
                                                    & (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_Branch)) 
                                                   & (IData)(vlTOPp->TopFile__DOT__alu_io_Branch))
                                                   ? 
                                                  (((((0x80000000U 
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
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlTOPp->TopFile__DOT__control__DOT__controlDec_io_NextPcSel))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlTOPp->TopFile__DOT__pc__DOT__reg_)
                                                    : 
                                                   ((2U 
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
                                                      : 0U)))))));
}

void VTopFile::_eval(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopFile::_eval\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTopFile::_eval_initial(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopFile::_eval_initial\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTopFile::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopFile::final\n"); );
    // Variables
    VTopFile__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTopFile::_eval_settle(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopFile::_eval_settle\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VTopFile::_change_request(VTopFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopFile::_change_request\n"); );
    VTopFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTopFile::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopFile::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

void VTopFile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopFile::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_RegOut = VL_RAND_RESET_I(32);
    TopFile__DOT__alu_io_in1 = VL_RAND_RESET_I(32);
    TopFile__DOT__alu_io_in2 = VL_RAND_RESET_I(32);
    TopFile__DOT__alu_io_Branch = VL_RAND_RESET_I(1);
    TopFile__DOT__aluControl_io_control = VL_RAND_RESET_I(5);
    TopFile__DOT__ImmediateGeneration_io_i_imm = VL_RAND_RESET_I(32);
    TopFile__DOT__pc_io_in = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile_io_rdata1 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile_io_rdata2 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile_io_wdata = VL_RAND_RESET_I(32);
    TopFile__DOT__freg_io_rdata1 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg_io_wdata = VL_RAND_RESET_I(32);
    TopFile__DOT__alu__DOT___io_out_T_2 = VL_RAND_RESET_I(32);
    TopFile__DOT__alu__DOT___GEN_11 = VL_RAND_RESET_I(2);
    TopFile__DOT__alu__DOT___GEN_17 = VL_RAND_RESET_I(32);
    TopFile__DOT__alu__DOT___GEN_19 = VL_RAND_RESET_Q(63);
    TopFile__DOT__aluControl__DOT___io_control_T_35 = VL_RAND_RESET_I(5);
    TopFile__DOT__control__DOT__typeDec_io_RType = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_Load = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_Store = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_Branch = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_IType = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_Jalr = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_Jal = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_Lui = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_Fmv = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__typeDec_io_Fadd = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__controlDec_io_Branch = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__controlDec_io_RegWrite = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__controlDec_io_AluOp = VL_RAND_RESET_I(3);
    TopFile__DOT__control__DOT__controlDec_io_Operand_bSel = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__controlDec_io_ExtendSel = VL_RAND_RESET_I(2);
    TopFile__DOT__control__DOT__controlDec_io_NextPcSel = VL_RAND_RESET_I(2);
    TopFile__DOT__control__DOT__controlDec_io_FRegWrite = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__controlDec_io_FRegRead = VL_RAND_RESET_I(1);
    TopFile__DOT__control__DOT__controlDec__DOT___GEN_12 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            TopFile__DOT__dataMemory__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            TopFile__DOT__Memory__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    TopFile__DOT__Memory__DOT__imem_io_inst_MPORT_data = VL_RAND_RESET_I(32);
    TopFile__DOT__jalr__DOT___io_out_T_2 = VL_RAND_RESET_I(32);
    TopFile__DOT__pc__DOT__reg_ = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_0 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_1 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_2 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_3 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_4 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_5 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_6 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_7 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_8 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_9 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_10 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_11 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_12 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_13 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_14 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_15 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_16 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_17 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_18 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_19 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_20 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_21 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_22 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_23 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_24 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_25 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_26 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_27 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_28 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_29 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_30 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT__regs_31 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT___GEN_13 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT___GEN_26 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT___GEN_45 = VL_RAND_RESET_I(32);
    TopFile__DOT__registerFile__DOT___GEN_58 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_0 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_1 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_2 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_3 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_4 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_5 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_6 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_7 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_8 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_9 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_10 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_11 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_12 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_13 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_14 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_15 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_16 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_17 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_18 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_19 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_20 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_21 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_22 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_23 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_24 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_25 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_26 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_27 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_28 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_29 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_30 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT__regs_31 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT___GEN_13 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT___GEN_26 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT___GEN_45 = VL_RAND_RESET_I(32);
    TopFile__DOT__freg__DOT___GEN_58 = VL_RAND_RESET_I(32);
    __Vm_traceActivity = 0;
}
