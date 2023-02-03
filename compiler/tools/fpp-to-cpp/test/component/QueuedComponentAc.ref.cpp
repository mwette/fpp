// ======================================================================
// \title  QueuedComponentAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for Queued component base class
// ======================================================================

#include <cstdio>

#include "Fw/Types/Assert.hpp"
#include "Fw/Types/String.hpp"
#include "QueuedComponentAc.hpp"

Fw::InputCmdPort* QueuedComponentBase ::
  get_cmdIn_InputPort(NATIVE_INT_TYPE portNum)
{
  FW_ASSERT(
    portNum < this->getNum_cmdIn_InputPorts(),
    static_cast<FwAssertArgType>(portNum)
   );

  return &this->m_cmdIn_InputPort[portNum];
}

InputTypedPort* QueuedComponentBase ::
  get_typedSync_InputPort(NATIVE_INT_TYPE portNum)
{
  FW_ASSERT(
    portNum < this->getNum_typedSync_InputPorts(),
    static_cast<FwAssertArgType>(portNum)
   );

  return &this->m_typedSync_InputPort[portNum];
}

InputTypedPort* QueuedComponentBase ::
  get_typedGuarded_InputPort(NATIVE_INT_TYPE portNum)
{
  FW_ASSERT(
    portNum < this->getNum_typedGuarded_InputPorts(),
    static_cast<FwAssertArgType>(portNum)
   );

  return &this->m_typedGuarded_InputPort[portNum];
}

InputTypedPort* QueuedComponentBase ::
  get_typedAsync_InputPort(NATIVE_INT_TYPE portNum)
{
  FW_ASSERT(
    portNum < this->getNum_typedAsync_InputPorts(),
    static_cast<FwAssertArgType>(portNum)
   );

  return &this->m_typedAsync_InputPort[portNum];
}

Fw::InputSerializePort* QueuedComponentBase ::
  get_serialSync_InputPort(NATIVE_INT_TYPE portNum)
{
  FW_ASSERT(
    portNum < this->getNum_serialSync_InputPorts(),
    static_cast<FwAssertArgType>(portNum)
   );

  return &this->m_serialSync_InputPort[portNum];
}

Fw::InputSerializePort* QueuedComponentBase ::
  get_serialGuarded_InputPort(NATIVE_INT_TYPE portNum)
{
  FW_ASSERT(
    portNum < this->getNum_serialGuarded_InputPorts(),
    static_cast<FwAssertArgType>(portNum)
   );

  return &this->m_serialGuarded_InputPort[portNum];
}

Fw::InputSerializePort* QueuedComponentBase ::
  get_serialAsync_InputPort(NATIVE_INT_TYPE portNum)
{
  FW_ASSERT(
    portNum < this->getNum_serialAsync_InputPorts(),
    static_cast<FwAssertArgType>(portNum)
   );

  return &this->m_serialAsync_InputPort[portNum];
}

void QueuedComponentBase ::
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

void QueuedComponentBase ::
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

void QueuedComponentBase ::
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

void QueuedComponentBase ::
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

void QueuedComponentBase ::
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

void QueuedComponentBase ::
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

void QueuedComponentBase ::
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

void QueuedComponentBase ::
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

void QueuedComponentBase ::
  set_cmdRegOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

void QueuedComponentBase ::
  set_cmdResponseOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

void QueuedComponentBase ::
  set_eventOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

#if FW_ENABLE_TEXT_LOGGING == 1

void QueuedComponentBase ::
  set_textEventOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

#endif

void QueuedComponentBase ::
  set_tlmOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

void QueuedComponentBase ::
  set_prmGetOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

void QueuedComponentBase ::
  set_prmSetOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

void QueuedComponentBase ::
  set_timeGetOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

#endif

void QueuedComponentBase ::
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

void QueuedComponentBase ::
  set_typedOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

#endif

#if FW_PORT_SERIALIZATION

void QueuedComponentBase ::
  set_serialOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputSerializePort* port
  )
{

}

