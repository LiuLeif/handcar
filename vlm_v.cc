// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vlm_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VLM_V));
  #include "insns/vlm_v.h"
  trace_opcode(p,  MATCH_VLM_V, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vlm_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VLM_V));
  #include "insns/vlm_v.h"
  trace_opcode(p,  MATCH_VLM_V, insn);
  #undef xlen
  return npc;
}
