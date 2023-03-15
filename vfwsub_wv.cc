// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vfwsub_wv(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFWSUB_WV));
  #include "insns/vfwsub_wv.h"
  trace_opcode(p,  MATCH_VFWSUB_WV, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vfwsub_wv(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFWSUB_WV));
  #include "insns/vfwsub_wv.h"
  trace_opcode(p,  MATCH_VFWSUB_WV, insn);
  #undef xlen
  return npc;
}
