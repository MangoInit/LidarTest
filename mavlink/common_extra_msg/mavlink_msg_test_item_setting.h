// MESSAGE TEST_ITEM_SETTING PACKING

#define MAVLINK_MSG_ID_TEST_ITEM_SETTING 174

typedef struct __mavlink_test_item_setting_t
{
 uint16_t code; /*< linear velocity in yaw plane (m/sec) getting from wheels*/
 uint8_t item; /*< angular velocity around yaw axis (rad /sec) getting from wheels*/
} mavlink_test_item_setting_t;

#define MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN 3
#define MAVLINK_MSG_ID_174_LEN 3

#define MAVLINK_MSG_ID_TEST_ITEM_SETTING_CRC 87
#define MAVLINK_MSG_ID_174_CRC 87



#define MAVLINK_MESSAGE_INFO_TEST_ITEM_SETTING { \
	"TEST_ITEM_SETTING", \
	2, \
	{  { "code", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_test_item_setting_t, code) }, \
         { "item", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_test_item_setting_t, item) }, \
         } \
}


/**
 * @brief Pack a test_item_setting message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param code linear velocity in yaw plane (m/sec) getting from wheels
 * @param item angular velocity around yaw axis (rad /sec) getting from wheels
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_item_setting_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t code, uint8_t item)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN];
	_mav_put_uint16_t(buf, 0, code);
	_mav_put_uint8_t(buf, 2, item);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN);
#else
	mavlink_test_item_setting_t packet;
	packet.code = code;
	packet.item = item;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TEST_ITEM_SETTING;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN, MAVLINK_MSG_ID_TEST_ITEM_SETTING_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN);
#endif
}

/**
 * @brief Pack a test_item_setting message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param code linear velocity in yaw plane (m/sec) getting from wheels
 * @param item angular velocity around yaw axis (rad /sec) getting from wheels
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_item_setting_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t code,uint8_t item)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN];
	_mav_put_uint16_t(buf, 0, code);
	_mav_put_uint8_t(buf, 2, item);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN);
#else
	mavlink_test_item_setting_t packet;
	packet.code = code;
	packet.item = item;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TEST_ITEM_SETTING;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN, MAVLINK_MSG_ID_TEST_ITEM_SETTING_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN);
#endif
}

/**
 * @brief Encode a test_item_setting struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param test_item_setting C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_item_setting_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_test_item_setting_t* test_item_setting)
{
	return mavlink_msg_test_item_setting_pack(system_id, component_id, msg, test_item_setting->code, test_item_setting->item);
}

/**
 * @brief Encode a test_item_setting struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param test_item_setting C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_item_setting_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_test_item_setting_t* test_item_setting)
{
	return mavlink_msg_test_item_setting_pack_chan(system_id, component_id, chan, msg, test_item_setting->code, test_item_setting->item);
}

/**
 * @brief Send a test_item_setting message
 * @param chan MAVLink channel to send the message
 *
 * @param code linear velocity in yaw plane (m/sec) getting from wheels
 * @param item angular velocity around yaw axis (rad /sec) getting from wheels
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_test_item_setting_send(mavlink_channel_t chan, uint16_t code, uint8_t item)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN];
	_mav_put_uint16_t(buf, 0, code);
	_mav_put_uint8_t(buf, 2, item);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_ITEM_SETTING, buf, MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN, MAVLINK_MSG_ID_TEST_ITEM_SETTING_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_ITEM_SETTING, buf, MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN);
#endif
#else
	mavlink_test_item_setting_t packet;
	packet.code = code;
	packet.item = item;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_ITEM_SETTING, (const char *)&packet, MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN, MAVLINK_MSG_ID_TEST_ITEM_SETTING_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_ITEM_SETTING, (const char *)&packet, MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_test_item_setting_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t code, uint8_t item)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint16_t(buf, 0, code);
	_mav_put_uint8_t(buf, 2, item);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_ITEM_SETTING, buf, MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN, MAVLINK_MSG_ID_TEST_ITEM_SETTING_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_ITEM_SETTING, buf, MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN);
#endif
#else
	mavlink_test_item_setting_t *packet = (mavlink_test_item_setting_t *)msgbuf;
	packet->code = code;
	packet->item = item;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_ITEM_SETTING, (const char *)packet, MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN, MAVLINK_MSG_ID_TEST_ITEM_SETTING_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_ITEM_SETTING, (const char *)packet, MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE TEST_ITEM_SETTING UNPACKING


/**
 * @brief Get field code from test_item_setting message
 *
 * @return linear velocity in yaw plane (m/sec) getting from wheels
 */
static inline uint16_t mavlink_msg_test_item_setting_get_code(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field item from test_item_setting message
 *
 * @return angular velocity around yaw axis (rad /sec) getting from wheels
 */
static inline uint8_t mavlink_msg_test_item_setting_get_item(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a test_item_setting message into a struct
 *
 * @param msg The message to decode
 * @param test_item_setting C-struct to decode the message contents into
 */
static inline void mavlink_msg_test_item_setting_decode(const mavlink_message_t* msg, mavlink_test_item_setting_t* test_item_setting)
{
#if MAVLINK_NEED_BYTE_SWAP
	test_item_setting->code = mavlink_msg_test_item_setting_get_code(msg);
	test_item_setting->item = mavlink_msg_test_item_setting_get_item(msg);
#else
	memcpy(test_item_setting, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_TEST_ITEM_SETTING_LEN);
#endif
}
