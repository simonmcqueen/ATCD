// -*- C++ -*-
//
// $Id$

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
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:302


#include "ObjectIdListC.h"
#include "tao/CDR.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "ObjectIdListC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:66

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from 
// be\be_visitor_sequence/sequence_cs.cpp:65

#if !defined (_CORBA_ORB_OBJECTIDLIST_CS_)
#define _CORBA_ORB_OBJECTIDLIST_CS_

CORBA::ORB_ObjectIdList::ORB_ObjectIdList (void)
{}

CORBA::ORB_ObjectIdList::ORB_ObjectIdList (
    CORBA::ULong max
  )
  : TAO_Unbounded_String_Sequence
    (max)
{}

CORBA::ORB_ObjectIdList::ORB_ObjectIdList (
    CORBA::ULong max,
    CORBA::ULong length,
    char * * buffer,
    CORBA::Boolean release
  )
  : TAO_Unbounded_String_Sequence
    (max, length, buffer, release)
{}

CORBA::ORB_ObjectIdList::ORB_ObjectIdList (
    const ORB_ObjectIdList &seq
  )
  : TAO_Unbounded_String_Sequence
    (seq)
{}

CORBA::ORB_ObjectIdList::~ORB_ObjectIdList (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be\be_visitor_sequence/cdr_op_cs.cpp:96

#if !defined _TAO_CDR_OP_CORBA_ORB_ObjectIdList_CPP_
#define _TAO_CDR_OP_CORBA_ORB_ObjectIdList_CPP_

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::ORB_ObjectIdList &_tao_sequence
  )
{
  const CORBA::ULong _tao_seq_len = _tao_sequence.length ();
  
  if (strm << _tao_seq_len)
    {
      // Encode all elements.
      CORBA::Boolean _tao_marshal_flag = true;
      
      for (CORBA::ULong i = 0; i < _tao_seq_len && _tao_marshal_flag; ++i)
        {
          _tao_marshal_flag = (strm << _tao_sequence[i].in ());
        }
      
      return _tao_marshal_flag;
    }
  
  return false;
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CORBA::ORB_ObjectIdList &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len;
  
  if (strm >> _tao_seq_len)
    {
      // Add a check to the length of the sequence
      // to make sure it does not exceed the length
      // of the stream. (See bug 58.)
      if (_tao_seq_len > strm.length ())
        {
          return false;
        }
      
      // Set the length of the sequence.
      _tao_sequence.length (_tao_seq_len);
      
      // If length is 0 we return true.
      if (0 >= _tao_seq_len) 
        {
          return true;
        }
      
      // Retrieve all the elements.
      CORBA::Boolean _tao_marshal_flag = true;
      
      for (CORBA::ULong i = 0; i < _tao_seq_len && _tao_marshal_flag; ++i)
        {
          _tao_marshal_flag = (strm >> _tao_sequence[i].out ());
        
      }
    
    return _tao_marshal_flag;
  
  }

return false;
}

#endif /* _TAO_CDR_OP_CORBA_ORB_ObjectIdList_CPP_ */

// TAO_IDL - Generated from
// be\be_visitor_root/root.cpp:1509

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO_MngSeq_Var_T<
        CORBA::ORB_ObjectIdList,
        TAO_SeqElem_String_Manager
      >;

  template class
    TAO_Seq_Var_Base_T<
        CORBA::ORB_ObjectIdList,
        TAO_SeqElem_String_Manager
      >;

  template class
    TAO_MngSeq_Out_T<
        CORBA::ORB_ObjectIdList,
        CORBA::ORB_ObjectIdList_var,
        TAO_SeqElem_String_Manager
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO_MngSeq_Var_T< \
        CORBA::ORB_ObjectIdList, \
        TAO_SeqElem_String_Manager \
      >

# pragma instantiate \
    TAO_Seq_Var_Base_T< \
        CORBA::ORB_ObjectIdList, \
        TAO_SeqElem_String_Manager \
      >

# pragma instantiate \
    TAO_MngSeq_Out_T< \
        CORBA::ORB_ObjectIdList, \
        CORBA::ORB_ObjectIdList_var, \
        TAO_SeqElem_String_Manager \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 
