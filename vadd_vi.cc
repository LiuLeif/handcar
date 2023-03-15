// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vadd_vi(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VADD_VI));
  #include "insns/vadd_vi.h"
  trace_opcode(p,  MATCH_VADD_VI, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vadd_vi(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VADD_VI));
  #include "insns/vadd_vi.h"
  trace_opcode(p,  MATCH_VADD_VI, insn);
  #undef xlen
  return npc;
}
