// ======================================================================
// \title  ActiveGuardedProducts.template.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for ActiveGuardedProducts component implementation class
// ======================================================================

#ifndef ActiveGuardedProducts_HPP
#define ActiveGuardedProducts_HPP

#include "ActiveGuardedProductsComponentAc.hpp"

class ActiveGuardedProducts :
  public ActiveGuardedProductsComponentBase
{

  public:

    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct ActiveGuardedProducts object
    ActiveGuardedProducts(
        const char* const compName //!< The component name
    );

    //! Destroy ActiveGuardedProducts object
    ~ActiveGuardedProducts();

  PRIVATE:

    // ----------------------------------------------------------------------
    // Handler implementations for user-defined typed input ports
    // ----------------------------------------------------------------------

    //! Handler implementation for noArgsAsync
    //!
    //! A typed async input port
    void noArgsAsync_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) override;

    //! Handler implementation for noArgsGuarded
    //!
    //! A typed guarded input
    void noArgsGuarded_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) override;

    //! Handler implementation for noArgsReturnGuarded
    //!
    //! A typed guarded input
    U32 noArgsReturnGuarded_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) override;

    //! Handler implementation for noArgsReturnSync
    //!
    //! A typed sync input port
    U32 noArgsReturnSync_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) override;

    //! Handler implementation for noArgsSync
    //!
    //! A typed sync input port
    void noArgsSync_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) override;

    //! Handler implementation for typedAsync
    //!
    //! A typed async input port
    void typedAsync_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) override;

    //! Handler implementation for typedAsyncAssert
    //!
    //! A typed async input port with queue full behavior and priority
    void typedAsyncAssert_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) override;

    //! Handler implementation for typedAsyncBlockPriority
    //!
    //! A typed async input port with queue full behavior and priority
    void typedAsyncBlockPriority_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) override;

    //! Handler implementation for typedAsyncDropPriority
    //!
    //! A typed async input port with queue full behavior and priority
    void typedAsyncDropPriority_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) override;

    //! Handler implementation for typedGuarded
    //!
    //! A typed guarded input
    void typedGuarded_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) override;

    //! Handler implementation for typedReturnGuarded
    //!
    //! A typed guarded input with a return type
    F32 typedReturnGuarded_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) override;

    //! Handler implementation for typedReturnSync
    //!
    //! A typed sync input port with a return type
    F32 typedReturnSync_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) override;

    //! Handler implementation for typedSync
    //!
    //! A typed sync input port
    void typedSync_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const Ports::TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) override;

  PRIVATE:

    // ----------------------------------------------------------------------
    // Handler implementations for data products
    // ----------------------------------------------------------------------

    //! Receive a container of type Container1
    void Dp_Recv_Container1_handler(
        DpContainer& container, //!< The container
        Fw::Success::T status //!< The container status
    ) override;

    //! Receive a container of type Container2
    void Dp_Recv_Container2_handler(
        DpContainer& container, //!< The container
        Fw::Success::T status //!< The container status
    ) override;

    //! Receive a container of type Container3
    void Dp_Recv_Container3_handler(
        DpContainer& container, //!< The container
        Fw::Success::T status //!< The container status
    ) override;

};

#endif
