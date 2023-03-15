// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vlse8_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VLSE8_V));
  #include "insns/vlse8_v.h"
  trace_opcode(p,  MATCH_VLSE8_V, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vlse8_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VLSE8_V));
  #include "insns/vlse8_v.h"
  trace_opcode(p,  MATCH_VLSE8_V, insn);
  #undef xlen
  return npc;
}