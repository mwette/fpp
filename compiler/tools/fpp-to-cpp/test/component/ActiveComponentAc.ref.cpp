// ======================================================================
// \title  ActiveComponentAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for Active component base class
// ======================================================================

#include <cstdio>

#include "ActiveComponentAc.hpp"
#include "Fw/Types/Assert.hpp"
#include "Fw/Types/String.hpp"

Fw::InputCmdPort* ActiveComponentBase ::
  get_cmdIn_InputPort(NATIVE_INT_TYPE portNum)
{
  FW_ASSERT(
    portNum < this->getNum_cmdIn_InputPorts(),
    static_cast<FwAssertArgType>(portNum)
   );

  return &this->m_cmdIn_InputPort[portNum];
}

InputTypedPort* ActiveComponentBase ::
  get_typedSync_InputPort(NATIVE_INT_TYPE portNum)
{
  FW_ASSERT(
    portNum < this->getNum_typedSync_InputPorts(),
    static_cast<FwAssertArgType>(portNum)
   );

  return &this->m_typedSync_InputPort[portNum];
}

InputTypedPort* ActiveComponentBase ::
  get_typedAsync_InputPort(NATIVE_INT_TYPE portNum)
{
  FW_ASSERT(
    portNum < this->getNum_typedAsync_InputPorts(),
    static_cast<FwAssertArgType>(portNum)
   );

  return &this->m_typedAsync_InputPort[portNum];
}

InputTypedPort* ActiveComponentBase ::
  get_typedGuarded_InputPort(NATIVE_INT_TYPE portNum)
{
  FW_ASSERT(
    portNum < this->getNum_typedGuarded_InputPorts(),
    static_cast<FwAssertArgType>(portNum)
   );

  return &this->m_typedGuarded_InputPort[portNum];
}

Fw::InputSerializePort* ActiveComponentBase ::
  get_serialSync_InputPort(NATIVE_INT_TYPE portNum)
{
  FW_ASSERT(
    portNum < this->getNum_serialSync_InputPorts(),
    static_cast<FwAssertArgType>(portNum)
   );

  return &this->m_serialSync_InputPort[portNum];
}

Fw::InputSerializePort* ActiveComponentBase ::
  get_serialAsync_InputPort(NATIVE_INT_TYPE portNum)
{
  FW_ASSERT(
    portNum < this->getNum_serialAsync_InputPorts(),
    static_cast<FwAssertArgType>(portNum)
   );

  return &this->m_serialAsync_InputPort[portNum];
}

Fw::InputSerializePort* ActiveComponentBase ::
  get_serialGuarded_InputPort(NATIVE_INT_TYPE portNum)
{
  FW_ASSERT(
    portNum < this->getNum_serialGuarded_InputPorts(),
    static_cast<FwAssertArgType>(portNum)
   );

  return &this->m_serialGuarded_InputPort[portNum];
}

void ActiveComponentBase ::
  set_cmdRegOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputCmdRegPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_cmdRegOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_cmdRegOut_OutputPort[portNum].addCallPort(port);
}

void ActiveComponentBase ::
  set_cmdResponseOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputCmdResponsePort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_cmdResponseOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_cmdResponseOut_OutputPort[portNum].addCallPort(port);
}

void ActiveComponentBase ::
  set_eventOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputLogPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_eventOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_eventOut_OutputPort[portNum].addCallPort(port);
}

#if FW_ENABLE_TEXT_LOGGING == 1

void ActiveComponentBase ::
  set_textEventOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputLogTextPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_textEventOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_textEventOut_OutputPort[portNum].addCallPort(port);
}

#endif

void ActiveComponentBase ::
  set_tlmOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputTlmPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_tlmOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_tlmOut_OutputPort[portNum].addCallPort(port);
}

void ActiveComponentBase ::
  set_prmGetOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputPrmGetPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_prmGetOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_prmGetOut_OutputPort[portNum].addCallPort(port);
}

void ActiveComponentBase ::
  set_prmSetOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputPrmSetPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_prmSetOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_prmSetOut_OutputPort[portNum].addCallPort(port);
}

