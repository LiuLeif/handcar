// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_add_uw(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_ADD_UW));
  #include "insns/add_uw.h"
  trace_opcode(p,  MATCH_ADD_UW, insn);
  #undef xlen
  return npc;
}

reg_t rv64_add_uw(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_ADD_UW));
  #include "insns/add_uw.h"
  trace_opcode(p,  MATCH_ADD_UW, insn);
  #undef xlen
  return npc;
}
