// ======================================================================
// \title  DpTestDpComponentAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for Data product base class for DpTest component
// ======================================================================

#include "Fw/Types/Assert.hpp"
#include "DpTestDpComponentAc.hpp"

namespace FppTest {

  // ----------------------------------------------------------------------
  // Types
  // ----------------------------------------------------------------------

  DpTestDpComponentBase::DpContainer ::
    DpContainer(
        FwDpIdType id,
        const Fw::Buffer& buffer,
        FwDpIdType baseId
    ) :
      Fw::DpContainer(id, buffer),
      baseId(baseId)
  {

  }

  Fw::SerializeStatus DpTestDpComponentBase::DpContainer ::
    serializeRecord_DataRecord(const FppTest::DpTest_Data& elt)
  {
    Fw::SerializeBufferBase& serializeRepr = buffer.getSerializeRepr();
    const FwDpIdType id = this->baseId + RecordId::DataRecord;
    Fw::SerializeStatus status = serializeRepr.serialize(id);
    if (status == Fw::FW_SERIALIZE_OK) {
      status = serializeRepr.serialize(elt);
    }
    if (status == Fw::FW_SERIALIZE_OK) {
      this->dataSize += sizeof(FwDpIdType);
      this->dataSize += FppTest::DpTest_Data::SERIALIZED_SIZE;
    }
    return status;
  }

  Fw::SerializeStatus DpTestDpComponentBase::DpContainer ::
    serializeRecord_U32Record(U32 elt)
  {
    Fw::SerializeBufferBase& serializeRepr = buffer.getSerializeRepr();
    const FwDpIdType id = this->baseId + RecordId::U32Record;
    Fw::SerializeStatus status = serializeRepr.serialize(id);
    if (status == Fw::FW_SERIALIZE_OK) {
      status = serializeRepr.serialize(elt);
    }
    if (status == Fw::FW_SERIALIZE_OK) {
      this->dataSize += sizeof(FwDpIdType);
      this->dataSize += sizeof(U32);
    }
    return status;
  }

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  DpTestDpComponentBase ::
    DpTestDpComponentBase(const char* compName) :
      DpTestComponentBase(compName)
  {

  }

  DpTestDpComponentBase ::
    ~DpTestDpComponentBase()
  {

  }

  // ----------------------------------------------------------------------
  // Functions for managing data products
  // ----------------------------------------------------------------------

  void DpTestDpComponentBase ::
    Dp_Request(
        ContainerId::T containerId,
        FwSizeType size
    )
  {
    const FwDpIdType globalId = this->getIdBase() + containerId;
    this->productRequestOut_out(0, globalId, size);
  }

  void DpTestDpComponentBase ::
    Dp_Send(DpContainer& container)
  {
    // Update the time tag
    const Fw::Time timeTag = this->getTime();
    container.setTimeTag(timeTag);
    // Serialize the header into the packet
    Fw::SerializeStatus status = container.serializeHeader();
    FW_ASSERT(status == Fw::FW_SERIALIZE_OK, status);
    // Update the size of the buffer according to the data size
    const FwSizeType packetSize = container.getPacketSize();
    Fw::Buffer buffer = container.getBuffer();
    FW_ASSERT(packetSize <= buffer.getSize(), packetSize, buffer.getSize());
    buffer.setSize(packetSize);
    // Send the buffer
    this->productSendOut_out(0, container.getId(), buffer);
  }

  // ----------------------------------------------------------------------
  // Private data product handling functions
  // ----------------------------------------------------------------------

  void DpTestDpComponentBase ::
    productRecvIn_handler(
        const NATIVE_INT_TYPE portNum,
        FwDpIdType id,
        const Fw::Buffer& buffer,
        const Fw::Success& status
    )
  {
    DpContainer container(id, buffer, this->getIdBase());
    // Convert global id to local id
    const auto idBase = this->getIdBase();
    FW_ASSERT(id >= idBase, id, idBase);
    const auto localId = id - idBase;
    // Switch on the local id
    switch (localId) {
      case ContainerId::Container1:
        // Set the priority
        container.setPriority(ContainerPriority::Container1);
        // Call the handler
        this->Dp_Recv_Container1_handler(container, status.e);
        break;
      case ContainerId::Container2:
        // Set the priority
        container.setPriority(ContainerPriority::Container2);
        // Call the handler
        this->Dp_Recv_Container2_handler(container, status.e);
        break;
      default:
        FW_ASSERT(0);
        break;
    }
  }

}
