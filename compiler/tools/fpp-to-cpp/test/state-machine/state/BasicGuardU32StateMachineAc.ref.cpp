// ======================================================================
// \title  BasicGuardU32StateMachineAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for BasicGuardU32 state machine
// ======================================================================

#include "Fw/Types/Assert.hpp"
#include "state-machine/state/BasicGuardU32StateMachineAc.hpp"

namespace FppTest {

  namespace SmState {

    // ----------------------------------------------------------------------
    // Constructors and Destructors
    // ----------------------------------------------------------------------

    BasicGuardU32StateMachineBase ::
      BasicGuardU32StateMachineBase()
    {

    }

    BasicGuardU32StateMachineBase ::
      ~BasicGuardU32StateMachineBase()
    {

    }

    // ----------------------------------------------------------------------
    // Initialization
    // ----------------------------------------------------------------------

    void BasicGuardU32StateMachineBase ::
      initBase(const FwEnumStoreType id)
    {
      this->m_id = id;
      this->enter_S(Signal::__FPRIME_AC_INITIAL_TRANSITION);
    }

    // ----------------------------------------------------------------------
    // Getter functions
    // ----------------------------------------------------------------------

    BasicGuardU32StateMachineBase::State BasicGuardU32StateMachineBase ::
      getState() const
    {
      return this->m_state;
    }

    // ----------------------------------------------------------------------
    // Send signal functions
    // ----------------------------------------------------------------------

    void BasicGuardU32StateMachineBase ::
      sendSignal_s(U32 value)
    {
      switch (this->m_state) {
        case State::S:
          if (this->guard_g(Signal::s, value)) {
            this->action_a(Signal::s, value);
            this->enter_T(Signal::s);
          }
          break;
        case State::T:
          break;
        default:
          FW_ASSERT(0, static_cast<FwAssertArgType>(this->m_state));
          break;
      }
    }

    // ----------------------------------------------------------------------
    // State and junction entry
    // ----------------------------------------------------------------------

    void BasicGuardU32StateMachineBase ::
      enter_T(Signal signal)
    {
      this->m_state = State::T;
    }

    void BasicGuardU32StateMachineBase ::
      enter_S(Signal signal)
    {
      this->m_state = State::S;
    }

  }

}
