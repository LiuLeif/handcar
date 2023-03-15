// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_clzw(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_CLZW));
  #include "insns/clzw.h"
  trace_opcode(p,  MATCH_CLZW, insn);
  #undef xlen
  return npc;
}

reg_t rv64_clzw(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_CLZW));
  #include "insns/clzw.h"
  trace_opcode(p,  MATCH_CLZW, insn);
  #undef xlen
  return npc;
}
