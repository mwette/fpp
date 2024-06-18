// ======================================================================
// \title  StringSerializableAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for String struct
// ======================================================================

#include "Fw/Types/Assert.hpp"
#include "StringSerializableAc.hpp"

// ----------------------------------------------------------------------
// Constructors
// ----------------------------------------------------------------------

String ::
  String() :
    Serializable(),
    m_s1(m___fprime_ac_s1_buffer, sizeof m___fprime_ac_s1_buffer, Fw::String("hello")),
    m_s2(m___fprime_ac_s2_buffer, sizeof m___fprime_ac_s2_buffer, Fw::String(""))
{

}

String ::
  String(
      const Fw::StringBase& s1,
      const Fw::StringBase& s2
  ) :
    Serializable(),
    m_s1(m___fprime_ac_s1_buffer, sizeof m___fprime_ac_s1_buffer, s1),
    m_s2(m___fprime_ac_s2_buffer, sizeof m___fprime_ac_s2_buffer, s2)
{

}

String ::
  String(const String& obj) :
    Serializable(),
    m_s1(m___fprime_ac_s1_buffer, sizeof m___fprime_ac_s1_buffer, obj.m_s1),
    m_s2(m___fprime_ac_s2_buffer, sizeof m___fprime_ac_s2_buffer, obj.m_s2)
{

}

// ----------------------------------------------------------------------
// Operators
// ----------------------------------------------------------------------

String& String ::
  operator=(const String& obj)
{
  if (this == &obj) {
    return *this;
  }

  set(obj.m_s1, obj.m_s2);
  return *this;
}

bool String ::
  operator==(const String& obj) const
{
  return (
    (this->m_s1 == obj.m_s1) &&
    (this->m_s2 == obj.m_s2)
  );
}

bool String ::
  operator!=(const String& obj) const
{
  return !(*this == obj);
}

#ifdef BUILD_UT

std::ostream& operator<<(std::ostream& os, const String& obj) {
  Fw::String s;
  obj.toString(s);
  os << s.toChar();
  return os;
}

#endif

// ----------------------------------------------------------------------
// Member functions
// ----------------------------------------------------------------------

Fw::SerializeStatus String ::
  serialize(Fw::SerializeBufferBase& buffer) const
{
  Fw::SerializeStatus status;

  status = buffer.serialize(this->m_s1);
  if (status != Fw::FW_SERIALIZE_OK) {
    return status;
  }
  status = buffer.serialize(this->m_s2);
  if (status != Fw::FW_SERIALIZE_OK) {
    return status;
  }

  return status;
}

Fw::SerializeStatus String ::
  deserialize(Fw::SerializeBufferBase& buffer)
{
  Fw::SerializeStatus status;

  status = buffer.deserialize(this->m_s1);
  if (status != Fw::FW_SERIALIZE_OK) {
    return status;
  }
  status = buffer.deserialize(this->m_s2);
  if (status != Fw::FW_SERIALIZE_OK) {
    return status;
  }

  return status;
}

#ifdef FW_SERIALIZABLE_TO_STRING

void String ::
  toString(Fw::StringBase& sb) const
{
  static const char* formatString =
    "( "
    "s1 = %s, "
    "s2 = %s"
    " )";

  sb.format(
    formatString,
    this->m_s1.toChar(),
    this->m_s2.toChar()
  );
}

#endif

// ----------------------------------------------------------------------
// Setter functions
// ----------------------------------------------------------------------

void String ::
  set(
      const Fw::StringBase& s1,
      const Fw::StringBase& s2
  )
{
  this->m_s1 = s1;
  this->m_s2 = s2;
}

void String ::
  sets1(const Fw::StringBase& s1)
{
  this->m_s1 = s1;
}

void String ::
  sets2(const Fw::StringBase& s2)
{
  this->m_s2 = s2;
}
