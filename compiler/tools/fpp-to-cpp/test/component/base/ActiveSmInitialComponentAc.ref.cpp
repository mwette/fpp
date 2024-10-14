// ======================================================================
// \title  ActiveSmInitialComponentAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for ActiveSmInitial component base class
// ======================================================================

#include "Fw/Types/Assert.hpp"
#include "Fw/Types/ExternalString.hpp"
#if FW_ENABLE_TEXT_LOGGING
#include "Fw/Types/String.hpp"
#endif
#include "base/ActiveSmInitialComponentAc.hpp"

namespace FppTest {

  namespace {

    // Constant definitions for the state machine signal buffer
    namespace SmSignalBuffer {

      // The serialized size
      static constexpr FwSizeType SERIALIZED_SIZE =
        2 * sizeof(FwEnumStoreType);

    }

    enum MsgTypeEnum {
      ACTIVESMINITIAL_COMPONENT_EXIT = Fw::ActiveComponentBase::ACTIVE_COMPONENT_EXIT,
      INTERNAL_STATE_MACHINE_SIGNAL,
    };

    // Get the max size by constructing a union of the async input, command, and
    // internal port serialization sizes
    union BuffUnion {
      // Size of buffer for internal state machine signals
      // The internal SmSignalBuffer stores the state machine id, the
      // signal id, and the signal data
      BYTE internalSmBufferSize[SmSignalBuffer::SERIALIZED_SIZE];
    };

    // Define a message buffer class large enough to handle all the
    // asynchronous inputs to the component
    class ComponentIpcSerializableBuffer :
      public Fw::SerializeBufferBase
    {

      public:

        enum {
          // Offset into data in buffer: Size of message ID and port number
          DATA_OFFSET = sizeof(FwEnumStoreType) + sizeof(FwIndexType),
          // Max data size
          MAX_DATA_SIZE = sizeof(BuffUnion),
          // Max message size: Size of message id + size of port + max data size
          SERIALIZATION_SIZE = DATA_OFFSET + MAX_DATA_SIZE
        };

        Fw::Serializable::SizeType getBuffCapacity() const {
          return sizeof(m_buff);
        }

        U8* getBuffAddr() {
          return m_buff;
        }

        const U8* getBuffAddr() const {
          return m_buff;
        }

      private:
        // Should be the max of all the input ports serialized sizes...
        U8 m_buff[SERIALIZATION_SIZE];

    };
  }

  // ----------------------------------------------------------------------
  // Types for internal state machines
  // ----------------------------------------------------------------------

  ActiveSmInitialComponentBase::Basic ::
    Basic(ActiveSmInitialComponentBase& component) :
      m_component(component)
  {

  }

  void ActiveSmInitialComponentBase::Basic ::
    init(ActiveSmInitialComponentBase::SmId smId)
  {
    this->initBase(static_cast<FwEnumStoreType>(smId));
  }

  ActiveSmInitialComponentBase::SmId ActiveSmInitialComponentBase::Basic ::
    getId() const
  {
    return static_cast<ActiveSmInitialComponentBase::SmId>(this->m_id);
  }

  void ActiveSmInitialComponentBase::Basic ::
    action_a(Signal signal)
  {
    this->m_component.Basic_action_a(this->getId(), signal);
  }

  ActiveSmInitialComponentBase::Junction ::
    Junction(ActiveSmInitialComponentBase& component) :
      m_component(component)
  {

  }

  void ActiveSmInitialComponentBase::Junction ::
    init(ActiveSmInitialComponentBase::SmId smId)
  {
    this->initBase(static_cast<FwEnumStoreType>(smId));
  }

  ActiveSmInitialComponentBase::SmId ActiveSmInitialComponentBase::Junction ::
    getId() const
  {
    return static_cast<ActiveSmInitialComponentBase::SmId>(this->m_id);
  }

  void ActiveSmInitialComponentBase::Junction ::
    action_a(Signal signal)
  {
    this->m_component.Junction_action_a(this->getId(), signal);
  }

  bool ActiveSmInitialComponentBase::Junction ::
    guard_g(Signal signal) const
  {
    return this->m_component.Junction_guard_g(this->getId(), signal);
  }

  ActiveSmInitialComponentBase::SmInitial_Basic ::
    SmInitial_Basic(ActiveSmInitialComponentBase& component) :
      m_component(component)
  {

  }

  void ActiveSmInitialComponentBase::SmInitial_Basic ::
    init(ActiveSmInitialComponentBase::SmId smId)
  {
    this->initBase(static_cast<FwEnumStoreType>(smId));
  }

