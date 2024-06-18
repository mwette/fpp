// ======================================================================
// \title  EnumSerializableAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for Enum struct
// ======================================================================

#include "EnumSerializableAc.hpp"
#include "Fw/Types/Assert.hpp"

// ----------------------------------------------------------------------
// Constructors
// ----------------------------------------------------------------------

Enum ::
  Enum() :
    Serializable(),
    m_e(M::E::X)
{
  for (FwSizeType i = 0; i < 3; i++) {
    this->m_eArr[i] = M::E::X;
  }
}

Enum ::
  Enum(
      M::E::T e,
      const Type_of_eArr& eArr
  ) :
    Serializable(),
    m_e(e)
{
  for (FwSizeType i = 0; i < 3; i++) {
    this->m_eArr[i] = eArr[i];
  }
}

Enum ::
  Enum(const Enum& obj) :
    Serializable(),
    m_e(obj.m_e)
{
  for (FwSizeType i = 0; i < 3; i++) {
    this->m_eArr[i] = obj.m_eArr[i];
  }
}

Enum ::
  Enum(
      M::E::T e,
      M::E::T eArr
  ) :
    Serializable(),
    m_e(e)
{
  for (FwSizeType i = 0; i < 3; i++) {
    this->m_eArr[i] = eArr;
  }
}

// ----------------------------------------------------------------------
// Operators
// ----------------------------------------------------------------------

Enum& Enum ::
  operator=(const Enum& obj)
{
  if (this == &obj) {
    return *this;
  }

  set(obj.m_e, obj.m_eArr);
  return *this;
}

bool Enum ::
  operator==(const Enum& obj) const
{
  // Compare non-array members
  if (!(this->m_e == obj.m_e)) {
    return false;
  }

  // Compare array members
  if (!(this->m_eArr == obj.m_eArr)) {
    for (FwSizeType i = 0; i < 3; i++) {
      if (!(this->m_eArr[i] == obj.m_eArr[i])) {
        return false;
      }
    }
  }

  return true;
}

bool Enum ::
  operator!=(const Enum& obj) const
{
  return !(*this == obj);
}

#ifdef BUILD_UT

std::ostream& operator<<(std::ostream& os, const Enum& obj) {
  Fw::String s;
  obj.toString(s);
  os << s.toChar();
  return os;
}

#endif

// ----------------------------------------------------------------------
// Member functions
// ----------------------------------------------------------------------

Fw::SerializeStatus Enum ::
  serialize(Fw::SerializeBufferBase& buffer) const
{
  Fw::SerializeStatus status;

  status = buffer.serialize(this->m_e);
  if (status != Fw::FW_SERIALIZE_OK) {
    return status;
  }
  for (FwSizeType i = 0; i < 3; i++) {
    status = buffer.serialize(this->m_eArr[i]);
    if (status != Fw::FW_SERIALIZE_OK) {
      return status;
    }
  }

  return status;
}

Fw::SerializeStatus Enum ::
  deserialize(Fw::SerializeBufferBase& buffer)
{
  Fw::SerializeStatus status;

  status = buffer.deserialize(this->m_e);
  if (status != Fw::FW_SERIALIZE_OK) {
    return status;
  }
  for (FwSizeType i = 0; i < 3; i++) {
    status = buffer.deserialize(this->m_eArr[i]);
    if (status != Fw::FW_SERIALIZE_OK) {
      return status;
    }
  }

  return status;
}

#ifdef FW_SERIALIZABLE_TO_STRING

void Enum ::
  toString(Fw::StringBase& sb) const
{
  static const char* formatString =
    "( "
    "e = %s, "
    "eArr = [ %s, "
    "%s, "
    "%s ]"
    " )";

  // Declare strings to hold any serializable toString() arguments
  Fw::String eStr;
  Fw::String eArrStr[3];

  // Call toString for arrays and serializable types
  this->m_e.toString(eStr);
  for (FwSizeType i = 0; i < 3; i++) {
    this->m_eArr[i].toString(eArrStr[i]);
  }

  sb.format(
    formatString,
    eStr.toChar(),
    eArrStr[0].toChar(),
    eArrStr[1].toChar(),
    eArrStr[2].toChar()
  );
}

#endif

// ----------------------------------------------------------------------
// Setter functions
// ----------------------------------------------------------------------

void Enum ::
  set(
      M::E::T e,
      const Type_of_eArr& eArr
  )
{
  this->m_e = e;

  for (FwSizeType i = 0; i < 3; i++) {
    this->m_eArr[i] = eArr[i];
  }
}

void Enum ::
  sete(M::E::T e)
{
  this->m_e = e;
}

void Enum ::
  seteArr(const Type_of_eArr& eArr)
{
  for (FwSizeType i = 0; i < 3; i++) {
    this->m_eArr[i] = eArr[i];
  }
}
