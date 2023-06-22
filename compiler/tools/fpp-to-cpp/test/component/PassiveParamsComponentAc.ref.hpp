// ======================================================================
// \title  PassiveParamsComponentAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for PassiveParams component base class
// ======================================================================

#ifndef PassiveParamsComponentAc_HPP
#define PassiveParamsComponentAc_HPP

#include "AArrayAc.hpp"
#include "EEnumAc.hpp"
#include "FpConfig.hpp"
#include "Fw/Cmd/CmdPortAc.hpp"
#include "Fw/Cmd/CmdRegPortAc.hpp"
#include "Fw/Cmd/CmdResponsePortAc.hpp"
#include "Fw/Cmd/CmdString.hpp"
#include "Fw/Comp/ActiveComponentBase.hpp"
#include "Fw/Log/LogPortAc.hpp"
#if FW_ENABLE_TEXT_LOGGING == 1
#include "Fw/Log/LogTextPortAc.hpp"
#endif
#include "Fw/Port/InputSerializePort.hpp"
#include "Fw/Port/OutputSerializePort.hpp"
#include "Fw/Prm/PrmGetPortAc.hpp"
#include "Fw/Prm/PrmSetPortAc.hpp"
#include "Fw/Prm/PrmString.hpp"
#include "Fw/Time/TimePortAc.hpp"
#include "Fw/Tlm/TlmPortAc.hpp"
#include "NoArgsPortAc.hpp"
#include "NoArgsReturnPortAc.hpp"
#include "Os/Mutex.hpp"
#include "SSerializableAc.hpp"
#include "TypedPortAc.hpp"
#include "TypedReturnPortAc.hpp"

