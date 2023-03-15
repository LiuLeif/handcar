// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_kmmac(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KMMAC));
  #include "insns/kmmac.h"
  trace_opcode(p,  MATCH_KMMAC, insn);
  #undef xlen
  return npc;
}

reg_t rv64_kmmac(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KMMAC));
  #include "insns/kmmac.h"
  trace_opcode(p,  MATCH_KMMAC, insn);
  #undef xlen
  return npc;
}
