#include "SerialMapping_.h"
#include "SerialMapping_Dcps.h"

namespace ros2_serial_msgs
{
    namespace msg
    {
        namespace dds_
        {
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < ros2_serial_msgs::msg::dds_::SerialMapping_, struct SerialMapping_Seq_uniq_>;
#endif

const char * ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupportInterface::_local_id = "IDL:::ros2_serial_msgs::msg::dds_/SerialMapping_TypeSupportInterface:1.0";

ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupportInterface_ptr ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupportInterface::_duplicate (ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupportInterface_ptr ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupportInterface_ptr ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupportInterface_ptr result;
    result = dynamic_cast < ros2_serial_msgs::msg::dds_::SerialMapping_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter::_local_id = "IDL:::ros2_serial_msgs::msg::dds_/SerialMapping_DataWriter:1.0";

ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter_ptr ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter::_duplicate (ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter_ptr ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter::_narrow (DDS::Object_ptr p)
{
    ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter_ptr result = NULL;
    if (p && p->_is_a (ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter::_local_id))
    {
        result = dynamic_cast < ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter_ptr ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter_ptr result;
    result = dynamic_cast < ros2_serial_msgs::msg::dds_::SerialMapping_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * ros2_serial_msgs::msg::dds_::SerialMapping_DataReader::_local_id = "IDL:::ros2_serial_msgs::msg::dds_/SerialMapping_DataReader:1.0";

ros2_serial_msgs::msg::dds_::SerialMapping_DataReader_ptr ros2_serial_msgs::msg::dds_::SerialMapping_DataReader::_duplicate (ros2_serial_msgs::msg::dds_::SerialMapping_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean ros2_serial_msgs::msg::dds_::SerialMapping_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, ros2_serial_msgs::msg::dds_::SerialMapping_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

ros2_serial_msgs::msg::dds_::SerialMapping_DataReader_ptr ros2_serial_msgs::msg::dds_::SerialMapping_DataReader::_narrow (DDS::Object_ptr p)
{
    ros2_serial_msgs::msg::dds_::SerialMapping_DataReader_ptr result = NULL;
    if (p && p->_is_a (ros2_serial_msgs::msg::dds_::SerialMapping_DataReader::_local_id))
    {
        result = dynamic_cast < ros2_serial_msgs::msg::dds_::SerialMapping_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

ros2_serial_msgs::msg::dds_::SerialMapping_DataReader_ptr ros2_serial_msgs::msg::dds_::SerialMapping_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    ros2_serial_msgs::msg::dds_::SerialMapping_DataReader_ptr result;
    result = dynamic_cast < ros2_serial_msgs::msg::dds_::SerialMapping_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * ros2_serial_msgs::msg::dds_::SerialMapping_DataReaderView::_local_id = "IDL:::ros2_serial_msgs::msg::dds_/SerialMapping_DataReaderView:1.0";

ros2_serial_msgs::msg::dds_::SerialMapping_DataReaderView_ptr ros2_serial_msgs::msg::dds_::SerialMapping_DataReaderView::_duplicate (ros2_serial_msgs::msg::dds_::SerialMapping_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean ros2_serial_msgs::msg::dds_::SerialMapping_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, ros2_serial_msgs::msg::dds_::SerialMapping_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

ros2_serial_msgs::msg::dds_::SerialMapping_DataReaderView_ptr ros2_serial_msgs::msg::dds_::SerialMapping_DataReaderView::_narrow (DDS::Object_ptr p)
{
    ros2_serial_msgs::msg::dds_::SerialMapping_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (ros2_serial_msgs::msg::dds_::SerialMapping_DataReaderView::_local_id))
    {
        result = dynamic_cast < ros2_serial_msgs::msg::dds_::SerialMapping_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

ros2_serial_msgs::msg::dds_::SerialMapping_DataReaderView_ptr ros2_serial_msgs::msg::dds_::SerialMapping_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    ros2_serial_msgs::msg::dds_::SerialMapping_DataReaderView_ptr result;
    result = dynamic_cast < ros2_serial_msgs::msg::dds_::SerialMapping_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

        }

    }

}

