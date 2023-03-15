// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vfwnmacc_vv(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFWNMACC_VV));
  #include "insns/vfwnmacc_vv.h"
  trace_opcode(p,  MATCH_VFWNMACC_VV, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vfwnmacc_vv(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFWNMACC_VV));
  #include "insns/vfwnmacc_vv.h"
  trace_opcode(p,  MATCH_VFWNMACC_VV, insn);
  #undef xlen
  return npc;
}
