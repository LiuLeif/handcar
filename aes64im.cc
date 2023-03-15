// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_aes64im(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_AES64IM));
  #include "insns/aes64im.h"
  trace_opcode(p,  MATCH_AES64IM, insn);
  #undef xlen
  return npc;
}

reg_t rv64_aes64im(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_AES64IM));
  #include "insns/aes64im.h"
  trace_opcode(p,  MATCH_AES64IM, insn);
  #undef xlen
  return npc;
}