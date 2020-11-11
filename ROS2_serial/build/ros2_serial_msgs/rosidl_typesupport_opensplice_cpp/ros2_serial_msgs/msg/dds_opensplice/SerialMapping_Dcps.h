#ifndef _H_2B451D1885F38DDDCEED2FA0795E4530_SerialMapping_DCPS_H_
#define _H_2B451D1885F38DDDCEED2FA0795E4530_SerialMapping_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "SerialMapping_.h"


namespace ros2_serial_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class SerialMapping_TypeSupportInterface;

            typedef SerialMapping_TypeSupportInterface * SerialMapping_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SerialMapping_TypeSupportInterface> SerialMapping_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SerialMapping_TypeSupportInterface> SerialMapping_TypeSupportInterface_out;


            class SerialMapping_DataWriter;

            typedef SerialMapping_DataWriter * SerialMapping_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SerialMapping_DataWriter> SerialMapping_DataWriter_var;
            typedef DDS_DCPSInterface_out < SerialMapping_DataWriter> SerialMapping_DataWriter_out;


            class SerialMapping_DataReader;

            typedef SerialMapping_DataReader * SerialMapping_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SerialMapping_DataReader> SerialMapping_DataReader_var;
            typedef DDS_DCPSInterface_out < SerialMapping_DataReader> SerialMapping_DataReader_out;


            class SerialMapping_DataReaderView;

            typedef SerialMapping_DataReaderView * SerialMapping_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SerialMapping_DataReaderView> SerialMapping_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SerialMapping_DataReaderView> SerialMapping_DataReaderView_out;

            struct SerialMapping_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < SerialMapping_, struct SerialMapping_Seq_uniq_> SerialMapping_Seq;
            typedef DDS_DCPSSequence_var < SerialMapping_Seq> SerialMapping_Seq_var;
            typedef DDS_DCPSSequence_out < SerialMapping_Seq> SerialMapping_Seq_out;

            class  SerialMapping_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SerialMapping_TypeSupportInterface_ptr _ptr_type;
                typedef SerialMapping_TypeSupportInterface_var _var_type;

                static SerialMapping_TypeSupportInterface_ptr _duplicate (SerialMapping_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SerialMapping_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SerialMapping_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SerialMapping_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SerialMapping_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SerialMapping_TypeSupportInterface () {};
                ~SerialMapping_TypeSupportInterface () {};
            private:
                SerialMapping_TypeSupportInterface (const SerialMapping_TypeSupportInterface &);
                SerialMapping_TypeSupportInterface & operator = (const SerialMapping_TypeSupportInterface &);
            };

            class  SerialMapping_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SerialMapping_DataWriter_ptr _ptr_type;
                typedef SerialMapping_DataWriter_var _var_type;

                static SerialMapping_DataWriter_ptr _duplicate (SerialMapping_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SerialMapping_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SerialMapping_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SerialMapping_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SerialMapping_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SerialMapping_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SerialMapping_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SerialMapping_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SerialMapping_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SerialMapping_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SerialMapping_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SerialMapping_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SerialMapping_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SerialMapping_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SerialMapping_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SerialMapping_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SerialMapping_& instance_data) = 0;

            protected:
                SerialMapping_DataWriter () {};
                ~SerialMapping_DataWriter () {};
            private:
                SerialMapping_DataWriter (const SerialMapping_DataWriter &);
                SerialMapping_DataWriter & operator = (const SerialMapping_DataWriter &);
            };

            class  SerialMapping_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SerialMapping_DataReader_ptr _ptr_type;
                typedef SerialMapping_DataReader_var _var_type;

                static SerialMapping_DataReader_ptr _duplicate (SerialMapping_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SerialMapping_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SerialMapping_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SerialMapping_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SerialMapping_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SerialMapping_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SerialMapping_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SerialMapping_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SerialMapping_& instance) = 0;

            protected:
                SerialMapping_DataReader () {};
                ~SerialMapping_DataReader () {};
            private:
                SerialMapping_DataReader (const SerialMapping_DataReader &);
                SerialMapping_DataReader & operator = (const SerialMapping_DataReader &);
            };

            class  SerialMapping_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SerialMapping_DataReaderView_ptr _ptr_type;
                typedef SerialMapping_DataReaderView_var _var_type;

                static SerialMapping_DataReaderView_ptr _duplicate (SerialMapping_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SerialMapping_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SerialMapping_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SerialMapping_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SerialMapping_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SerialMapping_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SerialMapping_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SerialMapping_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SerialMapping_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SerialMapping_& instance) = 0;

            protected:
                SerialMapping_DataReaderView () {};
                ~SerialMapping_DataReaderView () {};
            private:
                SerialMapping_DataReaderView (const SerialMapping_DataReaderView &);
                SerialMapping_DataReaderView & operator = (const SerialMapping_DataReaderView &);
            };
        }

    }

}

#endif