void ActiveComponentBase ::
  set_timeGetOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputTimePort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_timeGetOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_timeGetOut_OutputPort[portNum].addCallPort(port);
}

#if FW_PORT_SERIALIZATION

void ActiveComponentBase ::
  set_cmdRegOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

void ActiveComponentBase ::
  set_cmdResponseOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

void ActiveComponentBase ::
  set_eventOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

#if FW_ENABLE_TEXT_LOGGING == 1

void ActiveComponentBase ::
  set_textEventOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

#endif

void ActiveComponentBase ::
  set_tlmOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

void ActiveComponentBase ::
  set_prmGetOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

void ActiveComponentBase ::
  set_prmSetOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

void ActiveComponentBase ::
  set_timeGetOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

#endif

void ActiveComponentBase ::
  set_typedOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      InputTypedPort* port
  )
{
  FW_ASSERT(
    portNum < this->getNum_typedOut_OutputPorts(),
    static_cast<FwAssertArgType>(portNum)
  );

  this->m_typedOut_OutputPort[portNum].addCallPort(port);
}

#if FW_PORT_SERIALIZATION

void ActiveComponentBase ::
  set_typedOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

#endif

#if FW_PORT_SERIALIZATION

void ActiveComponentBase ::
  set_serialOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

void ActiveComponentBase ::
  set_serialOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputPortBase* port
  )
{

}

#endif

void ActiveComponentBase ::
  regCommands()
{

}

void ActiveComponentBase ::
  loadParameters()
{

}

ActiveComponentBase ::
  ActiveComponentBase(const char* compName) :
    Fw::ActiveComponentBase(compName)
{

}

void ActiveComponentBase ::
  init(
      NATIVE_INT_TYPE queueDepth,
      NATIVE_INT_TYPE msgSize,
      NATIVE_INT_TYPE instance
  )
{

}

ActiveComponentBase ::
  ~ActiveComponentBase()
{

}

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_cmdIn_InputPorts()
{

}

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_typedSync_InputPorts()
{

}

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_typedAsync_InputPorts()
{

}

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_typedGuarded_InputPorts()
{

}

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_serialSync_InputPorts()
{

}

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_serialAsync_InputPorts()
{

}

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_serialGuarded_InputPorts()
{

}

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_cmdRegOut_OutputPorts()
{

}

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_cmdResponseOut_OutputPorts()
{

}

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_eventOut_OutputPorts()
{

}

#if FW_ENABLE_TEXT_LOGGING == 1

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_textEventOut_OutputPorts()
{

}

#endif

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_tlmOut_OutputPorts()
{

}

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_prmGetOut_OutputPorts()
{

}

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_prmSetOut_OutputPorts()
{

}

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_timeGetOut_OutputPorts()
{

}

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_typedOut_OutputPorts()
{

}

NATIVE_INT_TYPE ActiveComponentBase ::
  getNum_serialOut_OutputPorts()
{

}

bool ActiveComponentBase ::
  isConnected_cmdRegOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

bool ActiveComponentBase ::
  isConnected_cmdResponseOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

bool ActiveComponentBase ::
  isConnected_eventOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

#if FW_ENABLE_TEXT_LOGGING == 1

bool ActiveComponentBase ::
  isConnected_textEventOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

#endif

bool ActiveComponentBase ::
  isConnected_tlmOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

bool ActiveComponentBase ::
  isConnected_prmGetOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

bool ActiveComponentBase ::
  isConnected_prmSetOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

bool ActiveComponentBase ::
  isConnected_timeGetOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

bool ActiveComponentBase ::
  isConnected_typedOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

bool ActiveComponentBase ::
  isConnected_serialOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

void ActiveComponentBase ::
  typedSync_handler(
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const TypedPortStrings::StringSize80& str,
      const E& e,
      const A& a,
      const S& s
  )
{

}

void ActiveComponentBase ::
  typedAsync_handler(
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const TypedPortStrings::StringSize80& str,
      const E& e,
      const A& a,
      const S& s
  )
{

}

void ActiveComponentBase ::
  typedGuarded_handler(
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const TypedPortStrings::StringSize80& str,
      const E& e,
      const A& a,
      const S& s
  )
{

}

