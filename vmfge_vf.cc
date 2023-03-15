// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vmfge_vf(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMFGE_VF));
  #include "insns/vmfge_vf.h"
  trace_opcode(p,  MATCH_VMFGE_VF, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vmfge_vf(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMFGE_VF));
  #include "insns/vmfge_vf.h"
  trace_opcode(p,  MATCH_VMFGE_VF, insn);
  #undef xlen
  return npc;
}