void QueuedComponentBase ::
  set_serialOut_OutputPort(
      NATIVE_INT_TYPE portNum,
      Fw::InputPortBase* port
  )
{

}

#endif

void QueuedComponentBase ::
  regCommands()
{

}

void QueuedComponentBase ::
  loadParameters()
{

}

QueuedComponentBase ::
  QueuedComponentBase(const char* compName) :
    Fw::QueuedComponentBase(compName)
{
  // Write telemetry channel ChannelArrayFreq
  this->m_first_update_ChannelArrayFreq = true;

  this->m_EventActivityLowThrottledThrottle = 0;
  this->m_EventFatalThrottledThrottle = 0;
  this->m_EventWarningLowThrottledThrottle = 0;

  this->m_param_ParamU32_valid = Fw::ParamValid::UNINIT;
  this->m_param_ParamF64_valid = Fw::ParamValid::UNINIT;
  this->m_param_ParamString_valid = Fw::ParamValid::UNINIT;
  this->m_param_ParamEnum_valid = Fw::ParamValid::UNINIT;
  this->m_param_ParamArray_valid = Fw::ParamValid::UNINIT;
  this->m_param_ParamStruct_valid = Fw::ParamValid::UNINIT;
}

void QueuedComponentBase ::
  init(
      NATIVE_INT_TYPE queueDepth,
      NATIVE_INT_TYPE msgSize,
      NATIVE_INT_TYPE instance
  )
{
  // Initialize base class
  Fw::QueuedComponentBase::init(instance);

  // Connect input port cmdIn
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_cmdIn_InputPorts());
    port++
  ) {
    this->m_cmdIn_InputPort[port].init();
    this->m_cmdIn_InputPort[port].addCallComp(
      this,
      m_p_cmdIn_in
    );
    this->m_cmdIn_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_cmdIn_InputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_cmdIn_InputPort[port].setObjName(portName);
#endif
  }

  // Connect input port typedSync
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_typedSync_InputPorts());
    port++
  ) {
    this->m_typedSync_InputPort[port].init();
    this->m_typedSync_InputPort[port].addCallComp(
      this,
      m_p_typedSync_in
    );
    this->m_typedSync_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_typedSync_InputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_typedSync_InputPort[port].setObjName(portName);
#endif
  }

  // Connect input port typedGuarded
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_typedGuarded_InputPorts());
    port++
  ) {
    this->m_typedGuarded_InputPort[port].init();
    this->m_typedGuarded_InputPort[port].addCallComp(
      this,
      m_p_typedGuarded_in
    );
    this->m_typedGuarded_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_typedGuarded_InputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_typedGuarded_InputPort[port].setObjName(portName);
#endif
  }

  // Connect input port typedAsync
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_typedAsync_InputPorts());
    port++
  ) {
    this->m_typedAsync_InputPort[port].init();
    this->m_typedAsync_InputPort[port].addCallComp(
      this,
      m_p_typedAsync_in
    );
    this->m_typedAsync_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_typedAsync_InputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_typedAsync_InputPort[port].setObjName(portName);
#endif
  }

  // Connect input port serialSync
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_serialSync_InputPorts());
    port++
  ) {
    this->m_serialSync_InputPort[port].init();
    this->m_serialSync_InputPort[port].addCallComp(
      this,
      m_p_serialSync_in
    );
    this->m_serialSync_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_serialSync_InputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_serialSync_InputPort[port].setObjName(portName);
#endif
  }

  // Connect input port serialGuarded
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_serialGuarded_InputPorts());
    port++
  ) {
    this->m_serialGuarded_InputPort[port].init();
    this->m_serialGuarded_InputPort[port].addCallComp(
      this,
      m_p_serialGuarded_in
    );
    this->m_serialGuarded_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_serialGuarded_InputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_serialGuarded_InputPort[port].setObjName(portName);
#endif
  }

  // Connect input port serialAsync
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_serialAsync_InputPorts());
    port++
  ) {
    this->m_serialAsync_InputPort[port].init();
    this->m_serialAsync_InputPort[port].addCallComp(
      this,
      m_p_serialAsync_in
    );
    this->m_serialAsync_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_serialAsync_InputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_serialAsync_InputPort[port].setObjName(portName);
#endif
  }

  // Connect output port cmdRegOut
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_cmdRegOut_OutputPorts());
    port++
  ) {
    this->m_cmdRegOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_cmdRegOut_OutputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_cmdRegOut_OutputPort[port].setObjName(portName);
#endif
  }

  // Connect output port cmdResponseOut
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_cmdResponseOut_OutputPorts());
    port++
  ) {
    this->m_cmdResponseOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_cmdResponseOut_OutputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_cmdResponseOut_OutputPort[port].setObjName(portName);
#endif
  }

  // Connect output port eventOut
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_eventOut_OutputPorts());
    port++
  ) {
    this->m_eventOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_eventOut_OutputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_eventOut_OutputPort[port].setObjName(portName);
#endif
  }

  // Connect output port textEventOut
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_textEventOut_OutputPorts());
    port++
  ) {
    this->m_textEventOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_textEventOut_OutputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_textEventOut_OutputPort[port].setObjName(portName);
#endif
  }

  // Connect output port tlmOut
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_tlmOut_OutputPorts());
    port++
  ) {
    this->m_tlmOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_tlmOut_OutputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_tlmOut_OutputPort[port].setObjName(portName);
#endif
  }

  // Connect output port prmGetOut
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_prmGetOut_OutputPorts());
    port++
  ) {
    this->m_prmGetOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_prmGetOut_OutputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_prmGetOut_OutputPort[port].setObjName(portName);
#endif
  }

  // Connect output port prmSetOut
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_prmSetOut_OutputPorts());
    port++
  ) {
    this->m_prmSetOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_prmSetOut_OutputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_prmSetOut_OutputPort[port].setObjName(portName);
#endif
  }

  // Connect output port timeGetOut
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_timeGetOut_OutputPorts());
    port++
  ) {
    this->m_timeGetOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_timeGetOut_OutputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_timeGetOut_OutputPort[port].setObjName(portName);
#endif
  }

  // Connect output port typedOut
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_typedOut_OutputPorts());
    port++
  ) {
    this->m_typedOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_typedOut_OutputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_typedOut_OutputPort[port].setObjName(portName);
#endif
  }

  // Connect output port serialOut
  for (
    PlatformIntType port = 0;
    port < static_cast<PlatformIntType>(this->getNum_serialOut_OutputPorts());
    port++
  ) {
    this->m_serialOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
    char portName[120];
    (void) snprintf(
      portName,
      sizeof(portName),
      "%s_serialOut_OutputPort[%" PRI_PlatformIntType "]",
      this->m_objName,
      port
    );
    this->m_serialOut_OutputPort[port].setObjName(portName);
#endif
  }
}

