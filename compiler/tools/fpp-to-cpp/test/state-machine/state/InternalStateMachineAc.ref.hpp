// ======================================================================
// \title  InternalStateMachineAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for Internal state machine
// ======================================================================

#ifndef FppTest_SmState_InternalStateMachineAc_HPP
#define FppTest_SmState_InternalStateMachineAc_HPP

#include <FpConfig.hpp>

#include "Fw/Types/ExternalString.hpp"
#include "Fw/Types/Serializable.hpp"
#include "Fw/Types/String.hpp"

namespace FppTest {

  namespace SmState {

    //! A hierarchical state machine with an internal transition
    class InternalStateMachineBase {

      PROTECTED:

        // ----------------------------------------------------------------------
        // Types
        // ----------------------------------------------------------------------

        //! The state type
        enum class State : FwEnumStoreType {
          //! The uninitialized state
          __FPRIME_AC_UNINITIALIZED,
          //! State S2
          S1_S2,
          //! State S3
          S1_S3,
        };

        //! The signal type
        enum class Signal : FwEnumStoreType {
          //! The initial transition
          __FPRIME_AC_INITIAL_TRANSITION,
          //! Signal for internal transition in S1
          S1_internal,
          //! Signal for transition from S2 to S3
          S2_to_S3,
        };

      PROTECTED:

        // ----------------------------------------------------------------------
        // Constructors and Destructors
        // ----------------------------------------------------------------------

        //! Constructor
        InternalStateMachineBase();

        //! Destructor
        virtual ~InternalStateMachineBase();

      public:

        // ----------------------------------------------------------------------
        // Initialization
        // ----------------------------------------------------------------------

        //! Initialize the state machine
        void init(
            const FwEnumStoreType id //!< The state machine ID
        );

      public:

        // ----------------------------------------------------------------------
        // Send signal functions
        // ----------------------------------------------------------------------

        //! Signal for internal transition in S1
        void sendSignal_S1_internal();

        //! Signal for transition from S2 to S3
        void sendSignal_S2_to_S3();

      PROTECTED:

        // ----------------------------------------------------------------------
        // Actions
        // ----------------------------------------------------------------------

        //! Action a
        virtual void action_a(
            Signal signal //!< The signal
        ) = 0;

      PRIVATE:

        // ----------------------------------------------------------------------
        // State and junction entry
        // ----------------------------------------------------------------------

        //! Enter state S1
        void enter_S1(
            Signal signal //!< The signal
        );

        //! Enter state S1_S2
        void enter_S1_S2(
            Signal signal //!< The signal
        );

        //! Enter state S1_S3
        void enter_S1_S3(
            Signal signal //!< The signal
        );

      PROTECTED:

        // ----------------------------------------------------------------------
        // Member variables
        // ----------------------------------------------------------------------

        //! The state machine ID
        FwEnumStoreType m_id = 0;

        //! The state
        State m_state = State::__FPRIME_AC_UNINITIALIZED;

    };

  }

}

#endif
