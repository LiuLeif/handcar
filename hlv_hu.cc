// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_hlv_hu(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_HLV_HU));
  #include "insns/hlv_hu.h"
  trace_opcode(p,  MATCH_HLV_HU, insn);
  #undef xlen
  return npc;
}

reg_t rv64_hlv_hu(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_HLV_HU));
  #include "insns/hlv_hu.h"
  trace_opcode(p,  MATCH_HLV_HU, insn);
  #undef xlen
  return npc;
}
