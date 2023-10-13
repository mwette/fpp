// ======================================================================
// \title  PassiveSyncContainersOnlyTesterBase.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for PassiveSyncContainersOnly component test harness base class
// ======================================================================

#ifndef PassiveSyncContainersOnlyTesterBase_HPP
#define PassiveSyncContainersOnlyTesterBase_HPP

#include <cstdio>

#include "Fw/Comp/PassiveComponentBase.hpp"
#include "Fw/Dp/test/util/DpContainerHeader.hpp"
#include "Fw/Port/InputSerializePort.hpp"
#include "Fw/Types/Assert.hpp"
#include "test-base/PassiveSyncContainersOnlyComponentAc.hpp"

//! \class PassiveSyncContainersOnlyTesterBase
//! \brief Auto-generated base for PassiveSyncContainersOnly component test harness
class PassiveSyncContainersOnlyTesterBase :
  public Fw::PassiveComponentBase
{

  protected:

    // ----------------------------------------------------------------------
    // History class
    // ----------------------------------------------------------------------

    //! \class History
    //! \brief A history of port inputs
    //!
    template<typename T>
    class History
    {

      public:

        //! Create a History
        History(
           const U32 maxSize //!< The maximum history size
        ) :
          numEntries(0),
          maxSize(maxSize)
        {
          this->entries = new T[maxSize];
        }

        //! Destroy a History
        ~History()
        {
          delete[] this->entries;
        }

        //! Clear the history
        //!
        void clear()
        {
          this->numEntries = 0;
        }

        //! Push an item onto the history
        //!
        void push_back(
            T entry //!< The item
        )
        {
          FW_ASSERT(this->numEntries < this->maxSize);
          entries[this->numEntries++] = entry;
        }

        //! Get an item at an index
        //!
        //! \return The item at index i
        T at(
            const U32 i //!< The index
        ) const
        {
          FW_ASSERT(i < this->numEntries);
          return entries[i];
        }

        //! Get the number of entries in the history
        //!
        //! \return The number of entries in the history
        U32 size() const
        {
          return this->numEntries;
        }

      private:

        //! The number of entries in the history
        U32 numEntries;

        //! The maximum history size
        const U32 maxSize;

        //! The entries
        T* entries;

    };

  protected:

    // ----------------------------------------------------------------------
    // History types
    // ----------------------------------------------------------------------

    //! A type representing a data product request
    struct DpRequest {
      FwDpIdType id;
      FwSizeType size;
    };

    // A type representing a data product send
    struct DpSend {
      FwDpIdType id;
      Fw::Buffer buffer;
    };

  public:

    // ----------------------------------------------------------------------
    // Component initialization
    // ----------------------------------------------------------------------

    //! Initialize object PassiveSyncContainersOnlyTesterBase
    virtual void init(
        NATIVE_INT_TYPE instance = 0 //!< The instance number
    );

  public:

    // ----------------------------------------------------------------------
    // Connectors for to ports
    // ----------------------------------------------------------------------

    //! Connect port to productRecvIn[portNum]
    void connect_to_productRecvIn(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputDpResponsePort* port //!< The input port
    );

  public:

    // ----------------------------------------------------------------------
    // Getters for from ports
    // ----------------------------------------------------------------------

    //! Get from port at index
    //!
    //! \return from_productRequestOut[portNum]
    Fw::InputDpRequestPort* get_from_productRequestOut(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get from port at index
    //!
    //! \return from_productSendOut[portNum]
    Fw::InputDpSendPort* get_from_productSendOut(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get from port at index
    //!
    //! \return from_timeGetOut[portNum]
    Fw::InputTimePort* get_from_timeGetOut(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  protected:

    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct object PassiveSyncContainersOnlyTesterBase
    PassiveSyncContainersOnlyTesterBase(
        const char* const compName, //!< The component name
        const U32 maxHistorySize //!< The maximum size of each history
    );

    //! Destroy object PassiveSyncContainersOnlyTesterBase
    virtual ~PassiveSyncContainersOnlyTesterBase();

  protected:

    // ----------------------------------------------------------------------
    // Getters for port counts
    // ----------------------------------------------------------------------

    //! Get the number of to_productRecvIn ports
    //!
    //! \return The number of to_productRecvIn ports
    NATIVE_INT_TYPE getNum_to_productRecvIn() const;

    //! Get the number of from_productRequestOut ports
    //!
    //! \return The number of from_productRequestOut ports
    NATIVE_INT_TYPE getNum_from_productRequestOut() const;

    //! Get the number of from_productSendOut ports
    //!
    //! \return The number of from_productSendOut ports
    NATIVE_INT_TYPE getNum_from_productSendOut() const;

    //! Get the number of from_timeGetOut ports
    //!
    //! \return The number of from_timeGetOut ports
    NATIVE_INT_TYPE getNum_from_timeGetOut() const;

  protected:

    // ----------------------------------------------------------------------
    // Connection status queries for to ports
    // ----------------------------------------------------------------------

    //! Check whether port to_productRecvIn is connected
    //!
    //! \return Whether port to_productRecvIn is connected
    bool isConnected_to_productRecvIn(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  protected:

    // ----------------------------------------------------------------------
    // Functions to test time
    // ----------------------------------------------------------------------

    //! Set the test time for events and telemetry
    void setTestTime(
        const Fw::Time& timeTag //!< The time
    );

  protected:

    // ----------------------------------------------------------------------
    // Functions for testing data products
    // ----------------------------------------------------------------------

    //! Push an entry on the product request history
    void pushProductRequestEntry(
        FwDpIdType id, //!< The container ID
        FwSizeType size //!< The size of the requested buffer
    );

    //! Handle a data product request from the component under test
    //!
    //! By default, call pushProductRequestEntry. You can override
    //! this behavior.
    virtual void productRequest_handler(
        FwDpIdType id, //!< The container ID
        FwSizeType size //!< The size of the requested buffer
    );

    //! Send a data product response to the component under test
    void sendProductResponse(
        FwDpIdType id, //!< The container ID
        const Fw::Buffer& buffer, //!< The buffer
        const Fw::Success& status //!< The status
    );

    //! Push an entry on the product request history
    void pushProductSendEntry(
        FwDpIdType id, //!< The container ID
        const Fw::Buffer& buffer //!< The buffer
    );

    //! Handle a data product send from the component under test
    //!
    //! By default, call pushProductRequestEntry. You can override
    //! this behavior.
    virtual void productSend_handler(
        FwDpIdType id, //!< The container ID
        const Fw::Buffer& buffer //!< The buffer
    );

  protected:

    // ----------------------------------------------------------------------
    // History functions
    // ----------------------------------------------------------------------

    //! Clear all history
    void clearHistory();

  private:

    // ----------------------------------------------------------------------
    // Static functions for output ports
    // ----------------------------------------------------------------------

    //! Static function for port from_productRequestOut
    static void from_productRequestOut_static(
        Fw::PassiveComponentBase* const callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        FwDpIdType id, //!< The container ID
        FwSizeType size //!< The size of the requested buffer
    );

    //! Static function for port from_productSendOut
    static void from_productSendOut_static(
        Fw::PassiveComponentBase* const callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        FwDpIdType id, //!< The container ID
        const Fw::Buffer& buffer //!< The buffer
    );

    //! Static function for port from_timeGetOut
    static void from_timeGetOut_static(
        Fw::PassiveComponentBase* const callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::Time& time //!< The time tag
    );

  protected:

    // ----------------------------------------------------------------------
    // History member variables
    // ----------------------------------------------------------------------

    //! The data product request history
    History<DpRequest>* productRequestHistory;

    //! The data product send history
    History<DpSend>* productSendHistory;

  private:

    // ----------------------------------------------------------------------
    // To ports
    // ----------------------------------------------------------------------

    //! To port connected to productRecvIn
    Fw::OutputDpResponsePort m_to_productRecvIn[1];

  private:

    // ----------------------------------------------------------------------
    // From ports
    // ----------------------------------------------------------------------

    //! From port connected to productRequestOut
    Fw::InputDpRequestPort m_from_productRequestOut[1];

    //! From port connected to productSendOut
    Fw::InputDpSendPort m_from_productSendOut[1];

    //! From port connected to timeGetOut
    Fw::InputTimePort m_from_timeGetOut[1];

  private:

    // ----------------------------------------------------------------------
    // Time variables
    // ----------------------------------------------------------------------

    //! Test time stamp
    Fw::Time m_testTime;

};

#endif
