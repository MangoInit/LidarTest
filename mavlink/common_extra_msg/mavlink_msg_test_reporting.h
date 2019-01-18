// MESSAGE TEST_REPORTING PACKING

#define MAVLINK_MSG_ID_TEST_REPORTING 176

typedef struct __mavlink_test_reporting_t
{
 uint8_t item; /*< Timestamp (milliseconds since system boot)*/
 uint8_t index; /*< Timestamp (milliseconds since system boot)*/
 uint8_t state; /*< */
 uint8_t result; /*< */
} mavlink_test_reporting_t;

#define MAVLINK_MSG_ID_TEST_REPORTING_LEN 4
#define MAVLINK_MSG_ID_176_LEN 4

#define MAVLINK_MSG_ID_TEST_REPORTING_CRC 100
#define MAVLINK_MSG_ID_176_CRC 100



#define MAVLINK_MESSAGE_INFO_TEST_REPORTING { \
	"TEST_REPORTING", \
	4, \
	{  { "item", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_test_reporting_t, item) }, \
         { "index", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_test_reporting_t, index) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_test_reporting_t, state) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_test_reporting_t, result) }, \
         } \
}


/**
 * @brief Pack a test_reporting message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param item Timestamp (milliseconds since system boot)
 * @param index Timestamp (milliseconds since system boot)
 * @param state 
 * @param result 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_reporting_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t item, uint8_t index, uint8_t state, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TEST_REPORTING_LEN];
	_mav_put_uint8_t(buf, 0, item);
	_mav_put_uint8_t(buf, 1, index);
	_mav_put_uint8_t(buf, 2, state);
	_mav_put_uint8_t(buf, 3, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_REPORTING_LEN);
#else
	mavlink_test_reporting_t packet;
	packet.item = item;
	packet.index = index;
	packet.state = state;
	packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_REPORTING_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TEST_REPORTING;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TEST_REPORTING_LEN, MAVLINK_MSG_ID_TEST_REPORTING_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TEST_REPORTING_LEN);
#endif
}

/**
 * @brief Pack a test_reporting message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param item Timestamp (milliseconds since system boot)
 * @param index Timestamp (milliseconds since system boot)
 * @param state 
 * @param result 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_reporting_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t item,uint8_t index,uint8_t state,uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TEST_REPORTING_LEN];
	_mav_put_uint8_t(buf, 0, item);
	_mav_put_uint8_t(buf, 1, index);
	_mav_put_uint8_t(buf, 2, state);
	_mav_put_uint8_t(buf, 3, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_REPORTING_LEN);
#else
	mavlink_test_reporting_t packet;
	packet.item = item;
	packet.index = index;
	packet.state = state;
	packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_REPORTING_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TEST_REPORTING;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TEST_REPORTING_LEN, MAVLINK_MSG_ID_TEST_REPORTING_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TEST_REPORTING_LEN);
#endif
}

/**
 * @brief Encode a test_reporting struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param test_reporting C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_reporting_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_test_reporting_t* test_reporting)
{
	return mavlink_msg_test_reporting_pack(system_id, component_id, msg, test_reporting->item, test_reporting->index, test_reporting->state, test_reporting->result);
}

/**
 * @brief Encode a test_reporting struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param test_reporting C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_reporting_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_test_reporting_t* test_reporting)
{
	return mavlink_msg_test_reporting_pack_chan(system_id, component_id, chan, msg, test_reporting->item, test_reporting->index, test_reporting->state, test_reporting->result);
}

/**
 * @brief Send a test_reporting message
 * @param chan MAVLink channel to send the message
 *
 * @param item Timestamp (milliseconds since system boot)
 * @param index Timestamp (milliseconds since system boot)
 * @param state 
 * @param result 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_test_reporting_send(mavlink_channel_t chan, uint8_t item, uint8_t index, uint8_t state, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TEST_REPORTING_LEN];
	_mav_put_uint8_t(buf, 0, item);
	_mav_put_uint8_t(buf, 1, index);
	_mav_put_uint8_t(buf, 2, state);
	_mav_put_uint8_t(buf, 3, result);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_REPORTING, buf, MAVLINK_MSG_ID_TEST_REPORTING_LEN, MAVLINK_MSG_ID_TEST_REPORTING_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_REPORTING, buf, MAVLINK_MSG_ID_TEST_REPORTING_LEN);
#endif
#else
	mavlink_test_reporting_t packet;
	packet.item = item;
	packet.index = index;
	packet.state = state;
	packet.result = result;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_REPORTING, (const char *)&packet, MAVLINK_MSG_ID_TEST_REPORTING_LEN, MAVLINK_MSG_ID_TEST_REPORTING_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_REPORTING, (const char *)&packet, MAVLINK_MSG_ID_TEST_REPORTING_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_TEST_REPORTING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_test_reporting_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t item, uint8_t index, uint8_t state, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, item);
	_mav_put_uint8_t(buf, 1, index);
	_mav_put_uint8_t(buf, 2, state);
	_mav_put_uint8_t(buf, 3, result);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_REPORTING, buf, MAVLINK_MSG_ID_TEST_REPORTING_LEN, MAVLINK_MSG_ID_TEST_REPORTING_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_REPORTING, buf, MAVLINK_MSG_ID_TEST_REPORTING_LEN);
#endif
#else
	mavlink_test_reporting_t *packet = (mavlink_test_reporting_t *)msgbuf;
	packet->item = item;
	packet->index = index;
	packet->state = state;
	packet->result = result;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_REPORTING, (const char *)packet, MAVLINK_MSG_ID_TEST_REPORTING_LEN, MAVLINK_MSG_ID_TEST_REPORTING_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_REPORTING, (const char *)packet, MAVLINK_MSG_ID_TEST_REPORTING_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE TEST_REPORTING UNPACKING


/**
 * @brief Get field item from test_reporting message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint8_t mavlink_msg_test_reporting_get_item(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field index from test_reporting message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint8_t mavlink_msg_test_reporting_get_index(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field state from test_reporting message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_test_reporting_get_state(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field result from test_reporting message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_test_reporting_get_result(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Decode a test_reporting message into a struct
 *
 * @param msg The message to decode
 * @param test_reporting C-struct to decode the message contents into
 */
static inline void mavlink_msg_test_reporting_decode(const mavlink_message_t* msg, mavlink_test_reporting_t* test_reporting)
{
#if MAVLINK_NEED_BYTE_SWAP
	test_reporting->item = mavlink_msg_test_reporting_get_item(msg);
	test_reporting->index = mavlink_msg_test_reporting_get_index(msg);
	test_reporting->state = mavlink_msg_test_reporting_get_state(msg);
	test_reporting->result = mavlink_msg_test_reporting_get_result(msg);
#else
	memcpy(test_reporting, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_TEST_REPORTING_LEN);
#endif
}
