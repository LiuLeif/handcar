// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vfredmax_vs(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFREDMAX_VS));
  #include "insns/vfredmax_vs.h"
  trace_opcode(p,  MATCH_VFREDMAX_VS, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vfredmax_vs(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFREDMAX_VS));
  #include "insns/vfredmax_vs.h"
  trace_opcode(p,  MATCH_VFREDMAX_VS, insn);
  #undef xlen
  return npc;
}
