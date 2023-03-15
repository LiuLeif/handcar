// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_grev(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_GREV));
  #include "insns/grev.h"
  trace_opcode(p,  MATCH_GREV, insn);
  #undef xlen
  return npc;
}

reg_t rv64_grev(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_GREV));
  #include "insns/grev.h"
  trace_opcode(p,  MATCH_GREV, insn);
  #undef xlen
  return npc;
}
