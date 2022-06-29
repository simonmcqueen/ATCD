// -*- C++ -*-
// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.dre.vanderbilt.edu/~schmidt/TAO.html

#include "tao/AnyTypeCode/WrongTransactionA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// TAO_IDL - Generated from
// be\be_visitor_typecode/struct_typecode.cpp:87

static TAO::TypeCode::Struct_Field<char const *, CORBA::TypeCode_ptr const *> const * const _tao_fields_CORBA_WrongTransaction = 0;
static TAO::TypeCode::Struct<char const *,
                      CORBA::TypeCode_ptr const *,
                      TAO::TypeCode::Struct_Field<char const *, CORBA::TypeCode_ptr const *> const *,
                      TAO::Null_RefCount_Policy>
  _tao_tc_CORBA_WrongTransaction (
    CORBA::tk_except,
    "IDL:omg.org/CORBA/WrongTransaction:1.0",
    "WrongTransaction",
    _tao_fields_CORBA_WrongTransaction,
    0);

namespace CORBA
{
  ::CORBA::TypeCode_ptr const _tc_WrongTransaction =
    &_tao_tc_CORBA_WrongTransaction;
}



// TAO_IDL - Generated from
// be\be_visitor_exception/any_op_cs.cpp:50

namespace TAO
{
  template<>
  CORBA::Boolean
  Any_Dual_Impl_T<CORBA::WrongTransaction>::demarshal_value (
      TAO_InputCDR & cdr
    )
  {
    CORBA::String_var id;

    if (!(cdr >> id.out ()))
      {
        return false;
      }

    try
      {
        this->value_->_tao_decode (cdr);
      }
    catch (const ::CORBA::Exception&)
      {
        return false;
      }

    return true;
  }
}

namespace CORBA
{

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const CORBA::WrongTransaction &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CORBA::WrongTransaction>::insert_copy (
      _tao_any,
      CORBA::WrongTransaction::_tao_any_destructor,
      CORBA::_tc_WrongTransaction,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    CORBA::WrongTransaction *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CORBA::WrongTransaction>::insert (
      _tao_any,
      CORBA::WrongTransaction::_tao_any_destructor,
      CORBA::_tc_WrongTransaction,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    CORBA::WrongTransaction *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const CORBA::WrongTransaction *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const CORBA::WrongTransaction *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CORBA::WrongTransaction>::extract (
        _tao_any,
        CORBA::WrongTransaction::_tao_any_destructor,
        CORBA::_tc_WrongTransaction,
        _tao_elem
      );
}

}

TAO_END_VERSIONED_NAMESPACE_DECL
