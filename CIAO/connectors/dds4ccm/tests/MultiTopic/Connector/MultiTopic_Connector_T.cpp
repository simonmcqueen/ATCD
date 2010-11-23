// $Id$

#include "connectors/dds4ccm/impl/DDS_TopicBase_Connector_T.h"

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::supplier_sq_traits::data_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_supplier_sq_data (void)
{
  DDS4CCM_TRACE ("DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_supplier_sq_data");

  typename CCM_TYPE::supplier_sq_traits::data_type::_var_type dw =
    this->sq_supplier_.get_data ();
  return CCM_TYPE::supplier_sq_traits::data_type::_duplicate (dw.in ());
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::supplier_sq_traits::dds_entity_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_supplier_sq_dds_entity (void)
{

  return CCM_TYPE::supplier_sq_traits::dds_entity_type::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::pull_consumer_sq_traits::fresh_data_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_pull_consumer_sq_fresh_data (void)
{
  typename CCM_TYPE::pull_consumer_sq_traits::fresh_data_type::_var_type fresh_data =
    this->pull_consumer_sq_.get_fresh_data ();
  return CCM_TYPE::pull_consumer_sq_traits::fresh_data_type::_duplicate (
                                                              fresh_data.in ());
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::pull_consumer_sq_traits::data_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_pull_consumer_sq_data (void)
{

  return CCM_TYPE::pull_consumer_sq_traits::data_type::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::pull_consumer_sq_traits::dds_entity_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_pull_consumer_sq_dds_entity (void)
{

  return CCM_TYPE::pull_consumer_sq_traits::dds_entity_type::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
::CCM_DDS::QueryFilter*
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::pull_consumer_sq_filter (void)
{
  return 0;
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
void
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::pull_consumer_sq_filter (const ::CCM_DDS::QueryFilter&)
{

}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
::CCM_DDS::CCM_ContentFilterSetting_ptr
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_pull_consumer_sq_filter_config(void)
{

  return ::CCM_DDS::CCM_ContentFilterSetting::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
::CCM_DDS::CCM_ContentFilterSetting*
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_push_consumer_sq_filter_config(void)
{

  return ::CCM_DDS::CCM_ContentFilterSetting::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
::CCM_DDS::QueryFilter *
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::push_consumer_sq_filter (void)
{
  return 0;
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
void
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::push_consumer_sq_filter (const ::CCM_DDS::QueryFilter &)
{

}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::push_consumer_sq_traits::data_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_push_consumer_sq_data (void)
{

  return CCM_TYPE::push_consumer_sq_traits::data_type::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::push_consumer_sq_traits::data_control_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_push_consumer_sq_data_control (void)
{

  return CCM_TYPE::push_consumer_sq_traits::data_control_type::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::push_consumer_sq_traits::dds_entity_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_push_consumer_sq_dds_entity (void)
{

  return CCM_TYPE::push_consumer_sq_traits::dds_entity_type::_nil ();
}

//TRIANGEL

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::supplier_tr_traits::data_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_supplier_tr_data (void)
{
  DDS4CCM_TRACE ("DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_supplier_tr_data");

  typename CCM_TYPE::supplier_sq_traits::data_type::_var_type dw =
    this->tr_supplier_.get_data ();
  return CCM_TYPE::supplier_sq_traits::data_type::_duplicate (dw.in ());
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::supplier_tr_traits::dds_entity_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_supplier_tr_dds_entity (void)
{

  return CCM_TYPE::supplier_tr_traits::dds_entity_type::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::pull_consumer_tr_traits::fresh_data_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_pull_consumer_tr_fresh_data (void)
{
  typename CCM_TYPE::pull_consumer_tr_traits::fresh_data_type::_var_type fresh_data =
    this->pull_consumer_tr_.get_fresh_data ();

  return CCM_TYPE::pull_consumer_tr_traits::fresh_data_type::_duplicate (
                                                              fresh_data.in ());
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::pull_consumer_tr_traits::data_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_pull_consumer_tr_data (void)
{

  return CCM_TYPE::pull_consumer_tr_traits::data_type::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::pull_consumer_tr_traits::dds_entity_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_pull_consumer_tr_dds_entity (void)
{

  return CCM_TYPE::pull_consumer_tr_traits::dds_entity_type::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
::CCM_DDS::QueryFilter*
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::pull_consumer_tr_filter (void)
{

  return 0;
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
void
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::pull_consumer_tr_filter (const ::CCM_DDS::QueryFilter&)
{

}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
::CCM_DDS::CCM_ContentFilterSetting*
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_pull_consumer_tr_filter_config(void)
{

  return ::CCM_DDS::CCM_ContentFilterSetting::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
::CCM_DDS::CCM_ContentFilterSetting*
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_push_consumer_tr_filter_config(void)
{

  return ::CCM_DDS::CCM_ContentFilterSetting::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
::CCM_DDS::QueryFilter *
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::push_consumer_tr_filter (void)
{

  return 0;
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
void
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::push_consumer_tr_filter (
  const ::CCM_DDS::QueryFilter &)
{

}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::push_consumer_tr_traits::data_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_push_consumer_tr_data (void)
{

  return CCM_TYPE::push_consumer_tr_traits::data_type::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::push_consumer_tr_traits::data_control_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_push_consumer_tr_data_control (void)
{

  return CCM_TYPE::push_consumer_tr_traits::data_control_type::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::push_consumer_tr_traits::dds_entity_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_push_consumer_tr_dds_entity (void)
{

  return CCM_TYPE::push_consumer_tr_traits::dds_entity_type::_nil ();
}

//CIRCLE

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::supplier_cl_traits::data_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_supplier_cl_data (void)
{
  DDS4CCM_TRACE ("DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_supplier_cl_data");
  typename CCM_TYPE::supplier_sq_traits::data_type::_var_type dw =
    this->cl_supplier_.get_data ();
  return CCM_TYPE::supplier_sq_traits::data_type::_duplicate (dw.in ());
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::supplier_cl_traits::dds_entity_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_supplier_cl_dds_entity (void)
{

  return CCM_TYPE::supplier_cl_traits::dds_entity_type::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::pull_consumer_cl_traits::fresh_data_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_pull_consumer_cl_fresh_data (void)
{
  typename CCM_TYPE::pull_consumer_cl_traits::fresh_data_type::_var_type fresh_data =
    this->pull_consumer_cl_.get_fresh_data ();

  return CCM_TYPE::pull_consumer_cl_traits::fresh_data_type::_duplicate (
                                                              fresh_data.in ());
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::pull_consumer_cl_traits::data_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_pull_consumer_cl_data (void)
{

  return CCM_TYPE::pull_consumer_cl_traits::data_type::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::pull_consumer_cl_traits::dds_entity_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_pull_consumer_cl_dds_entity (void)
{

  return CCM_TYPE::pull_consumer_cl_traits::dds_entity_type::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
::CCM_DDS::QueryFilter*
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::pull_consumer_cl_filter (void)
{

  return 0;
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
void
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::pull_consumer_cl_filter (const ::CCM_DDS::QueryFilter&)
{

}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
::CCM_DDS::CCM_ContentFilterSetting*
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_pull_consumer_cl_filter_config(void)
{

  return ::CCM_DDS::CCM_ContentFilterSetting::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
::CCM_DDS::CCM_ContentFilterSetting*
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_push_consumer_cl_filter_config(void)
{

  return ::CCM_DDS::CCM_ContentFilterSetting::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
::CCM_DDS::QueryFilter *
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::push_consumer_cl_filter (void)
{

  return 0;
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
void
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::push_consumer_cl_filter (const ::CCM_DDS::QueryFilter &)
{

}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::push_consumer_cl_traits::data_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_push_consumer_cl_data (void)
{

  return CCM_TYPE::push_consumer_cl_traits::data_type::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::push_consumer_cl_traits::data_control_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_push_consumer_cl_data_control (void)
{

  return CCM_TYPE::push_consumer_cl_traits::data_control_type::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
typename CCM_TYPE::push_consumer_cl_traits::dds_entity_type::_ptr_type
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::get_push_consumer_cl_dds_entity (void)
{

  return CCM_TYPE::push_consumer_cl_traits::dds_entity_type::_nil ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
void
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::configuration_complete (void)
{
  TopicBaseConnector::configuration_complete ();

  this->sq_supplier_.configuration_complete (
                                      this->topic_.in (),
                                      this->publisher_.in (),
                                      this->library_name_,
                                      this->profile_name_);
  this->tr_supplier_.configuration_complete (
                                      this->topic_.in (),
                                      this->publisher_.in (),
                                      this->library_name_,
                                      this->profile_name_);
  this->cl_supplier_.configuration_complete (
                                      this->topic_.in (),
                                      this->publisher_.in (),
                                      this->library_name_,
                                      this->profile_name_);
  this->pull_consumer_sq_.configuration_complete (
                                      this->topic_.in (),
                                      this->subscriber_.in (),
                                      this->library_name_,
                                      this->profile_name_);
  this->pull_consumer_tr_.configuration_complete (
                                      this->topic_.in (),
                                      this->subscriber_.in (),
                                      this->library_name_,
                                      this->profile_name_);
  this->pull_consumer_cl_.configuration_complete (
                                      this->topic_.in (),
                                      this->subscriber_.in (),
                                      this->library_name_,
                                      this->profile_name_);
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
void
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::ccm_activate (ACE_Reactor* reactor)
{
  ACE_DEBUG ((LM_DEBUG, "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ\n"));
  TopicBaseConnector::ccm_activate (reactor);
  ACE_DEBUG ((LM_DEBUG, "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY\n"));

  this->sq_supplier_.activate ();
  ACE_DEBUG ((LM_DEBUG, "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n"));
  this->tr_supplier_.activate ();
  ACE_DEBUG ((LM_DEBUG, "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n"));
  this->cl_supplier_.activate ();
  ACE_DEBUG ((LM_DEBUG, "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\n"));

  //TODO: Portstatuslistener nil ??
  ACE_DEBUG ((LM_DEBUG, "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU\n"));
  this->pull_consumer_sq_.activate (::CCM_DDS::PortStatusListener::_nil (),
                                    reactor);
  ACE_DEBUG ((LM_DEBUG, "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT\n"));
  this->pull_consumer_tr_.activate (::CCM_DDS::PortStatusListener::_nil (),
                                    reactor);
  ACE_DEBUG ((LM_DEBUG, "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSs\n"));
  this->pull_consumer_cl_.activate (::CCM_DDS::PortStatusListener::_nil (),
                                    reactor);
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
void
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::ccm_passivate (void)
{
  this->sq_supplier_.passivate ();
  this->tr_supplier_.passivate ();
  this->cl_supplier_.passivate ();

  this->pull_consumer_sq_.passivate ();
  this->pull_consumer_tr_.passivate ();
  this->pull_consumer_cl_.passivate ();

  TopicBaseConnector::ccm_passivate ();
}

template <typename CCM_TYPE, typename DDS_TYPE, bool FIXED>
void
DDS_MT_Event_Connector_T<CCM_TYPE, DDS_TYPE, FIXED>::ccm_remove (void)
{
  this->sq_supplier_.remove (this->publisher_.in ());
  this->tr_supplier_.remove (this->publisher_.in ());
  this->cl_supplier_.remove (this->publisher_.in ());

  this->pull_consumer_sq_.remove (this->subscriber_.in ());
  this->pull_consumer_tr_.remove (this->subscriber_.in ());
  this->pull_consumer_cl_.remove (this->subscriber_.in ());

  TopicBaseConnector::ccm_remove ();
}
