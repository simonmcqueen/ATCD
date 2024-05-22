// -*- C++ -*-

//=============================================================================
/**
 *  @file    DynArray_i.h
 *
 *  @author Jeff Parsons <parsons@cs.wustl.edu>
 */
//=============================================================================


#ifndef TAO_DYNARRAY_I_H
#define TAO_DYNARRAY_I_H
#include /**/ "ace/pre.h"

#include "tao/DynamicAny/DynamicAny.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/DynamicAny/DynCommon.h"
#include "tao/LocalObject.h"
#include <vector>

#if defined (_MSC_VER)
# pragma warning(push)
# pragma warning (disable:4250)
#endif /* _MSC_VER */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/**
 * @class TAO_DynArray_i
 *
 * Implementation of Dynamic Any type for arrays
 */
class TAO_DynamicAny_Export TAO_DynArray_i
  : public virtual DynamicAny::DynArray,
    public virtual TAO_DynCommon,
    public virtual ::CORBA::LocalObject
{
public:
  /// Constructor.
  TAO_DynArray_i (CORBA::Boolean allow_truncation=true);

  /// Destructor.
  ~TAO_DynArray_i ();

  /// Initialize using just a TypeCode.
  void init (CORBA::TypeCode_ptr tc);

  /// Initialize using an Any.
  void init (const CORBA::Any& any);

  // = LocalObject methods
  static TAO_DynArray_i *_narrow (CORBA::Object_ptr obj);

  // = Functions specific to DynArray.

  virtual DynamicAny::AnySeq * get_elements ();

  virtual void set_elements (const DynamicAny::AnySeq & value);

  virtual DynamicAny::DynAnySeq * get_elements_as_dyn_any ();

  virtual void set_elements_as_dyn_any (const DynamicAny::DynAnySeq & value);

  // = DynAny common functions not implemented in class TAO_DynCommon.

  virtual void from_any (const CORBA::Any & value);

  virtual CORBA::Any * to_any ();

  virtual CORBA::Boolean equal (DynamicAny::DynAny_ptr dyn_any);

  virtual void destroy ();

  virtual DynamicAny::DynAny_ptr current_component ();

private:
  /// Returns the type of elements contained in the array.
  CORBA::TypeCode_ptr get_element_type ();

  /// Gets the length of the array from the typecode.
  CORBA::ULong get_tc_length (CORBA::TypeCode_ptr tc);

  /// Called by both versions of init().
  void init_common ();

  // Use copy() or assign() instead of these.
  TAO_DynArray_i (const TAO_DynArray_i &) = delete;
  TAO_DynArray_i &operator= (const TAO_DynArray_i &) = delete;
  TAO_DynArray_i& operator= (TAO_DynArray_i&&) = delete;
  TAO_DynArray_i (TAO_DynArray_i&&) = delete;

private:
  /// Each component is also a DynAny.
  std::vector<DynamicAny::DynAny_var> da_members_;
};

TAO_END_VERSIONED_NAMESPACE_DECL

#if defined(_MSC_VER)
# pragma warning(pop)
#endif /* _MSC_VER */

#include /**/ "ace/post.h"
#endif /* TAO_DYNARRAY_I_H */
