// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vs4r_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VS4R_V));
  #include "insns/vs4r_v.h"
  trace_opcode(p,  MATCH_VS4R_V, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vs4r_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VS4R_V));
  #include "insns/vs4r_v.h"
  trace_opcode(p,  MATCH_VS4R_V, insn);
  #undef xlen
  return npc;
}