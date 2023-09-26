// ======================================================================
// \title  PassiveCommandsGTestBase.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for PassiveCommands component Google Test harness base class
// ======================================================================

#include "test-base/PassiveCommandsGTestBase.hpp"

// ----------------------------------------------------------------------
// Construction and destruction
// ----------------------------------------------------------------------

PassiveCommandsGTestBase ::
  PassiveCommandsGTestBase(
      const char* const compName,
      const U32 maxHistorySize
  ) :
    PassiveCommandsTesterBase(compName, maxHistorySize)
{

}

PassiveCommandsGTestBase ::
  ~PassiveCommandsGTestBase()
{

}

// ----------------------------------------------------------------------
// From ports
// ----------------------------------------------------------------------

void PassiveCommandsGTestBase ::
  assertFromPortHistory_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->fromPortHistorySize)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Total size of all from port histories\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->fromPortHistorySize << "\n";
}

void PassiveCommandsGTestBase ::
  assert_from_typedOut(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->fromPortHistory_typedOut->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for typedOut\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->fromPortHistory_typedOut->size() << "\n";
}

void PassiveCommandsGTestBase ::
  assert_from_typedReturnOut(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->fromPortHistory_typedReturnOut->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for typedReturnOut\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->fromPortHistory_typedReturnOut->size() << "\n";
}

// ----------------------------------------------------------------------
// Commands
// ----------------------------------------------------------------------

void PassiveCommandsGTestBase ::
  assertCmdResponse_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->cmdResponseHistory->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of command response history\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->cmdResponseHistory->size() << "\n";
}

void PassiveCommandsGTestBase ::
  assertCmdResponse(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdResponse response
  ) const
{
  ASSERT_LT(__index, this->cmdResponseHistory->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into command response history\n"
    << "  Expected: Less than size of command response history ("
    << this->cmdResponseHistory->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const CmdResponse& e = this->cmdResponseHistory->at(__index);
  ASSERT_EQ(opCode, e.opCode)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Opcode at index "
    << __index
    << " in command response history\n"
    << "  Expected: " << opCode << "\n"
    << "  Actual:   " << e.opCode << "\n";
  ASSERT_EQ(cmdSeq, e.cmdSeq)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Command sequence number at index "
    << __index
    << " in command response history\n"
    << "  Expected: " << cmdSeq << "\n"
    << "  Actual:   " << e.cmdSeq << "\n";
  ASSERT_EQ(response, e.response)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Command response at index "
    << __index
    << " in command response history\n"
    << "  Expected: " << response << "\n"
    << "  Actual:   " << e.response << "\n";
}
