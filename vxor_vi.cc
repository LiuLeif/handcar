// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vxor_vi(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VXOR_VI));
  #include "insns/vxor_vi.h"
  trace_opcode(p,  MATCH_VXOR_VI, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vxor_vi(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VXOR_VI));
  #include "insns/vxor_vi.h"
  trace_opcode(p,  MATCH_VXOR_VI, insn);
  #undef xlen
  return npc;
}
