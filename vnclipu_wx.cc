// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vnclipu_wx(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VNCLIPU_WX));
  #include "insns/vnclipu_wx.h"
  trace_opcode(p,  MATCH_VNCLIPU_WX, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vnclipu_wx(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VNCLIPU_WX));
  #include "insns/vnclipu_wx.h"
  trace_opcode(p,  MATCH_VNCLIPU_WX, insn);
  #undef xlen
  return npc;
}
