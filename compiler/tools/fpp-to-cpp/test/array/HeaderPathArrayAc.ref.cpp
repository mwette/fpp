// ======================================================================
// \title  HeaderPathArrayAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for HeaderPath array
// ======================================================================

#include "Fw/Types/Assert.hpp"
#include "HeaderPathArrayAc.hpp"

// ----------------------------------------------------------------------
// Constructors
// ----------------------------------------------------------------------

HeaderPath ::
  HeaderPath() :
    Serializable()
{
  // Construct using element-wise constructor
  *this = HeaderPath(
    T(),
    T(),
    T()
  );
}

HeaderPath ::
  HeaderPath(const ElementType (&a)[SIZE]) :
    Serializable()
{
  for (U32 index = 0; index < SIZE; index++) {
    this->elements[index] = a[index];
  }
}

HeaderPath ::
  HeaderPath(const ElementType& e) :
    Serializable()
{
  for (U32 index = 0; index < SIZE; index++) {
    this->elements[index] = e;
  }
}

HeaderPath ::
  HeaderPath(
      const ElementType& e1,
      const ElementType& e2,
      const ElementType& e3
  ) :
    Serializable()
{
  this->elements[0] = e1;
  this->elements[1] = e2;
  this->elements[2] = e3;
}

HeaderPath ::
  HeaderPath(const HeaderPath& obj) :
    Serializable()
{
  for (U32 index = 0; index < SIZE; index++) {
    this->elements[index] = obj.elements[index];
  }
}

// ----------------------------------------------------------------------
// Operators
// ----------------------------------------------------------------------

HeaderPath::ElementType& HeaderPath ::
  operator[](const U32 i)
{
  FW_ASSERT(i < SIZE, static_cast<FwAssertArgType>(i), static_cast<FwAssertArgType>(SIZE));
  return this->elements[i];
}

const HeaderPath::ElementType& HeaderPath ::
  operator[](const U32 i) const
{
  FW_ASSERT(i < SIZE, static_cast<FwAssertArgType>(i), static_cast<FwAssertArgType>(SIZE));
  return this->elements[i];
}

HeaderPath& HeaderPath ::
  operator=(const HeaderPath& obj)
{
  if (this == &obj) {
    return *this;
  }

  for (U32 index = 0; index < SIZE; index++) {
    this->elements[index] = obj.elements[index];
  }
  return *this;
}

HeaderPath& HeaderPath ::
  operator=(const ElementType (&a)[SIZE])
{
  for (U32 index = 0; index < SIZE; index++) {
    this->elements[index] = a[index];
  }
  return *this;
}

HeaderPath& HeaderPath ::
  operator=(const ElementType& e)
{
  for (U32 index = 0; index < SIZE; index++) {
    this->elements[index] = e;
  }
  return *this;
}

bool HeaderPath ::
  operator==(const HeaderPath& obj) const
{
  for (U32 index = 0; index < SIZE; index++) {
    if (!((*this)[index] == obj[index])) {
      return false;
    }
  }
  return true;
}

bool HeaderPath ::
  operator!=(const HeaderPath& obj) const
{
  return !(*this == obj);
}

#ifdef BUILD_UT

std::ostream& operator<<(std::ostream& os, const HeaderPath& obj) {
  Fw::String s;
  obj.toString(s);
  os << s;
  return os;
}

#endif

// ----------------------------------------------------------------------
// Public member functions
// ----------------------------------------------------------------------

Fw::SerializeStatus HeaderPath ::
  serialize(Fw::SerializeBufferBase& buffer) const
{
  Fw::SerializeStatus status = Fw::FW_SERIALIZE_OK;
  for (U32 index = 0; index < SIZE; index++) {
    status = buffer.serialize((*this)[index]);
    if (status != Fw::FW_SERIALIZE_OK) {
      return status;
    }
  }
  return status;
}

Fw::SerializeStatus HeaderPath ::
  deserialize(Fw::SerializeBufferBase& buffer)
{
  Fw::SerializeStatus status = Fw::FW_SERIALIZE_OK;
  for (U32 index = 0; index < SIZE; index++) {
    status = buffer.deserialize((*this)[index]);
    if (status != Fw::FW_SERIALIZE_OK) {
      return status;
    }
  }
  return status;
}

#ifdef FW_SERIALIZABLE_TO_STRING

void HeaderPath ::
  toString(Fw::StringBase& sb) const
{
  static const char *formatString = "[ "
    "%s "
    "%s "
    "%s ]";

  // Declare strings to hold any serializable toString() arguments
  Fw::String str0;
  Fw::String str1;
  Fw::String str2;

  // Call toString for arrays and serializable types
  this->elements[0].toString(str0);
  this->elements[1].toString(str1);
  this->elements[2].toString(str2);

  sb.format(
    formatString,
    str0.toChar(),
    str1.toChar(),
    str2.toChar()
  );
}

#endif
