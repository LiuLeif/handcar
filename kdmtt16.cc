// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_kdmtt16(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KDMTT16));
  #include "insns/kdmtt16.h"
  trace_opcode(p,  MATCH_KDMTT16, insn);
  #undef xlen
  return npc;
}

reg_t rv64_kdmtt16(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_KDMTT16));
  #include "insns/kdmtt16.h"
  trace_opcode(p,  MATCH_KDMTT16, insn);
  #undef xlen
  return npc;
}