  ActiveSmInitialComponentBase::SmId ActiveSmInitialComponentBase::SmInitial_Basic ::
    getId() const
  {
    return static_cast<ActiveSmInitialComponentBase::SmId>(this->m_id);
  }

  void ActiveSmInitialComponentBase::SmInitial_Basic ::
    action_a(Signal signal)
  {
    this->m_component.SmInitial_Basic_action_a(this->getId(), signal);
  }

  ActiveSmInitialComponentBase::SmInitial_Junction ::
    SmInitial_Junction(ActiveSmInitialComponentBase& component) :
      m_component(component)
  {

  }

  void ActiveSmInitialComponentBase::SmInitial_Junction ::
    init(ActiveSmInitialComponentBase::SmId smId)
  {
    this->initBase(static_cast<FwEnumStoreType>(smId));
  }

  ActiveSmInitialComponentBase::SmId ActiveSmInitialComponentBase::SmInitial_Junction ::
    getId() const
  {
    return static_cast<ActiveSmInitialComponentBase::SmId>(this->m_id);
  }

  void ActiveSmInitialComponentBase::SmInitial_Junction ::
    action_a(Signal signal)
  {
    this->m_component.SmInitial_Junction_action_a(this->getId(), signal);
  }

  bool ActiveSmInitialComponentBase::SmInitial_Junction ::
    guard_g(Signal signal) const
  {
    return this->m_component.SmInitial_Junction_guard_g(this->getId(), signal);
  }

  // ----------------------------------------------------------------------
  // Component initialization
  // ----------------------------------------------------------------------

  void ActiveSmInitialComponentBase ::
    init(
        FwSizeType queueDepth,
        FwEnumStoreType instance
    )
  {
    // Initialize base class
    Fw::ActiveComponentBase::init(instance);

    this->m_stateMachine_basic.init(SmId::basic);
    this->m_stateMachine_junction.init(SmId::junction);
    this->m_stateMachine_smInitialBasic.init(SmId::smInitialBasic);
    this->m_stateMachine_smInitialJunction.init(SmId::smInitialJunction);

    Os::Queue::Status qStat = this->createQueue(
      queueDepth,
      static_cast<FwSizeType>(ComponentIpcSerializableBuffer::SERIALIZATION_SIZE)
    );
    FW_ASSERT(
      Os::Queue::Status::OP_OK == qStat,
      static_cast<FwAssertArgType>(qStat)
    );
  }

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  ActiveSmInitialComponentBase ::
    ActiveSmInitialComponentBase(const char* compName) :
      Fw::ActiveComponentBase(compName),
      m_stateMachine_basic(*this),
      m_stateMachine_junction(*this),
      m_stateMachine_smInitialBasic(*this),
      m_stateMachine_smInitialJunction(*this)
  {

  }

  ActiveSmInitialComponentBase ::
    ~ActiveSmInitialComponentBase()
  {

  }

  // ----------------------------------------------------------------------
  // State getter functions
  // ----------------------------------------------------------------------

  ActiveSmInitialComponentBase::Basic::State ActiveSmInitialComponentBase ::
    basic_getState() const
  {
    return this->m_stateMachine_basic.getState();
  }

  ActiveSmInitialComponentBase::Junction::State ActiveSmInitialComponentBase ::
    junction_getState() const
  {
    return this->m_stateMachine_junction.getState();
  }

  ActiveSmInitialComponentBase::SmInitial_Basic::State ActiveSmInitialComponentBase ::
    smInitialBasic_getState() const
  {
    return this->m_stateMachine_smInitialBasic.getState();
  }

  ActiveSmInitialComponentBase::SmInitial_Junction::State ActiveSmInitialComponentBase ::
    smInitialJunction_getState() const
  {
    return this->m_stateMachine_smInitialJunction.getState();
  }

  // ----------------------------------------------------------------------
  // Message dispatch functions
  // ----------------------------------------------------------------------

  Fw::QueuedComponentBase::MsgDispatchStatus ActiveSmInitialComponentBase ::
    doDispatch()
  {
    ComponentIpcSerializableBuffer msg;
    FwQueuePriorityType priority = 0;

    Os::Queue::Status msgStatus = this->m_queue.receive(
      msg,
      Os::Queue::BLOCKING,
      priority
    );
    FW_ASSERT(
      msgStatus == Os::Queue::OP_OK,
      static_cast<FwAssertArgType>(msgStatus)
    );

    // Reset to beginning of buffer
    msg.resetDeser();

    FwEnumStoreType desMsg = 0;
    Fw::SerializeStatus deserStatus = msg.deserialize(desMsg);
    FW_ASSERT(
      deserStatus == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(deserStatus)
    );

    MsgTypeEnum msgType = static_cast<MsgTypeEnum>(desMsg);

    if (msgType == ACTIVESMINITIAL_COMPONENT_EXIT) {
      return MSG_DISPATCH_EXIT;
    }

    FwIndexType portNum = 0;
    deserStatus = msg.deserialize(portNum);
    FW_ASSERT(
      deserStatus == Fw::FW_SERIALIZE_OK,
      static_cast<FwAssertArgType>(deserStatus)
    );

    switch (msgType) {

      // Handle signals to internal state machines
      case INTERNAL_STATE_MACHINE_SIGNAL:
        this->smDispatch(msg);
        break;

      default:
        return MSG_DISPATCH_ERROR;
    }

    return MSG_DISPATCH_OK;
  }

