// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vmax_vx(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMAX_VX));
  #include "insns/vmax_vx.h"
  trace_opcode(p,  MATCH_VMAX_VX, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vmax_vx(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMAX_VX));
  #include "insns/vmax_vx.h"
  trace_opcode(p,  MATCH_VMAX_VX, insn);
  #undef xlen
  return npc;
}