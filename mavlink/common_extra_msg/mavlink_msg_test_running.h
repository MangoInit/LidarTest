// MESSAGE TEST_RUNNING PACKING

#define MAVLINK_MSG_ID_TEST_RUNNING 175

typedef struct __mavlink_test_running_t
{
 uint16_t code; /*< Timestamp (milliseconds since system boot)*/
} mavlink_test_running_t;

#define MAVLINK_MSG_ID_TEST_RUNNING_LEN 2
#define MAVLINK_MSG_ID_175_LEN 2

#define MAVLINK_MSG_ID_TEST_RUNNING_CRC 10
#define MAVLINK_MSG_ID_175_CRC 10



#define MAVLINK_MESSAGE_INFO_TEST_RUNNING { \
	"TEST_RUNNING", \
	1, \
	{  { "code", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_test_running_t, code) }, \
         } \
}


/**
 * @brief Pack a test_running message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param code Timestamp (milliseconds since system boot)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_running_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t code)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TEST_RUNNING_LEN];
	_mav_put_uint16_t(buf, 0, code);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_RUNNING_LEN);
#else
	mavlink_test_running_t packet;
	packet.code = code;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_RUNNING_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TEST_RUNNING;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TEST_RUNNING_LEN, MAVLINK_MSG_ID_TEST_RUNNING_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TEST_RUNNING_LEN);
#endif
}

/**
 * @brief Pack a test_running message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param code Timestamp (milliseconds since system boot)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_test_running_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t code)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TEST_RUNNING_LEN];
	_mav_put_uint16_t(buf, 0, code);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TEST_RUNNING_LEN);
#else
	mavlink_test_running_t packet;
	packet.code = code;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TEST_RUNNING_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TEST_RUNNING;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TEST_RUNNING_LEN, MAVLINK_MSG_ID_TEST_RUNNING_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TEST_RUNNING_LEN);
#endif
}

/**
 * @brief Encode a test_running struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param test_running C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_running_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_test_running_t* test_running)
{
	return mavlink_msg_test_running_pack(system_id, component_id, msg, test_running->code);
}

/**
 * @brief Encode a test_running struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param test_running C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_test_running_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_test_running_t* test_running)
{
	return mavlink_msg_test_running_pack_chan(system_id, component_id, chan, msg, test_running->code);
}

/**
 * @brief Send a test_running message
 * @param chan MAVLink channel to send the message
 *
 * @param code Timestamp (milliseconds since system boot)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_test_running_send(mavlink_channel_t chan, uint16_t code)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TEST_RUNNING_LEN];
	_mav_put_uint16_t(buf, 0, code);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_RUNNING, buf, MAVLINK_MSG_ID_TEST_RUNNING_LEN, MAVLINK_MSG_ID_TEST_RUNNING_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_RUNNING, buf, MAVLINK_MSG_ID_TEST_RUNNING_LEN);
#endif
#else
	mavlink_test_running_t packet;
	packet.code = code;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_RUNNING, (const char *)&packet, MAVLINK_MSG_ID_TEST_RUNNING_LEN, MAVLINK_MSG_ID_TEST_RUNNING_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_RUNNING, (const char *)&packet, MAVLINK_MSG_ID_TEST_RUNNING_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_TEST_RUNNING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_test_running_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t code)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint16_t(buf, 0, code);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_RUNNING, buf, MAVLINK_MSG_ID_TEST_RUNNING_LEN, MAVLINK_MSG_ID_TEST_RUNNING_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_RUNNING, buf, MAVLINK_MSG_ID_TEST_RUNNING_LEN);
#endif
#else
	mavlink_test_running_t *packet = (mavlink_test_running_t *)msgbuf;
	packet->code = code;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_RUNNING, (const char *)packet, MAVLINK_MSG_ID_TEST_RUNNING_LEN, MAVLINK_MSG_ID_TEST_RUNNING_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_RUNNING, (const char *)packet, MAVLINK_MSG_ID_TEST_RUNNING_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE TEST_RUNNING UNPACKING


/**
 * @brief Get field code from test_running message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint16_t mavlink_msg_test_running_get_code(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Decode a test_running message into a struct
 *
 * @param msg The message to decode
 * @param test_running C-struct to decode the message contents into
 */
static inline void mavlink_msg_test_running_decode(const mavlink_message_t* msg, mavlink_test_running_t* test_running)
{
#if MAVLINK_NEED_BYTE_SWAP
	test_running->code = mavlink_msg_test_running_get_code(msg);
#else
	memcpy(test_running, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_TEST_RUNNING_LEN);
#endif
}
