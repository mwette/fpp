// ======================================================================
// \title  E2EnumAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for E2 enum
// ======================================================================

#include <cstring>
#include <limits>

#include "Fw/Types/Assert.hpp"
#include "E2EnumAc.hpp"

// ----------------------------------------------------------------------
// Operators
// ----------------------------------------------------------------------

E2& E2 ::
  operator=(const E2& obj)
{
  this->e = obj.e;
  return *this;
}

E2& E2 ::
  operator=(T e1)
{
  this->e = e1;
  return *this;
}

#ifdef BUILD_UT

std::ostream& operator<<(std::ostream& os, const E2& obj) {
  Fw::String s;
  obj.toString(s);
  os << s;
  return os;
}

#endif

// ----------------------------------------------------------------------
// Member functions
// ----------------------------------------------------------------------

bool E2 ::
  isValid() const
{
  return ((e >= A) && (e <= A))
    || ((e >= B) && (e <= B))
    || ((e >= C) && (e <= C))
    || ((e >= D) && (e <= D));
}

Fw::SerializeStatus E2 ::
  serialize(Fw::SerializeBufferBase& buffer) const
{
  const Fw::SerializeStatus status = buffer.serialize(
      static_cast<SerialType>(this->e)
  );
  return status;
}

Fw::SerializeStatus E2 ::
  deserialize(Fw::SerializeBufferBase& buffer)
{
  SerialType es;
  Fw::SerializeStatus status = buffer.deserialize(es);
  if (status == Fw::FW_SERIALIZE_OK) {
    this->e = static_cast<T>(es);
    if (!this->isValid()) {
      status = Fw::FW_DESERIALIZE_FORMAT_ERROR;
    }
  }
  return status;
}

#ifdef FW_SERIALIZABLE_TO_STRING

void E2 ::
  toString(Fw::StringBase& sb) const
{
  Fw::String s;
  switch (e) {
    case A:
      s = "A";
      break;
    case B:
      s = "B";
      break;
    case C:
      s = "C";
      break;
    case D:
      s = "D";
      break;
    default:
      s = "[invalid]";
      break;
  }
  sb.format("%s (%" PRIi32 ")", s.toChar(), e);
}

#elif FW_ENABLE_TEXT_LOGGING

void E2 ::
  toString(Fw::StringBase& sb) const
{
  sb.format("%" PRIi32 "", e);
}

#endif