  // ----------------------------------------------------------------------
  // Helper functions for state machine dispatch
  // ----------------------------------------------------------------------

  void ActiveSmInitialComponentBase ::
    smDispatch(Fw::SerializeBufferBase& buffer)
  {
    // Deserialize the state machine ID and signal
    FwEnumStoreType storedSmId;
    FwEnumStoreType storedSignal;
    ActiveSmInitialComponentBase::deserializeSmIdAndSignal(buffer, storedSmId, storedSignal);

    // Select the target state machine instance
    const SmId smId = static_cast<SmId>(storedSmId);
    switch (smId) {
      case SmId::basic: {
        const Basic::Signal signal = static_cast<Basic::Signal>(storedSignal);
        this->Basic_smDispatch(buffer, this->m_stateMachine_basic, signal);
        break;
      }
      case SmId::junction: {
        const Junction::Signal signal = static_cast<Junction::Signal>(storedSignal);
        this->Junction_smDispatch(buffer, this->m_stateMachine_junction, signal);
        break;
      }
      case SmId::smInitialBasic: {
        const SmInitial_Basic::Signal signal = static_cast<SmInitial_Basic::Signal>(storedSignal);
        this->SmInitial_Basic_smDispatch(buffer, this->m_stateMachine_smInitialBasic, signal);
        break;
      }
      case SmId::smInitialJunction: {
        const SmInitial_Junction::Signal signal = static_cast<SmInitial_Junction::Signal>(storedSignal);
        this->SmInitial_Junction_smDispatch(buffer, this->m_stateMachine_smInitialJunction, signal);
        break;
      }
      default:
        FW_ASSERT(0, static_cast<FwAssertArgType>(smId));
        break;
    }
  }

  void ActiveSmInitialComponentBase ::
    deserializeSmIdAndSignal(
        Fw::SerializeBufferBase& buffer,
        FwEnumStoreType& smId,
        FwEnumStoreType& signal
    )
  {
    // Move deserialization beyond the message type and port number
    Fw::SerializeStatus status =
      buffer.moveDeserToOffset(ComponentIpcSerializableBuffer::DATA_OFFSET);
    FW_ASSERT(status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(status));

    // Deserialize the state machine ID
    status = buffer.deserialize(smId);
    FW_ASSERT(status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(status));

    // Deserialize the signal
    status = buffer.deserialize(signal);
    FW_ASSERT(status == Fw::FW_SERIALIZE_OK, static_cast<FwAssertArgType>(status));
  }

  void ActiveSmInitialComponentBase ::
    Basic_smDispatch(
        Fw::SerializeBufferBase& buffer,
        Basic& sm,
        Basic::Signal signal
    )
  {
    switch (signal) {
      default:
        FW_ASSERT(0, static_cast<FwAssertArgType>(signal));
        break;
    }
  }

  void ActiveSmInitialComponentBase ::
    Junction_smDispatch(
        Fw::SerializeBufferBase& buffer,
        Junction& sm,
        Junction::Signal signal
    )
  {
    switch (signal) {
      default:
        FW_ASSERT(0, static_cast<FwAssertArgType>(signal));
        break;
    }
  }

  void ActiveSmInitialComponentBase ::
    SmInitial_Basic_smDispatch(
        Fw::SerializeBufferBase& buffer,
        SmInitial_Basic& sm,
        SmInitial_Basic::Signal signal
    )
  {
    switch (signal) {
      default:
        FW_ASSERT(0, static_cast<FwAssertArgType>(signal));
        break;
    }
  }

  void ActiveSmInitialComponentBase ::
    SmInitial_Junction_smDispatch(
        Fw::SerializeBufferBase& buffer,
        SmInitial_Junction& sm,
        SmInitial_Junction::Signal signal
    )
  {
    switch (signal) {
      default:
        FW_ASSERT(0, static_cast<FwAssertArgType>(signal));
        break;
    }
  }

}