//! \class PassiveParamsComponentBase
//! \brief Auto-generated base for PassiveParams component
//!
//! A passive component with params
class PassiveParamsComponentBase :
  public Fw::PassiveComponentBase
{

    // ----------------------------------------------------------------------
    // Friend classes
    // ----------------------------------------------------------------------

    //! Friend class for white-box testing
    friend class PassiveParamsComponentBaseFriend;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Constants
    // ----------------------------------------------------------------------

    //! Enumerations for numbers of special input ports
    enum {
      NUM_CMDIN_INPUT_PORTS = 1,
    };

    //! Enumerations for numbers of typed input ports
    enum {
      NUM_NOARGSGUARDED_INPUT_PORTS = 1,
      NUM_NOARGSRETURNGUARDED_INPUT_PORTS = 1,
      NUM_NOARGSRETURNSYNC_INPUT_PORTS = 3,
      NUM_NOARGSSYNC_INPUT_PORTS = 3,
      NUM_TYPEDGUARDED_INPUT_PORTS = 1,
      NUM_TYPEDRETURNGUARDED_INPUT_PORTS = 1,
      NUM_TYPEDRETURNSYNC_INPUT_PORTS = 3,
      NUM_TYPEDSYNC_INPUT_PORTS = 3,
    };

    //! Enumerations for numbers of special output ports
    enum {
      NUM_CMDREGOUT_OUTPUT_PORTS = 1,
      NUM_CMDRESPONSEOUT_OUTPUT_PORTS = 1,
      NUM_EVENTOUT_OUTPUT_PORTS = 1,
      NUM_PRMGETOUT_OUTPUT_PORTS = 1,
      NUM_PRMSETOUT_OUTPUT_PORTS = 1,
      NUM_TEXTEVENTOUT_OUTPUT_PORTS = 1,
      NUM_TIMEGETOUT_OUTPUT_PORTS = 1,
      NUM_TLMOUT_OUTPUT_PORTS = 1,
    };

    //! Enumerations for numbers of typed output ports
    enum {
      NUM_TYPEDOUT_OUTPUT_PORTS = 1,
      NUM_TYPEDRETURNOUT_OUTPUT_PORTS = 1,
    };

    //! Command opcodes
    enum {
      OPCODE_PARAMU32_SET = 0x0, //!< Opcode to set parameter ParamU32
      OPCODE_PARAMU32_SAVE = 0x1, //!< Opcode to save parameter ParamU32
      OPCODE_PARAMF64_SET = 0x2, //!< Opcode to set parameter ParamF64
      OPCODE_PARAMF64_SAVE = 0x3, //!< Opcode to save parameter ParamF64
      OPCODE_PARAMSTRING_SET = 0x4, //!< Opcode to set parameter ParamString
      OPCODE_PARAMSTRING_SAVE = 0x5, //!< Opcode to save parameter ParamString
      OPCODE_PARAMENUM_SET = 0x6, //!< Opcode to set parameter ParamEnum
      OPCODE_PARAMENUM_SAVE = 0x7, //!< Opcode to save parameter ParamEnum
      OPCODE_PARAMARRAY_SET = 0x8, //!< Opcode to set parameter ParamArray
      OPCODE_PARAMARRAY_SAVE = 0x35, //!< Opcode to save parameter ParamArray
      OPCODE_PARAMSTRUCT_SET = 0x40, //!< Opcode to set parameter ParamStruct
      OPCODE_PARAMSTRUCT_SAVE = 0x45, //!< Opcode to save parameter ParamStruct
    };

    //! Parameter IDs
    enum {
      PARAMID_PARAMU32 = 0x0, //!< A parameter with U32 data
                              //!< Second line of annotation
      PARAMID_PARAMF64 = 0x1, //!< A parameter with F64 data
      PARAMID_PARAMSTRING = 0x2, //!< A parameter with string data and default value
      PARAMID_PARAMENUM = 0x30, //!< A parameter with enum data
      PARAMID_PARAMARRAY = 0x31, //!< A parameter with array data, default value, and save opcode
      PARAMID_PARAMSTRUCT = 0x32, //!< A parameter with struct data and set/save opcodes
    };

  public:

    // ----------------------------------------------------------------------
    // Component initialization
    // ----------------------------------------------------------------------

    //! Initialize PassiveParamsComponentBase object
    void init(
        NATIVE_INT_TYPE instance = 0 //!< The instance number
    );

  public:

    // ----------------------------------------------------------------------
    // Getters for special input ports
    // ----------------------------------------------------------------------

    //! Get special input port at index
    //!
    //! \return cmdIn[portNum]
    Fw::InputCmdPort* get_cmdIn_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  public:

    // ----------------------------------------------------------------------
    // Getters for typed input ports
    // ----------------------------------------------------------------------

    //! Get typed input port at index
    //!
    //! \return noArgsGuarded[portNum]
    InputNoArgsPort* get_noArgsGuarded_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return noArgsReturnGuarded[portNum]
    InputNoArgsReturnPort* get_noArgsReturnGuarded_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return noArgsReturnSync[portNum]
    InputNoArgsReturnPort* get_noArgsReturnSync_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return noArgsSync[portNum]
    InputNoArgsPort* get_noArgsSync_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return typedGuarded[portNum]
    InputTypedPort* get_typedGuarded_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return typedReturnGuarded[portNum]
    InputTypedReturnPort* get_typedReturnGuarded_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return typedReturnSync[portNum]
    InputTypedReturnPort* get_typedReturnSync_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return typedSync[portNum]
    InputTypedPort* get_typedSync_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  public:

    // ----------------------------------------------------------------------
    // Connect input ports to special output ports
    // ----------------------------------------------------------------------

    //! Connect port to cmdRegOut[portNum]
    void set_cmdRegOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputCmdRegPort* port //!< The input port
    );

    //! Connect port to cmdResponseOut[portNum]
    void set_cmdResponseOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputCmdResponsePort* port //!< The input port
    );

    //! Connect port to eventOut[portNum]
    void set_eventOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputLogPort* port //!< The input port
    );

    //! Connect port to prmGetOut[portNum]
    void set_prmGetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputPrmGetPort* port //!< The input port
    );

    //! Connect port to prmSetOut[portNum]
    void set_prmSetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputPrmSetPort* port //!< The input port
    );

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Connect port to textEventOut[portNum]
    void set_textEventOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputLogTextPort* port //!< The input port
    );