void ActiveComponentBase ::
  typedSync_handlerBase(
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const TypedPortStrings::StringSize80& str,
      const E& e,
      const A& a,
      const S& s
  )
{

}

void ActiveComponentBase ::
  typedAsync_handlerBase(
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const TypedPortStrings::StringSize80& str,
      const E& e,
      const A& a,
      const S& s
  )
{

}

void ActiveComponentBase ::
  typedGuarded_handlerBase(
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const TypedPortStrings::StringSize80& str,
      const E& e,
      const A& a,
      const S& s
  )
{

}

void ActiveComponentBase ::
  serialSync_handler(
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void ActiveComponentBase ::
  serialAsync_handler(
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void ActiveComponentBase ::
  serialGuarded_handler(
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void ActiveComponentBase ::
  serialSync_handlerBase(
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void ActiveComponentBase ::
  serialAsync_handlerBase(
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void ActiveComponentBase ::
  serialGuarded_handlerBase(
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void ActiveComponentBase ::
  typedAsync_preMsgHook(
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const TypedPortStrings::StringSize80& str,
      const E& e,
      const A& a,
      const S& s
  )
{

}

void ActiveComponentBase ::
  serialAsync_preMsgHook(
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void ActiveComponentBase ::
  typedOut_out(
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const TypedPortStrings::StringSize80& str,
      const E& e,
      const A& a,
      const S& s
  )
{

}

Fw::SerializeStatus ActiveComponentBase ::
  serialOut_out(
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void ActiveComponentBase ::
  internalPrimitive_internalInterfaceHandler(
      U32 u32,
      F32 f32,
      bool b
  )
{

}

void ActiveComponentBase ::
  internalString_internalInterfaceHandler(
      const Fw::InternalInterfaceString& str1,
      const Fw::InternalInterfaceString& str2
  )
{

}

void ActiveComponentBase ::
  internalEnum_internalInterfaceHandler(const E& e)
{

}

void ActiveComponentBase ::
  internalArray_internalInterfaceHandler(const A& a)
{

}

void ActiveComponentBase ::
  internalStruct_internalInterfaceHandler(const S& s)
{

}

void ActiveComponentBase ::
  internalPriorityDrop_internalInterfaceHandler()
{

}

void ActiveComponentBase ::
  internalPrimitive_internalInterfaceInvoke(
      U32 u32,
      F32 f32,
      bool b
  )
{

}

void ActiveComponentBase ::
  internalString_internalInterfaceInvoke(
      const Fw::InternalInterfaceString& str1,
      const Fw::InternalInterfaceString& str2
  )
{

}

void ActiveComponentBase ::
  internalEnum_internalInterfaceInvoke(const E& e)
{

}

void ActiveComponentBase ::
  internalArray_internalInterfaceInvoke(const A& a)
{

}

void ActiveComponentBase ::
  internalStruct_internalInterfaceInvoke(const S& s)
{

}

void ActiveComponentBase ::
  internalPriorityDrop_internalInterfaceInvoke()
{

}

void ActiveComponentBase ::
  cmdResponse_out(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdResponse response
  )
{

}

void ActiveComponentBase ::
  CMD_SYNC_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void ActiveComponentBase ::
  CMD_ASYNC_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void ActiveComponentBase ::
  CMD_SYNC_PRIMITIVE_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq,
      U32 u32,
      F32 f32,
      bool b
  )
{

}

void ActiveComponentBase ::
  CMD_SYNC_STRING_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq,
      const Fw::CmdStringArg& str1,
      const Fw::CmdStringArg& str2
  )
{

}

void ActiveComponentBase ::
  CMD_ASYNC_ENUM_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq,
      E e
  )
{

}

void ActiveComponentBase ::
  CMD_SYNC_ARRAY_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq,
      A a
  )
{

}

void ActiveComponentBase ::
  CMD_SYNC_STRUCT_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq,
      S s
  )
{

}

void ActiveComponentBase ::
  CMD_PRIORITY_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void ActiveComponentBase ::
  CMD_PARAMS_PRIORITY_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq,
      U32 u32
  )
{

}

void ActiveComponentBase ::
  CMD_DROP_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void ActiveComponentBase ::
  CMD_PARAMS_PRIORITY_DROP_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq,
      U32 u32
  )
{

}

void ActiveComponentBase ::
  CMD_SYNC_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void ActiveComponentBase ::
  CMD_ASYNC_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void ActiveComponentBase ::
  CMD_SYNC_PRIMITIVE_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void ActiveComponentBase ::
  CMD_SYNC_STRING_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void ActiveComponentBase ::
  CMD_ASYNC_ENUM_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void ActiveComponentBase ::
  CMD_SYNC_ARRAY_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void ActiveComponentBase ::
  CMD_SYNC_STRUCT_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void ActiveComponentBase ::
  CMD_PRIORITY_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void ActiveComponentBase ::
  CMD_PARAMS_PRIORITY_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void ActiveComponentBase ::
  CMD_DROP_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void ActiveComponentBase ::
  CMD_PARAMS_PRIORITY_DROP_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void ActiveComponentBase ::
  CMD_ASYNC_preMsgHook(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void ActiveComponentBase ::
  CMD_PRIORITY_preMsgHook(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void ActiveComponentBase ::
  CMD_PARAMS_PRIORITY_preMsgHook(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void ActiveComponentBase ::
  CMD_DROP_preMsgHook(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void ActiveComponentBase ::
  CMD_PARAMS_PRIORITY_DROP_preMsgHook(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void ActiveComponentBase ::
  log_ACTIVITY_HI_EventActivityHigh()
{

}

void ActiveComponentBase ::
  log_ACTIVITY_LO_EventActivityLowThrottled(
      U32 u32,
      F32 f32,
      bool b
  )
{

}

void ActiveComponentBase ::
  log_COMMAND_EventCommand(
      const Fw::LogStringArg& str1,
      const Fw::LogStringArg& str2
  )
{

}

void ActiveComponentBase ::
  log_DIAGNOSTIC_EventDiagnostic(E e)
{

}

void ActiveComponentBase ::
  log_FATAL_EventFatalThrottled(A a)
{

}

void ActiveComponentBase ::
  log_WARNING_HI_EventWarningHigh(S s)
{

}

void ActiveComponentBase ::
  log_WARNING_LO_EventWarningLowThrottled()
{

}

void ActiveComponentBase ::
  log_ACTIVITY_LO_EventActivityLowThrottled_ThrottleClear()
{

}

void ActiveComponentBase ::
  log_FATAL_EventFatalThrottled_ThrottleClear()
{

}

void ActiveComponentBase ::
  log_WARNING_LO_EventWarningLowThrottled_ThrottleClear()
{

}

void ActiveComponentBase ::
  tlmWrite_ChannelU32Format(
      U32 arg,
      Fw::Time _tlmTime
  )
{

}

void ActiveComponentBase ::
  tlmWrite_ChannelF32Format(
      F32 arg,
      Fw::Time _tlmTime
  )
{

}

void ActiveComponentBase ::
  tlmWrite_ChannelStringFormat(
      const Fw::TlmString& arg,
      Fw::Time _tlmTime
  )
{

}

void ActiveComponentBase ::
  tlmWrite_ChannelEnum(
      const E& arg,
      Fw::Time _tlmTime
  )
{

}

void ActiveComponentBase ::
  tlmWrite_ChannelArrayFreq(
      const A& arg,
      Fw::Time _tlmTime
  )
{

}

void ActiveComponentBase ::
  tlmWrite_ChannelStructFreq(
      const S& arg,
      Fw::Time _tlmTime
  )
{

}

void ActiveComponentBase ::
  tlmWrite_ChannelU32Limits(
      U32 arg,
      Fw::Time _tlmTime
  )
{

}

void ActiveComponentBase ::
  tlmWrite_ChannelF32Limits(
      F32 arg,
      Fw::Time _tlmTime
  )
{

}

void ActiveComponentBase ::
  tlmWrite_ChannelF64(
      F64 arg,
      Fw::Time _tlmTime
  )
{

}

void ActiveComponentBase ::
  parameterUpdated(FwPrmIdType id)
{

}

void ActiveComponentBase ::
  parametersLoaded()
{

}

U32 ActiveComponentBase ::
  paramGet_ParamU32(Fw::ParamValid& isValid)
{

}

F64 ActiveComponentBase ::
  paramGet_ParamF64(Fw::ParamValid& isValid)
{

}

Fw::ParamString ActiveComponentBase ::
  paramGet_ParamString(Fw::ParamValid& isValid)
{

}

E ActiveComponentBase ::
  paramGet_ParamEnum(Fw::ParamValid& isValid)
{

}

A ActiveComponentBase ::
  paramGet_ParamArray(Fw::ParamValid& isValid)
{

}

S ActiveComponentBase ::
  paramGet_ParamStruct(Fw::ParamValid& isValid)
{

}

Fw::Time ActiveComponentBase ::
  getTime()
{

}

void ActiveComponentBase ::
  lock()
{

}

void ActiveComponentBase ::
  unLock()
{

}

Fw::QueuedComponentBase::MsgDispatchStatus ActiveComponentBase ::
  doDispatch()
{

}

void ActiveComponentBase ::
  m_p_cmdIn_in(
      Fw::PassiveComponentBase* callComp,
      NATIVE_INT_TYPE portNum,
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void ActiveComponentBase ::
  m_p_typedSync_in(
      Fw::PassiveComponentBase* callComp,
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const TypedPortStrings::StringSize80& str,
      const E& e,
      const A& a,
      const S& s
  )
{

}

void ActiveComponentBase ::
  m_p_typedAsync_in(
      Fw::PassiveComponentBase* callComp,
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const TypedPortStrings::StringSize80& str,
      const E& e,
      const A& a,
      const S& s
  )
{

}

void ActiveComponentBase ::
  m_p_typedGuarded_in(
      Fw::PassiveComponentBase* callComp,
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const TypedPortStrings::StringSize80& str,
      const E& e,
      const A& a,
      const S& s
  )
{

}

#if FW_PORT_SERIALIZATION

void ActiveComponentBase ::
  m_p_serialSync_in(
      Fw::PassiveComponentBase* callComp,
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void ActiveComponentBase ::
  m_p_serialAsync_in(
      Fw::PassiveComponentBase* callComp,
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void ActiveComponentBase ::
  m_p_serialGuarded_in(
      Fw::PassiveComponentBase* callComp,
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

#endif

Fw::ParamValid ActiveComponentBase ::
  getParam(
      FwPrmIdType id,
      Fw::ParamBuffer& buff
  )
{

}

Fw::CmdResponse ActiveComponentBase ::
  paramSet_ParamU32(Fw::SerializeBufferBase& val)
{

}

Fw::CmdResponse ActiveComponentBase ::
  paramSet_ParamF64(Fw::SerializeBufferBase& val)
{

}

Fw::CmdResponse ActiveComponentBase ::
  paramSet_ParamString(Fw::SerializeBufferBase& val)
{

}

Fw::CmdResponse ActiveComponentBase ::
  paramSet_ParamEnum(Fw::SerializeBufferBase& val)
{

}

Fw::CmdResponse ActiveComponentBase ::
  paramSet_ParamArray(Fw::SerializeBufferBase& val)
{

}

Fw::CmdResponse ActiveComponentBase ::
  paramSet_ParamStruct(Fw::SerializeBufferBase& val)
{

}

Fw::CmdResponse ActiveComponentBase ::
  paramSave_ParamU32()
{

}

Fw::CmdResponse ActiveComponentBase ::
  paramSave_ParamF64()
{

}

Fw::CmdResponse ActiveComponentBase ::
  paramSave_ParamString()
{

}

Fw::CmdResponse ActiveComponentBase ::
  paramSave_ParamEnum()
{

}

Fw::CmdResponse ActiveComponentBase ::
  paramSave_ParamArray()
{

}

Fw::CmdResponse ActiveComponentBase ::
  paramSave_ParamStruct()
{

}

#if FW_ENABLE_TEXT_LOGGING == 1

#endif
