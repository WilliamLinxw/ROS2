#ifndef _H_2B451D1885F38DDDCEED2FA0795E4530_SerialMapping__H_
#define _H_2B451D1885F38DDDCEED2FA0795E4530_SerialMapping__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace ros2_serial_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace SerialMapping_Constants
            {
                const ::DDS::Octet SERIALTOROS2_ = 0;

                const ::DDS::Octet ROS2TOSERIAL_ = 1;

            }

            struct  SerialMapping_
            {
                struct _topic_names__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _topic_names__seq_uniq_ > _topic_names__seq;
                typedef DDS_DCPSUStrSeq_var< _topic_names__seq > _topic_names__seq_var;
                typedef DDS_DCPSUStrSeq_out< _topic_names__seq > _topic_names__seq_out;
                struct _serial_mappings__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::ULongLong, struct _serial_mappings__seq_uniq_ > _serial_mappings__seq;
                typedef DDS_DCPSSequence_var< _serial_mappings__seq > _serial_mappings__seq_var;
                typedef DDS_DCPSSequence_out< _serial_mappings__seq > _serial_mappings__seq_out;
                struct _types__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _types__seq_uniq_ > _types__seq;
                typedef DDS_DCPSUStrSeq_var< _types__seq > _types__seq_var;
                typedef DDS_DCPSUStrSeq_out< _types__seq > _types__seq_out;
                struct _direction__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _direction__seq_uniq_ > _direction__seq;
                typedef DDS_DCPSSequence_var< _direction__seq > _direction__seq_var;
                typedef DDS_DCPSSequence_out< _direction__seq > _direction__seq_out;
                _topic_names__seq topic_names_;
                _serial_mappings__seq serial_mappings_;
                _types__seq types_;
                _direction__seq direction_;
            };

            typedef DDS_DCPSStruct_var<SerialMapping_> SerialMapping__var;
            typedef DDS_DCPSStruct_out < SerialMapping_> SerialMapping__out;

        }

    }

}

#endif /* _H_2B451D1885F38DDDCEED2FA0795E4530_SerialMapping__H_ */
