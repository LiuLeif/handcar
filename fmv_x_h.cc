// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_fmv_x_h(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_FMV_X_H));
  #include "insns/fmv_x_h.h"
  trace_opcode(p,  MATCH_FMV_X_H, insn);
  #undef xlen
  return npc;
}

reg_t rv64_fmv_x_h(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_FMV_X_H));
  #include "insns/fmv_x_h.h"
  trace_opcode(p,  MATCH_FMV_X_H, insn);
  #undef xlen
  return npc;
}
