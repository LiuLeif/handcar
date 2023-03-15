// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vmsbc_vxm(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMSBC_VXM));
  #include "insns/vmsbc_vxm.h"
  trace_opcode(p,  MATCH_VMSBC_VXM, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vmsbc_vxm(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMSBC_VXM));
  #include "insns/vmsbc_vxm.h"
  trace_opcode(p,  MATCH_VMSBC_VXM, insn);
  #undef xlen
  return npc;
}