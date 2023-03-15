// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_sha256sig0(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 32
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SHA256SIG0));
  #include "insns/sha256sig0.h"
  trace_opcode(p,  MATCH_SHA256SIG0, insn);
  #undef xlen
  return npc;
}

reg_t rv64_sha256sig0(processor_t* p, insn_t insn, reg_t pc)
{
  #define xlen 64
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SHA256SIG0));
  #include "insns/sha256sig0.h"
  trace_opcode(p,  MATCH_SHA256SIG0, insn);
  #undef xlen
  return npc;
}
