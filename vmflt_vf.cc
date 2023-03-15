// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vmflt_vf(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMFLT_VF));
  #include "insns/vmflt_vf.h"
  trace_opcode(p,  MATCH_VMFLT_VF, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vmflt_vf(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMFLT_VF));
  #include "insns/vmflt_vf.h"
  trace_opcode(p,  MATCH_VMFLT_VF, insn);
  #undef xlen
  return npc;
}