#endif

    //! Connect port to timeGetOut[portNum]
    void set_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputTimePort* port //!< The input port
    );

    //! Connect port to tlmOut[portNum]
    void set_tlmOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputTlmPort* port //!< The input port
    );

  public:

    // ----------------------------------------------------------------------
    // Connect typed input ports to typed output ports
    // ----------------------------------------------------------------------

    //! Connect port to typedOut[portNum]
    void set_typedOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputTypedPort* port //!< The input port
    );

    //! Connect port to typedReturnOut[portNum]
    void set_typedReturnOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputTypedReturnPort* port //!< The input port
    );

#if FW_PORT_SERIALIZATION

  public:

    // ----------------------------------------------------------------------
    // Connect serial input ports to special output ports
    // ----------------------------------------------------------------------

    //! Connect port to cmdRegOut[portNum]
    void set_cmdRegOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to cmdResponseOut[portNum]
    void set_cmdResponseOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to eventOut[portNum]
    void set_eventOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to prmSetOut[portNum]
    void set_prmSetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Connect port to textEventOut[portNum]
    void set_textEventOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#endif

    //! Connect port to timeGetOut[portNum]
    void set_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to tlmOut[portNum]
    void set_tlmOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#endif

#if FW_PORT_SERIALIZATION

  public:

    // ----------------------------------------------------------------------
    // Connect serial input ports to typed output ports
    // ----------------------------------------------------------------------

    //! Connect port to typedOut[portNum]
    void set_typedOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#endif

  public:

    // ----------------------------------------------------------------------
    // Command registration
    // ----------------------------------------------------------------------

    //! \brief Register commands with the Command Dispatcher
    //!
    //! Connect the dispatcher first
    void regCommands();

  public:

    // ----------------------------------------------------------------------
    // Parameter loading
    // ----------------------------------------------------------------------

    //! \brief Load the parameters from a parameter source
    //!
    //! Connect the parameter first
    void loadParameters();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct PassiveParamsComponentBase object
    PassiveParamsComponentBase(
        const char* compName = "" //!< The component name
    );

    //! Destroy PassiveParamsComponentBase object
    virtual ~PassiveParamsComponentBase();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of special input ports
    // ----------------------------------------------------------------------

    //! Get the number of cmdIn input ports
    //!
    //! \return The number of cmdIn input ports
    NATIVE_INT_TYPE getNum_cmdIn_InputPorts();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of typed input ports
    // ----------------------------------------------------------------------

    //! Get the number of noArgsGuarded input ports
    //!
    //! \return The number of noArgsGuarded input ports
    NATIVE_INT_TYPE getNum_noArgsGuarded_InputPorts();

    //! Get the number of noArgsReturnGuarded input ports
    //!
    //! \return The number of noArgsReturnGuarded input ports
    NATIVE_INT_TYPE getNum_noArgsReturnGuarded_InputPorts();

    //! Get the number of noArgsReturnSync input ports
    //!
    //! \return The number of noArgsReturnSync input ports
    NATIVE_INT_TYPE getNum_noArgsReturnSync_InputPorts();

    //! Get the number of noArgsSync input ports
    //!
    //! \return The number of noArgsSync input ports
    NATIVE_INT_TYPE getNum_noArgsSync_InputPorts();

    //! Get the number of typedGuarded input ports
    //!
    //! \return The number of typedGuarded input ports
    NATIVE_INT_TYPE getNum_typedGuarded_InputPorts();

    //! Get the number of typedReturnGuarded input ports
    //!
    //! \return The number of typedReturnGuarded input ports
    NATIVE_INT_TYPE getNum_typedReturnGuarded_InputPorts();

    //! Get the number of typedReturnSync input ports
    //!
    //! \return The number of typedReturnSync input ports
    NATIVE_INT_TYPE getNum_typedReturnSync_InputPorts();

    //! Get the number of typedSync input ports
    //!
    //! \return The number of typedSync input ports
    NATIVE_INT_TYPE getNum_typedSync_InputPorts();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of special output ports
    // ----------------------------------------------------------------------

    //! Get the number of cmdRegOut output ports
    //!
    //! \return The number of cmdRegOut output ports
    NATIVE_INT_TYPE getNum_cmdRegOut_OutputPorts();

    //! Get the number of cmdResponseOut output ports
    //!
    //! \return The number of cmdResponseOut output ports
    NATIVE_INT_TYPE getNum_cmdResponseOut_OutputPorts();

    //! Get the number of eventOut output ports
    //!
    //! \return The number of eventOut output ports
    NATIVE_INT_TYPE getNum_eventOut_OutputPorts();

    //! Get the number of prmGetOut output ports
    //!
    //! \return The number of prmGetOut output ports
    NATIVE_INT_TYPE getNum_prmGetOut_OutputPorts();

    //! Get the number of prmSetOut output ports
    //!
    //! \return The number of prmSetOut output ports
    NATIVE_INT_TYPE getNum_prmSetOut_OutputPorts();

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Get the number of textEventOut output ports
    //!
    //! \return The number of textEventOut output ports
    NATIVE_INT_TYPE getNum_textEventOut_OutputPorts();

