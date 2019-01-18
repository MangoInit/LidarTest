// MESSAGE TEST_GOING_ON PACKING

#define MAVLINK_MSG_ID_TEST_GOING_ON 177

typedef struct __mavlink_test_going_on_t
{
 uint8_t code; /*< Timestamp (milliseconds since system boot)*/
} mavlink_test_going_on_t;

#define MAVLINK_MSG_ID_TEST_GOING_ON_LEN 1
#define MAVLINK_MSG_ID_177_LEN 1

#define MAVLINK_MSG_ID_TEST_GOING_ON_CRC 128
#define MAVLINK_MSG_ID_177_CRC 128



#define MAVLINK_MESSAGE_INFO_TEST_GOING_ON { \
	"TEST_GOING_ON", \
	1, \
	{  { "code", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_test_going_on_t, code) }, \
         } \
}


/**
 * @brief Pack a test_going_on message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param code Timestamp (milliseconds since system boot)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_going_on_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t code)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TEST_GOING_ON_LEN];
	_mav_put_uint8_t(buf, 0, code);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_GOING_ON_LEN);
#else
	mavlink_test_going_on_t packet;
	packet.code = code;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_GOING_ON_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TEST_GOING_ON;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TEST_GOING_ON_LEN, MAVLINK_MSG_ID_TEST_GOING_ON_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TEST_GOING_ON_LEN);
#endif
}

/**
 * @brief Pack a test_going_on message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param code Timestamp (milliseconds since system boot)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_going_on_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t code)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TEST_GOING_ON_LEN];
	_mav_put_uint8_t(buf, 0, code);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_GOING_ON_LEN);
#else
	mavlink_test_going_on_t packet;
	packet.code = code;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_GOING_ON_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TEST_GOING_ON;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TEST_GOING_ON_LEN, MAVLINK_MSG_ID_TEST_GOING_ON_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TEST_GOING_ON_LEN);
#endif
}

/**
 * @brief Encode a test_going_on struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param test_going_on C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_going_on_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_test_going_on_t* test_going_on)
{
	return mavlink_msg_test_going_on_pack(system_id, component_id, msg, test_going_on->code);
}

/**
 * @brief Encode a test_going_on struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param test_going_on C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_going_on_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_test_going_on_t* test_going_on)
{
	return mavlink_msg_test_going_on_pack_chan(system_id, component_id, chan, msg, test_going_on->code);
}

/**
 * @brief Send a test_going_on message
 * @param chan MAVLink channel to send the message
 *
 * @param code Timestamp (milliseconds since system boot)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_test_going_on_send(mavlink_channel_t chan, uint8_t code)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TEST_GOING_ON_LEN];
	_mav_put_uint8_t(buf, 0, code);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_GOING_ON, buf, MAVLINK_MSG_ID_TEST_GOING_ON_LEN, MAVLINK_MSG_ID_TEST_GOING_ON_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_GOING_ON, buf, MAVLINK_MSG_ID_TEST_GOING_ON_LEN);
#endif
#else
	mavlink_test_going_on_t packet;
	packet.code = code;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_GOING_ON, (const char *)&packet, MAVLINK_MSG_ID_TEST_GOING_ON_LEN, MAVLINK_MSG_ID_TEST_GOING_ON_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_GOING_ON, (const char *)&packet, MAVLINK_MSG_ID_TEST_GOING_ON_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_TEST_GOING_ON_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_test_going_on_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t code)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, code);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_GOING_ON, buf, MAVLINK_MSG_ID_TEST_GOING_ON_LEN, MAVLINK_MSG_ID_TEST_GOING_ON_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_GOING_ON, buf, MAVLINK_MSG_ID_TEST_GOING_ON_LEN);
#endif
#else
	mavlink_test_going_on_t *packet = (mavlink_test_going_on_t *)msgbuf;
	packet->code = code;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_GOING_ON, (const char *)packet, MAVLINK_MSG_ID_TEST_GOING_ON_LEN, MAVLINK_MSG_ID_TEST_GOING_ON_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_GOING_ON, (const char *)packet, MAVLINK_MSG_ID_TEST_GOING_ON_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE TEST_GOING_ON UNPACKING


/**
 * @brief Get field code from test_going_on message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint8_t mavlink_msg_test_going_on_get_code(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a test_going_on message into a struct
 *
 * @param msg The message to decode
 * @param test_going_on C-struct to decode the message contents into
 */
static inline void mavlink_msg_test_going_on_decode(const mavlink_message_t* msg, mavlink_test_going_on_t* test_going_on)
{
#if MAVLINK_NEED_BYTE_SWAP
	test_going_on->code = mavlink_msg_test_going_on_get_code(msg);
#else
	memcpy(test_going_on, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_TEST_GOING_ON_LEN);
#endif
}
