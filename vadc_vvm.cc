// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vadc_vvm(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VADC_VVM));
  #include "insns/vadc_vvm.h"
  trace_opcode(p,  MATCH_VADC_VVM, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vadc_vvm(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VADC_VVM));
  #include "insns/vadc_vvm.h"
  trace_opcode(p,  MATCH_VADC_VVM, insn);
  #undef xlen
  return npc;
}
