// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vamoswapei16_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VAMOSWAPEI16_V));
  #include "insns/vamoswapei16_v.h"
  trace_opcode(p,  MATCH_VAMOSWAPEI16_V, insn);
  #undef xlen
  return npc;
}

reg_t rv64_vamoswapei16_v(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VAMOSWAPEI16_V));
  #include "insns/vamoswapei16_v.h"
  trace_opcode(p,  MATCH_VAMOSWAPEI16_V, insn);
  #undef xlen
  return npc;
}
