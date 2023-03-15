// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_hsv_b(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_HSV_B));
  #include "insns/hsv_b.h"
  trace_opcode(p,  MATCH_HSV_B, insn);
  #undef xlen
  return npc;
}

reg_t rv64_hsv_b(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_HSV_B));
  #include "insns/hsv_b.h"
  trace_opcode(p,  MATCH_HSV_B, insn);
  #undef xlen
  return npc;
}
