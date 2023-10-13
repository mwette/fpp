// ======================================================================
// \title  PassiveSyncContainersOnlyGTestBase.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for PassiveSyncContainersOnly component Google Test harness base class
// ======================================================================

#ifndef PassiveSyncContainersOnlyGTestBase_HPP
#define PassiveSyncContainersOnlyGTestBase_HPP

#include "gtest/gtest.h"
#include "test-base/PassiveSyncContainersOnlyTesterBase.hpp"

// ----------------------------------------------------------------------
// Macros for product request assertions
// ----------------------------------------------------------------------

#define ASSERT_PRODUCT_REQUEST_SIZE(size) \
  this->assertProductRequest_size(__FILE__, __LINE__, size)

#define ASSERT_PRODUCT_REQUEST(index, id, size) \
  this->assertProductRequest(__FILE__, __LINE__, index, id, size)

// ----------------------------------------------------------------------
// Macros for product send assertions
// ----------------------------------------------------------------------

#define ASSERT_PRODUCT_SEND_SIZE(size) \
  this->assertProductSend_size(__FILE__, __LINE__, size)

#define ASSERT_PRODUCT_SEND(index, id, priority, timeTag, procType, userData, dataSize, buffer) \
    assertProductSend(__FILE__, __LINE__, index, id, priority, timeTag, procType, userData, dataSize, buffer)

//! \class PassiveSyncContainersOnlyGTestBase
//! \brief Auto-generated base for PassiveSyncContainersOnly component Google Test harness
class PassiveSyncContainersOnlyGTestBase :
  public PassiveSyncContainersOnlyTesterBase
{

  protected:

    // ----------------------------------------------------------------------
    // Construction and destruction
    // ----------------------------------------------------------------------

    //! Construct object PassiveSyncContainersOnlyGTestBase
    PassiveSyncContainersOnlyGTestBase(
        const char* const compName, //!< The component name
        const U32 maxHistorySize //!< The maximum size of each history
    );

    //! Destroy object PassiveSyncContainersOnlyGTestBase
    ~PassiveSyncContainersOnlyGTestBase();

  protected:

    // ----------------------------------------------------------------------
    // Data Product Request
    // ----------------------------------------------------------------------

    //! Assert size of product request history
    void assertProductRequest_size(
        const char* const __callSiteFileName, //!< The name of the file containing the call site
        const U32 __callSiteLineNumber, //!< The line number of the call site
        const U32 size //!< The asserted size
    ) const;

    //! Assert the product request history at index
    void assertProductRequest(
        const char* const __callSiteFileName, //!< The name of the file containing the call site
        const U32 __callSiteLineNumber, //!< The line number of the call site
        const U32 __index, //!< The index
        FwDpIdType id, //!< The container ID
        FwSizeType size //!< The size of the requested buffer
    ) const;

  protected:

    // ----------------------------------------------------------------------
    // Data Product Send
    // ----------------------------------------------------------------------

    //! Assert size of product send history
    void assertProductSend_size(
        const char* const __callSiteFileName, //!< The name of the file containing the call site
        const U32 __callSiteLineNumber, //!< The line number of the call site
        const U32 size //!< The asserted size
    ) const;

    //! Assert the product send history at index
    //!
    //! This function sets the output buffer, deserializes and checks the
    //! data product header, and sets the deserialization pointer to the start
    //! of the data payload. User-written code can then check the data payload.
    void assertProductSend(
        const char* const __callSiteFileName, //!< The name of the file containing the call site
        const U32 __callSiteLineNumber, //!< The line number of the call site
        const U32 __index, //!< The index
        FwDpIdType id, //!< The expected container ID (input)
        FwDpPriorityType priority, //!< The expected priority (input)
        const Fw::Time& timeTag, //!< The expected time tag (input)
        Fw::DpCfg::ProcType procType, //!< The expected processing type (input)
        const Fw::DpContainer::Header::UserData& userData, //!< The expected user data (input)
        FwSizeType dataSize, //!< The expected data size (input)
        Fw::Buffer& historyBuffer //!< The buffer from the history (output)
    ) const;

};

#endif
