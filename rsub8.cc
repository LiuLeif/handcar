// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_rsub8(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_RSUB8));
  #include "insns/rsub8.h"
  trace_opcode(p,  MATCH_RSUB8, insn);
  #undef xlen
  return npc;
}

reg_t rv64_rsub8(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_RSUB8));
  #include "insns/rsub8.h"
  trace_opcode(p,  MATCH_RSUB8, insn);
  #undef xlen
  return npc;
}
