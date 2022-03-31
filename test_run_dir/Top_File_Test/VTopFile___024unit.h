// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTopFile.h for the primary calling header

#ifndef _VTOPFILE___024UNIT_H_
#define _VTOPFILE___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class VTopFile__Syms;
class VTopFile_VerilatedVcd;


//----------

VL_MODULE(VTopFile___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VTopFile__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTopFile___024unit);  ///< Copying not allowed
  public:
    VTopFile___024unit(const char* name = "TOP");
    ~VTopFile___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VTopFile__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
