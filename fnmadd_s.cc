// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_fnmadd_s(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_FNMADD_S));
  #include "insns/fnmadd_s.h"
  trace_opcode(p,  MATCH_FNMADD_S, insn);
  #undef xlen
  return npc;
}

reg_t rv64_fnmadd_s(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_FNMADD_S));
  #include "insns/fnmadd_s.h"
  trace_opcode(p,  MATCH_FNMADD_S, insn);
  #undef xlen
  return npc;
}
