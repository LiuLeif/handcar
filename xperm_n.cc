// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_xperm_n(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_XPERM_N));
  #include "insns/xperm_n.h"
  trace_opcode(p,  MATCH_XPERM_N, insn);
  #undef xlen
  return npc;
}

reg_t rv64_xperm_n(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_XPERM_N));
  #include "insns/xperm_n.h"
  trace_opcode(p,  MATCH_XPERM_N, insn);
  #undef xlen
  return npc;
}