#endif

    //! Get the number of timeGetOut output ports
    //!
    //! \return The number of timeGetOut output ports
    NATIVE_INT_TYPE getNum_timeGetOut_OutputPorts();

    //! Get the number of tlmOut output ports
    //!
    //! \return The number of tlmOut output ports
    NATIVE_INT_TYPE getNum_tlmOut_OutputPorts();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of typed output ports
    // ----------------------------------------------------------------------

    //! Get the number of typedOut output ports
    //!
    //! \return The number of typedOut output ports
    NATIVE_INT_TYPE getNum_typedOut_OutputPorts();

    //! Get the number of typedReturnOut output ports
    //!
    //! \return The number of typedReturnOut output ports
    NATIVE_INT_TYPE getNum_typedReturnOut_OutputPorts();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Connection status queries for special output ports
    // ----------------------------------------------------------------------

    //! Check whether port cmdRegOut is connected
    //!
    //! \return Whether port cmdRegOut is connected
    bool isConnected_cmdRegOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port cmdResponseOut is connected
    //!
    //! \return Whether port cmdResponseOut is connected
    bool isConnected_cmdResponseOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port eventOut is connected
    //!
    //! \return Whether port eventOut is connected
    bool isConnected_eventOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port prmGetOut is connected
    //!
    //! \return Whether port prmGetOut is connected
    bool isConnected_prmGetOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port prmSetOut is connected
    //!
    //! \return Whether port prmSetOut is connected
    bool isConnected_prmSetOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Check whether port textEventOut is connected
    //!
    //! \return Whether port textEventOut is connected
    bool isConnected_textEventOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

