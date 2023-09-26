// ======================================================================
// \title  ActiveSerialTesterHelpers.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for ActiveSerial component test harness implementation class
// ======================================================================

#include "ActiveSerialTester.hpp"

// ----------------------------------------------------------------------
// Helper functions
// ----------------------------------------------------------------------

void ActiveSerialTester ::
  connectPorts()
{
  // Connect special input ports

  this->connect_to_cmdIn(
    0,
    this->component.get_cmdIn_InputPort(0)
  );

  // Connect special output ports

  this->component.set_cmdRegOut_OutputPort(
    0,
    this->get_from_cmdRegOut(0)
  );

  this->component.set_cmdResponseOut_OutputPort(
    0,
    this->get_from_cmdResponseOut(0)
  );

  this->component.set_eventOut_OutputPort(
    0,
    this->get_from_eventOut(0)
  );

  this->component.set_prmGetOut_OutputPort(
    0,
    this->get_from_prmGetOut(0)
  );

  this->component.set_prmSetOut_OutputPort(
    0,
    this->get_from_prmSetOut(0)
  );

  this->component.set_textEventOut_OutputPort(
    0,
    this->get_from_textEventOut(0)
  );

  this->component.set_timeGetOut_OutputPort(
    0,
    this->get_from_timeGetOut(0)
  );

  this->component.set_tlmOut_OutputPort(
    0,
    this->get_from_tlmOut(0)
  );

  // Connect typed input ports

  this->connect_to_noArgsAsync(
    0,
    this->component.get_noArgsAsync_InputPort(0)
  );

  this->connect_to_noArgsGuarded(
    0,
    this->component.get_noArgsGuarded_InputPort(0)
  );

  this->connect_to_noArgsReturnGuarded(
    0,
    this->component.get_noArgsReturnGuarded_InputPort(0)
  );

  for (NATIVE_UINT_TYPE i = 0; i < 3; i++) {
    this->connect_to_noArgsReturnSync(
      i,
      this->component.get_noArgsReturnSync_InputPort(i)
    );
  }

  for (NATIVE_UINT_TYPE i = 0; i < 3; i++) {
    this->connect_to_noArgsSync(
      i,
      this->component.get_noArgsSync_InputPort(i)
    );
  }

  this->connect_to_typedAsync(
    0,
    this->component.get_typedAsync_InputPort(0)
  );

  this->connect_to_typedAsyncAssert(
    0,
    this->component.get_typedAsyncAssert_InputPort(0)
  );

  this->connect_to_typedAsyncBlockPriority(
    0,
    this->component.get_typedAsyncBlockPriority_InputPort(0)
  );

  this->connect_to_typedAsyncDropPriority(
    0,
    this->component.get_typedAsyncDropPriority_InputPort(0)
  );

  this->connect_to_typedGuarded(
    0,
    this->component.get_typedGuarded_InputPort(0)
  );

  this->connect_to_typedReturnGuarded(
    0,
    this->component.get_typedReturnGuarded_InputPort(0)
  );

  for (NATIVE_UINT_TYPE i = 0; i < 3; i++) {
    this->connect_to_typedReturnSync(
      i,
      this->component.get_typedReturnSync_InputPort(i)
    );
  }

  for (NATIVE_UINT_TYPE i = 0; i < 3; i++) {
    this->connect_to_typedSync(
      i,
      this->component.get_typedSync_InputPort(i)
    );
  }

  // Connect typed output ports

  this->component.set_noArgsOut_OutputPort(
    0,
    this->get_from_noArgsOut(0)
  );

  this->component.set_noArgsReturnOut_OutputPort(
    0,
    this->get_from_noArgsReturnOut(0)
  );

  this->component.set_typedOut_OutputPort(
    0,
    this->get_from_typedOut(0)
  );

  this->component.set_typedReturnOut_OutputPort(
    0,
    this->get_from_typedReturnOut(0)
  );

  // Connect serial input ports

  this->connect_to_serialAsync(
    0,
    this->component.get_serialAsync_InputPort(0)
  );

  this->connect_to_serialAsyncAssert(
    0,
    this->component.get_serialAsyncAssert_InputPort(0)
  );

  this->connect_to_serialAsyncBlockPriority(
    0,
    this->component.get_serialAsyncBlockPriority_InputPort(0)
  );

  this->connect_to_serialAsyncDropPriority(
    0,
    this->component.get_serialAsyncDropPriority_InputPort(0)
  );

  this->connect_to_serialGuarded(
    0,
    this->component.get_serialGuarded_InputPort(0)
  );

  this->connect_to_serialSync(
    0,
    this->component.get_serialSync_InputPort(0)
  );

  // Connect serial output ports

  for (NATIVE_UINT_TYPE i = 0; i < 5; i++) {
    this->component.set_serialOut_OutputPort(
      i,
      this->get_from_serialOut(i)
    );
  }
}

void ActiveSerialTester ::
  initComponents()
{
  this->init();
  this->component.init(ActiveSerialTester::TEST_INSTANCE_QUEUE_DEPTH, ActiveSerialTester::TEST_INSTANCE_ID);
}
