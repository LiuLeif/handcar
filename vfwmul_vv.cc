// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vfwmul_vv(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFWMUL_VV));
  #include "insns/vfwmul_vv.h"
  trace_opcode(p,  MATCH_VFWMUL_VV, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vfwmul_vv(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFWMUL_VV));
  #include "insns/vfwmul_vv.h"
  trace_opcode(p,  MATCH_VFWMUL_VV, insn);
  #undef xlen
  return npc;
}
