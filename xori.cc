// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_xori(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_XORI));
  #include "insns/xori.h"
  trace_opcode(p,  MATCH_XORI, insn);
  #undef xlen
  return npc;
}

reg_t rv64_xori(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_XORI));
  #include "insns/xori.h"
  trace_opcode(p,  MATCH_XORI, insn);
  #undef xlen
  return npc;
}
