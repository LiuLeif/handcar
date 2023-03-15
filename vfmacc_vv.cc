// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vfmacc_vv(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFMACC_VV));
  #include "insns/vfmacc_vv.h"
  trace_opcode(p,  MATCH_VFMACC_VV, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vfmacc_vv(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFMACC_VV));
  #include "insns/vfmacc_vv.h"
  trace_opcode(p,  MATCH_VFMACC_VV, insn);
  #undef xlen
  return npc;
}
