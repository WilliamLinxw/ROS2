#ifndef H_2B451D1885F38DDDCEED2FA0795E4530_SerialMapping_SPLTYPES_H
#define H_2B451D1885F38DDDCEED2FA0795E4530_SerialMapping_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_SerialMapping_.h"


extern c_metaObject __SerialMapping__ros2_serial_msgs__load (c_base base);

extern c_metaObject __SerialMapping__ros2_serial_msgs_msg__load (c_base base);

extern c_metaObject __SerialMapping__ros2_serial_msgs_msg_dds___load (c_base base);

extern c_metaObject __SerialMapping__ros2_serial_msgs_msg_dds__SerialMapping_Constants__load (c_base base);

extern const char *ros2_serial_msgs_msg_dds__SerialMapping__metaDescriptor[];
extern const int ros2_serial_msgs_msg_dds__SerialMapping__metaDescriptorArrLength;
extern const int ros2_serial_msgs_msg_dds__SerialMapping__metaDescriptorLength;
extern c_metaObject __ros2_serial_msgs_msg_dds__SerialMapping___load (c_base base);
struct _ros2_serial_msgs_msg_dds__SerialMapping_ ;
extern  v_copyin_result __ros2_serial_msgs_msg_dds__SerialMapping___copyIn(c_base base, const struct ros2_serial_msgs::msg::dds_::SerialMapping_ *from, struct _ros2_serial_msgs_msg_dds__SerialMapping_ *to);
extern  void __ros2_serial_msgs_msg_dds__SerialMapping___copyOut(const void *_from, void *_to);
struct _ros2_serial_msgs_msg_dds__SerialMapping_ {
    c_sequence topic_names_;
    c_sequence serial_mappings_;
    c_sequence types_;
    c_sequence direction_;
};

#undef OS_API
#endif
