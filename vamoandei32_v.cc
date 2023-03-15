// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vamoandei32_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VAMOANDEI32_V));
  #include "insns/vamoandei32_v.h"
  trace_opcode(p,  MATCH_VAMOANDEI32_V, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vamoandei32_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VAMOANDEI32_V));
  #include "insns/vamoandei32_v.h"
  trace_opcode(p,  MATCH_VAMOANDEI32_V, insn);
  #undef xlen
  return npc;
}
