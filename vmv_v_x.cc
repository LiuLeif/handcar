// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vmv_v_x(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMV_V_X));
  #include "insns/vmv_v_x.h"
  trace_opcode(p,  MATCH_VMV_V_X, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vmv_v_x(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VMV_V_X));
  #include "insns/vmv_v_x.h"
  trace_opcode(p,  MATCH_VMV_V_X, insn);
  #undef xlen
  return npc;
}