#endif

    //! Check whether port timeGetOut is connected
    //!
    //! \return Whether port timeGetOut is connected
    bool isConnected_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port tlmOut is connected
    //!
    //! \return Whether port tlmOut is connected
    bool isConnected_tlmOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Connection status queries for typed output ports
    // ----------------------------------------------------------------------

    //! Check whether port typedOut is connected
    //!
    //! \return Whether port typedOut is connected
    bool isConnected_typedOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port typedReturnOut is connected
    //!
    //! \return Whether port typedReturnOut is connected
    bool isConnected_typedReturnOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Handlers to implement for typed input ports
    // ----------------------------------------------------------------------

    //! Handler for input port noArgsGuarded
    virtual void noArgsGuarded_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) = 0;

    //! Handler for input port noArgsReturnGuarded
    virtual U32 noArgsReturnGuarded_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) = 0;

    //! Handler for input port noArgsReturnSync
    virtual U32 noArgsReturnSync_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) = 0;

    //! Handler for input port noArgsSync
    virtual void noArgsSync_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) = 0;

    //! Handler for input port typedGuarded
    virtual void typedGuarded_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

    //! Handler for input port typedReturnGuarded
    virtual F32 typedReturnGuarded_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

    //! Handler for input port typedReturnSync
    virtual F32 typedReturnSync_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

    //! Handler for input port typedSync
    virtual void typedSync_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Port handler base-class functions for typed input ports
    //
    // Call these functions directly to bypass the corresponding ports
    // ----------------------------------------------------------------------

    //! Handler base-class function for input port noArgsGuarded
    void noArgsGuarded_handlerBase(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Handler base-class function for input port noArgsReturnGuarded
    U32 noArgsReturnGuarded_handlerBase(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Handler base-class function for input port noArgsReturnSync
    U32 noArgsReturnSync_handlerBase(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Handler base-class function for input port noArgsSync
    void noArgsSync_handlerBase(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Handler base-class function for input port typedGuarded
    void typedGuarded_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Handler base-class function for input port typedReturnGuarded
    F32 typedReturnGuarded_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Handler base-class function for input port typedReturnSync
    F32 typedReturnSync_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Handler base-class function for input port typedSync
    void typedSync_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Invocation functions for typed output ports
    // ----------------------------------------------------------------------

    //! Invoke output port typedOut
    void typedOut_out(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Invoke output port typedReturnOut
    F32 typedReturnOut_out(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Command response
    // ----------------------------------------------------------------------

    //! Emit command response
    void cmdResponse_out(
        FwOpcodeType opCode, //!< The opcode
        U32 cmdSeq, //!< The command sequence number
        Fw::CmdResponse response //!< The command response
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Parameter update hook
    // ----------------------------------------------------------------------

    //! \brief Called whenever a parameter is updated
    //!
    //! This function does nothing by default. You may override it.
    virtual void parameterUpdated(
        FwPrmIdType id //!< The parameter ID
    );

    // ----------------------------------------------------------------------
    // Parameter load hook
    // ----------------------------------------------------------------------

    //! \brief Called whenever parameters are loaded
    //!
    //! This function does nothing by default. You may override it.
    virtual void parametersLoaded();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Parameter get functions
    // ----------------------------------------------------------------------

    //! Get parameter ParamU32
    //!
    //! \return The parameter value
    //!
    //! A parameter with U32 data
    //! Second line of annotation
    U32 paramGet_ParamU32(
        Fw::ParamValid& valid //!< Whether the parameter is valid
    );

    //! Get parameter ParamF64
    //!
    //! \return The parameter value
    //!
    //! A parameter with F64 data
    F64 paramGet_ParamF64(
        Fw::ParamValid& valid //!< Whether the parameter is valid
    );

    //! Get parameter ParamString
    //!
    //! \return The parameter value
    //!
    //! A parameter with string data and default value
    Fw::ParamString paramGet_ParamString(
        Fw::ParamValid& valid //!< Whether the parameter is valid
    );

    //! Get parameter ParamEnum
    //!
    //! \return The parameter value
    //!
    //! A parameter with enum data
    E paramGet_ParamEnum(
        Fw::ParamValid& valid //!< Whether the parameter is valid
    );

    //! Get parameter ParamArray
    //!
    //! \return The parameter value
    //!
    //! A parameter with array data, default value, and save opcode
    A paramGet_ParamArray(
        Fw::ParamValid& valid //!< Whether the parameter is valid
    );

    //! Get parameter ParamStruct
    //!
    //! \return The parameter value
    //!
    //! A parameter with struct data and set/save opcodes
    S paramGet_ParamStruct(
        Fw::ParamValid& valid //!< Whether the parameter is valid
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Time
    // ----------------------------------------------------------------------

    //!  Get the time
    //!
    //! \\return The current time
    Fw::Time getTime();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Mutex operations for guarded ports
    //
    // You can override these operations to provide more sophisticated
    // synchronization
    // ----------------------------------------------------------------------

    //! Lock the guarded mutex
    virtual void lock();

    //! Unlock the guarded mutex
    virtual void unLock();

  PRIVATE:

    // ----------------------------------------------------------------------
    // Calls for messages received on special input ports
    // ----------------------------------------------------------------------

    //! Callback for port cmdIn
    static void m_p_cmdIn_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        FwOpcodeType opCode, //!< Command Op Code
        U32 cmdSeq, //!< Command Sequence
        Fw::CmdArgBuffer& args //!< Buffer containing arguments
    );

  PRIVATE:

    // ----------------------------------------------------------------------
    // Calls for messages received on typed input ports
    // ----------------------------------------------------------------------

    //! Callback for port noArgsGuarded
    static void m_p_noArgsGuarded_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Callback for port noArgsReturnGuarded
    static U32 m_p_noArgsReturnGuarded_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Callback for port noArgsReturnSync
    static U32 m_p_noArgsReturnSync_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Callback for port noArgsSync
    static void m_p_noArgsSync_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Callback for port typedGuarded
    static void m_p_typedGuarded_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Callback for port typedReturnGuarded
    static F32 m_p_typedReturnGuarded_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Callback for port typedReturnSync
    static F32 m_p_typedReturnSync_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Callback for port typedSync
    static void m_p_typedSync_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

  PRIVATE:

    // ----------------------------------------------------------------------
    // Parameter set functions
    // ----------------------------------------------------------------------

    //! Set parameter ParamU32
    //!
    //! \return The command response
    Fw::CmdResponse paramSet_ParamU32(
        Fw::SerializeBufferBase& val //!< The serialization buffer
    );

    //! Set parameter ParamF64
    //!
    //! \return The command response
    Fw::CmdResponse paramSet_ParamF64(
        Fw::SerializeBufferBase& val //!< The serialization buffer
    );

    //! Set parameter ParamString
    //!
    //! \return The command response
    Fw::CmdResponse paramSet_ParamString(
        Fw::SerializeBufferBase& val //!< The serialization buffer
    );

    //! Set parameter ParamEnum
    //!
    //! \return The command response
    Fw::CmdResponse paramSet_ParamEnum(
        Fw::SerializeBufferBase& val //!< The serialization buffer
    );

    //! Set parameter ParamArray
    //!
    //! \return The command response
    Fw::CmdResponse paramSet_ParamArray(
        Fw::SerializeBufferBase& val //!< The serialization buffer
    );

    //! Set parameter ParamStruct
    //!
    //! \return The command response
    Fw::CmdResponse paramSet_ParamStruct(
        Fw::SerializeBufferBase& val //!< The serialization buffer
    );

  PRIVATE:

    // ----------------------------------------------------------------------
    // Parameter save functions
    // ----------------------------------------------------------------------

    //! Save parameter ParamU32
    //!
    //! \return The command response
    Fw::CmdResponse paramSave_ParamU32();

    //! Save parameter ParamF64
    //!
    //! \return The command response
    Fw::CmdResponse paramSave_ParamF64();

    //! Save parameter ParamString
    //!
    //! \return The command response
    Fw::CmdResponse paramSave_ParamString();

    //! Save parameter ParamEnum
    //!
    //! \return The command response
    Fw::CmdResponse paramSave_ParamEnum();

    //! Save parameter ParamArray
    //!
    //! \return The command response
    Fw::CmdResponse paramSave_ParamArray();

    //! Save parameter ParamStruct
    //!
    //! \return The command response
    Fw::CmdResponse paramSave_ParamStruct();

  PRIVATE:

    // ----------------------------------------------------------------------
    // Special input ports
    // ----------------------------------------------------------------------

    //! Input port cmdIn
    Fw::InputCmdPort m_cmdIn_InputPort[NUM_CMDIN_INPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Typed input ports
    // ----------------------------------------------------------------------

    //! Input port noArgsGuarded
    InputNoArgsPort m_noArgsGuarded_InputPort[NUM_NOARGSGUARDED_INPUT_PORTS];

    //! Input port noArgsReturnGuarded
    InputNoArgsReturnPort m_noArgsReturnGuarded_InputPort[NUM_NOARGSRETURNGUARDED_INPUT_PORTS];

    //! Input port noArgsReturnSync
    InputNoArgsReturnPort m_noArgsReturnSync_InputPort[NUM_NOARGSRETURNSYNC_INPUT_PORTS];

    //! Input port noArgsSync
    InputNoArgsPort m_noArgsSync_InputPort[NUM_NOARGSSYNC_INPUT_PORTS];

    //! Input port typedGuarded
    InputTypedPort m_typedGuarded_InputPort[NUM_TYPEDGUARDED_INPUT_PORTS];

    //! Input port typedReturnGuarded
    InputTypedReturnPort m_typedReturnGuarded_InputPort[NUM_TYPEDRETURNGUARDED_INPUT_PORTS];

    //! Input port typedReturnSync
    InputTypedReturnPort m_typedReturnSync_InputPort[NUM_TYPEDRETURNSYNC_INPUT_PORTS];

    //! Input port typedSync
    InputTypedPort m_typedSync_InputPort[NUM_TYPEDSYNC_INPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Special output ports
    // ----------------------------------------------------------------------

    //! Output port cmdRegOut
    Fw::OutputCmdRegPort m_cmdRegOut_OutputPort[NUM_CMDREGOUT_OUTPUT_PORTS];

    //! Output port cmdResponseOut
    Fw::OutputCmdResponsePort m_cmdResponseOut_OutputPort[NUM_CMDRESPONSEOUT_OUTPUT_PORTS];

    //! Output port eventOut
    Fw::OutputLogPort m_eventOut_OutputPort[NUM_EVENTOUT_OUTPUT_PORTS];

    //! Output port prmGetOut
    Fw::OutputPrmGetPort m_prmGetOut_OutputPort[NUM_PRMGETOUT_OUTPUT_PORTS];

    //! Output port prmSetOut
    Fw::OutputPrmSetPort m_prmSetOut_OutputPort[NUM_PRMSETOUT_OUTPUT_PORTS];

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Output port textEventOut
    Fw::OutputLogTextPort m_textEventOut_OutputPort[NUM_TEXTEVENTOUT_OUTPUT_PORTS];

#endif

    //! Output port timeGetOut
    Fw::OutputTimePort m_timeGetOut_OutputPort[NUM_TIMEGETOUT_OUTPUT_PORTS];

    //! Output port tlmOut
    Fw::OutputTlmPort m_tlmOut_OutputPort[NUM_TLMOUT_OUTPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Typed output ports
    // ----------------------------------------------------------------------

    //! Output port typedOut
    OutputTypedPort m_typedOut_OutputPort[NUM_TYPEDOUT_OUTPUT_PORTS];

    //! Output port typedReturnOut
    OutputTypedReturnPort m_typedReturnOut_OutputPort[NUM_TYPEDRETURNOUT_OUTPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Parameter validity flags
    // ----------------------------------------------------------------------

    //! True if ParamU32 was successfully received
    Fw::ParamValid m_param_ParamU32_valid;

    //! True if ParamF64 was successfully received
    Fw::ParamValid m_param_ParamF64_valid;

    //! True if ParamString was successfully received
    Fw::ParamValid m_param_ParamString_valid;

    //! True if ParamEnum was successfully received
    Fw::ParamValid m_param_ParamEnum_valid;

    //! True if ParamArray was successfully received
    Fw::ParamValid m_param_ParamArray_valid;

    //! True if ParamStruct was successfully received
    Fw::ParamValid m_param_ParamStruct_valid;

  PRIVATE:

    // ----------------------------------------------------------------------
    // Parameter variables
    // ----------------------------------------------------------------------

    //! Parameter ParamU32
    //!
    //! A parameter with U32 data
    //! Second line of annotation
    U32 m_ParamU32;

    //! Parameter ParamF64
    //!
    //! A parameter with F64 data
    F64 m_ParamF64;

    //! Parameter ParamString
    //!
    //! A parameter with string data and default value
    Fw::ParamString m_ParamString;

    //! Parameter ParamEnum
    //!
    //! A parameter with enum data
    E m_ParamEnum;

    //! Parameter ParamArray
    //!
    //! A parameter with array data, default value, and save opcode
    A m_ParamArray;

    //! Parameter ParamStruct
    //!
    //! A parameter with struct data and set/save opcodes
    S m_ParamStruct;

  PRIVATE:

    // ----------------------------------------------------------------------
    // Mutexes
    // ----------------------------------------------------------------------

    //! Mutex for guarded ports
    Os::Mutex m_guardedPortMutex;

    //! Mutex for locking parameters during sets and saves
    Os::Mutex m_paramLock;

};

#endif