QueuedComponentBase ::
  ~QueuedComponentBase()
{

}

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_cmdIn_InputPorts()
{

}

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_typedSync_InputPorts()
{

}

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_typedGuarded_InputPorts()
{

}

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_typedAsync_InputPorts()
{

}

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_serialSync_InputPorts()
{

}

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_serialGuarded_InputPorts()
{

}

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_serialAsync_InputPorts()
{

}

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_cmdRegOut_OutputPorts()
{

}

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_cmdResponseOut_OutputPorts()
{

}

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_eventOut_OutputPorts()
{

}

#if FW_ENABLE_TEXT_LOGGING == 1

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_textEventOut_OutputPorts()
{

}

#endif

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_tlmOut_OutputPorts()
{

}

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_prmGetOut_OutputPorts()
{

}

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_prmSetOut_OutputPorts()
{

}

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_timeGetOut_OutputPorts()
{

}

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_typedOut_OutputPorts()
{

}

NATIVE_INT_TYPE QueuedComponentBase ::
  getNum_serialOut_OutputPorts()
{

}

bool QueuedComponentBase ::
  isConnected_cmdRegOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

bool QueuedComponentBase ::
  isConnected_cmdResponseOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

bool QueuedComponentBase ::
  isConnected_eventOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

#if FW_ENABLE_TEXT_LOGGING == 1

