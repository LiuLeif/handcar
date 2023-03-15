// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_fsgnjn_q(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_FSGNJN_Q));
  #include "insns/fsgnjn_q.h"
  trace_opcode(p,  MATCH_FSGNJN_Q, insn);
  #undef xlen
  return npc;
}

reg_t rv64_fsgnjn_q(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_FSGNJN_Q));
  #include "insns/fsgnjn_q.h"
  trace_opcode(p,  MATCH_FSGNJN_Q, insn);
  #undef xlen
  return npc;
}