bool QueuedComponentBase ::
  isConnected_textEventOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

#endif

bool QueuedComponentBase ::
  isConnected_tlmOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

bool QueuedComponentBase ::
  isConnected_prmGetOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

bool QueuedComponentBase ::
  isConnected_prmSetOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

bool QueuedComponentBase ::
  isConnected_timeGetOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

bool QueuedComponentBase ::
  isConnected_typedOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

bool QueuedComponentBase ::
  isConnected_serialOut_OutputPort(NATIVE_INT_TYPE portNum)
{

}

void QueuedComponentBase ::
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

void QueuedComponentBase ::
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

void QueuedComponentBase ::
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

void QueuedComponentBase ::
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

void QueuedComponentBase ::
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

void QueuedComponentBase ::
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

void QueuedComponentBase ::
  serialSync_handler(
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void QueuedComponentBase ::
  serialGuarded_handler(
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void QueuedComponentBase ::
  serialAsync_handler(
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void QueuedComponentBase ::
  serialSync_handlerBase(
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void QueuedComponentBase ::
  serialGuarded_handlerBase(
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void QueuedComponentBase ::
  serialAsync_handlerBase(
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void QueuedComponentBase ::
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

void QueuedComponentBase ::
  serialAsync_preMsgHook(
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void QueuedComponentBase ::
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

Fw::SerializeStatus QueuedComponentBase ::
  serialOut_out(
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void QueuedComponentBase ::
  internalPrimitive_internalInterfaceHandler(
      U32 u32,
      F32 f32,
      bool b
  )
{

}

void QueuedComponentBase ::
  internalString_internalInterfaceHandler(
      const Fw::InternalInterfaceString& str1,
      const Fw::InternalInterfaceString& str2
  )
{

}

void QueuedComponentBase ::
  internalEnum_internalInterfaceHandler(const E& e)
{

}

void QueuedComponentBase ::
  internalArray_internalInterfaceHandler(const A& a)
{

}

void QueuedComponentBase ::
  internalStruct_internalInterfaceHandler(const S& s)
{

}

void QueuedComponentBase ::
  internalPriorityDrop_internalInterfaceHandler()
{

}

void QueuedComponentBase ::
  internalPrimitive_internalInterfaceInvoke(
      U32 u32,
      F32 f32,
      bool b
  )
{

}

void QueuedComponentBase ::
  internalString_internalInterfaceInvoke(
      const Fw::InternalInterfaceString& str1,
      const Fw::InternalInterfaceString& str2
  )
{

}

void QueuedComponentBase ::
  internalEnum_internalInterfaceInvoke(const E& e)
{

}

void QueuedComponentBase ::
  internalArray_internalInterfaceInvoke(const A& a)
{

}

void QueuedComponentBase ::
  internalStruct_internalInterfaceInvoke(const S& s)
{

}

void QueuedComponentBase ::
  internalPriorityDrop_internalInterfaceInvoke()
{

}

void QueuedComponentBase ::
  cmdResponse_out(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdResponse response
  )
{

}

void QueuedComponentBase ::
  CMD_SYNC_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void QueuedComponentBase ::
  CMD_SYNC_PRIMITIVE_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq,
      U32 u32,
      F32 f32,
      bool b
  )
{

}

void QueuedComponentBase ::
  CMD_SYNC_STRING_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq,
      const Fw::CmdStringArg& str1,
      const Fw::CmdStringArg& str2
  )
{

}

void QueuedComponentBase ::
  CMD_ASYNC_ENUM_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq,
      E e
  )
{

}

void QueuedComponentBase ::
  CMD_SYNC_ARRAY_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq,
      A a
  )
{

}

void QueuedComponentBase ::
  CMD_SYNC_STRUCT_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq,
      S s
  )
{

}

void QueuedComponentBase ::
  CMD_ASYNC_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void QueuedComponentBase ::
  CMD_PRIORITY_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void QueuedComponentBase ::
  CMD_PARAMS_PRIORITY_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq,
      U32 u32
  )
{

}

void QueuedComponentBase ::
  CMD_DROP_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void QueuedComponentBase ::
  CMD_PARAMS_PRIORITY_DROP_cmdHandler(
      FwOpcodeType opCode,
      U32 cmdSeq,
      U32 u32
  )
{

}

void QueuedComponentBase ::
  CMD_SYNC_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void QueuedComponentBase ::
  CMD_SYNC_PRIMITIVE_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void QueuedComponentBase ::
  CMD_SYNC_STRING_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void QueuedComponentBase ::
  CMD_ASYNC_ENUM_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void QueuedComponentBase ::
  CMD_SYNC_ARRAY_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void QueuedComponentBase ::
  CMD_SYNC_STRUCT_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void QueuedComponentBase ::
  CMD_ASYNC_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void QueuedComponentBase ::
  CMD_PRIORITY_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void QueuedComponentBase ::
  CMD_PARAMS_PRIORITY_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void QueuedComponentBase ::
  CMD_DROP_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void QueuedComponentBase ::
  CMD_PARAMS_PRIORITY_DROP_cmdHandlerBase(
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void QueuedComponentBase ::
  CMD_ASYNC_preMsgHook(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void QueuedComponentBase ::
  CMD_PRIORITY_preMsgHook(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void QueuedComponentBase ::
  CMD_PARAMS_PRIORITY_preMsgHook(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void QueuedComponentBase ::
  CMD_DROP_preMsgHook(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void QueuedComponentBase ::
  CMD_PARAMS_PRIORITY_DROP_preMsgHook(
      FwOpcodeType opCode,
      U32 cmdSeq
  )
{

}

void QueuedComponentBase ::
  log_ACTIVITY_HI_EventActivityHigh()
{

}

void QueuedComponentBase ::
  log_ACTIVITY_LO_EventActivityLowThrottled(
      U32 u32,
      F32 f32,
      bool b
  )
{

}

void QueuedComponentBase ::
  log_COMMAND_EventCommand(
      const Fw::LogStringArg& str1,
      const Fw::LogStringArg& str2
  )
{

}

void QueuedComponentBase ::
  log_DIAGNOSTIC_EventDiagnostic(E e)
{

}

void QueuedComponentBase ::
  log_FATAL_EventFatalThrottled(A a)
{

}

void QueuedComponentBase ::
  log_WARNING_HI_EventWarningHigh(S s)
{

}

void QueuedComponentBase ::
  log_WARNING_LO_EventWarningLowThrottled()
{

}

void QueuedComponentBase ::
  log_ACTIVITY_LO_EventActivityLowThrottled_ThrottleClear()
{

}

void QueuedComponentBase ::
  log_FATAL_EventFatalThrottled_ThrottleClear()
{

}

void QueuedComponentBase ::
  log_WARNING_LO_EventWarningLowThrottled_ThrottleClear()
{

}

void QueuedComponentBase ::
  tlmWrite_ChannelU32Format(
      U32 arg,
      Fw::Time _tlmTime
  )
{

}

void QueuedComponentBase ::
  tlmWrite_ChannelF32Format(
      F32 arg,
      Fw::Time _tlmTime
  )
{

}

void QueuedComponentBase ::
  tlmWrite_ChannelStringFormat(
      const Fw::TlmString& arg,
      Fw::Time _tlmTime
  )
{

}

void QueuedComponentBase ::
  tlmWrite_ChannelEnum(
      const E& arg,
      Fw::Time _tlmTime
  )
{

}

void QueuedComponentBase ::
  tlmWrite_ChannelArrayFreq(
      const A& arg,
      Fw::Time _tlmTime
  )
{

}

void QueuedComponentBase ::
  tlmWrite_ChannelStructFreq(
      const S& arg,
      Fw::Time _tlmTime
  )
{

}

void QueuedComponentBase ::
  tlmWrite_ChannelU32Limits(
      U32 arg,
      Fw::Time _tlmTime
  )
{

}

void QueuedComponentBase ::
  tlmWrite_ChannelF32Limits(
      F32 arg,
      Fw::Time _tlmTime
  )
{

}

void QueuedComponentBase ::
  tlmWrite_ChannelF64(
      F64 arg,
      Fw::Time _tlmTime
  )
{

}

void QueuedComponentBase ::
  parameterUpdated(FwPrmIdType id)
{

}

void QueuedComponentBase ::
  parametersLoaded()
{

}

U32 QueuedComponentBase ::
  paramGet_ParamU32(Fw::ParamValid& isValid)
{

}

F64 QueuedComponentBase ::
  paramGet_ParamF64(Fw::ParamValid& isValid)
{

}

Fw::ParamString QueuedComponentBase ::
  paramGet_ParamString(Fw::ParamValid& isValid)
{

}

E QueuedComponentBase ::
  paramGet_ParamEnum(Fw::ParamValid& isValid)
{

}

A QueuedComponentBase ::
  paramGet_ParamArray(Fw::ParamValid& isValid)
{

}

S QueuedComponentBase ::
  paramGet_ParamStruct(Fw::ParamValid& isValid)
{

}

Fw::Time QueuedComponentBase ::
  getTime()
{

}

void QueuedComponentBase ::
  lock()
{

}

void QueuedComponentBase ::
  unLock()
{

}

Fw::QueuedComponentBase::MsgDispatchStatus QueuedComponentBase ::
  doDispatch()
{

}

void QueuedComponentBase ::
  m_p_cmdIn_in(
      Fw::PassiveComponentBase* callComp,
      NATIVE_INT_TYPE portNum,
      FwOpcodeType opCode,
      U32 cmdSeq,
      Fw::CmdArgBuffer& args
  )
{

}

void QueuedComponentBase ::
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

void QueuedComponentBase ::
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

void QueuedComponentBase ::
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

#if FW_PORT_SERIALIZATION

void QueuedComponentBase ::
  m_p_serialSync_in(
      Fw::PassiveComponentBase* callComp,
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void QueuedComponentBase ::
  m_p_serialGuarded_in(
      Fw::PassiveComponentBase* callComp,
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

void QueuedComponentBase ::
  m_p_serialAsync_in(
      Fw::PassiveComponentBase* callComp,
      NATIVE_INT_TYPE portNum,
      Fw::SerializeBufferBase& buffer
  )
{

}

#endif

Fw::ParamValid QueuedComponentBase ::
  getParam(
      FwPrmIdType id,
      Fw::ParamBuffer& buff
  )
{

}

Fw::CmdResponse QueuedComponentBase ::
  paramSet_ParamU32(Fw::SerializeBufferBase& val)
{

}

Fw::CmdResponse QueuedComponentBase ::
  paramSet_ParamF64(Fw::SerializeBufferBase& val)
{

}

Fw::CmdResponse QueuedComponentBase ::
  paramSet_ParamString(Fw::SerializeBufferBase& val)
{

}

Fw::CmdResponse QueuedComponentBase ::
  paramSet_ParamEnum(Fw::SerializeBufferBase& val)
{

}

Fw::CmdResponse QueuedComponentBase ::
  paramSet_ParamArray(Fw::SerializeBufferBase& val)
{

}

Fw::CmdResponse QueuedComponentBase ::
  paramSet_ParamStruct(Fw::SerializeBufferBase& val)
{

}

Fw::CmdResponse QueuedComponentBase ::
  paramSave_ParamU32()
{

}

Fw::CmdResponse QueuedComponentBase ::
  paramSave_ParamF64()
{

}

Fw::CmdResponse QueuedComponentBase ::
  paramSave_ParamString()
{

}

Fw::CmdResponse QueuedComponentBase ::
  paramSave_ParamEnum()
{

}

Fw::CmdResponse QueuedComponentBase ::
  paramSave_ParamArray()
{

}

Fw::CmdResponse QueuedComponentBase ::
  paramSave_ParamStruct()
{

}

#if FW_ENABLE_TEXT_LOGGING == 1

#endif
