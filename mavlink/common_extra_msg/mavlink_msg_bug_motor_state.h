// MESSAGE BUG_MOTOR_STATE PACKING

#define MAVLINK_MSG_ID_BUG_MOTOR_STATE 164

typedef struct __mavlink_bug_motor_state_t
{
 uint16_t wheel_motor_left_current; /*<  left wheel motor current*/
 uint16_t wheel_motor_right_current; /*<  right wheel motor current*/
 uint16_t fan_motor_current; /*<  fan motor current*/
 uint16_t worm_motor_current; /*<  worm motor current*/
} mavlink_bug_motor_state_t;

#define MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN 8
#define MAVLINK_MSG_ID_164_LEN 8

#define MAVLINK_MSG_ID_BUG_MOTOR_STATE_CRC 227
#define MAVLINK_MSG_ID_164_CRC 227



#define MAVLINK_MESSAGE_INFO_BUG_MOTOR_STATE { \
	"BUG_MOTOR_STATE", \
	4, \
	{  { "wheel_motor_left_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_bug_motor_state_t, wheel_motor_left_current) }, \
         { "wheel_motor_right_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_bug_motor_state_t, wheel_motor_right_current) }, \
         { "fan_motor_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_bug_motor_state_t, fan_motor_current) }, \
         { "worm_motor_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_bug_motor_state_t, worm_motor_current) }, \
         } \
}


/**
 * @brief Pack a bug_motor_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param wheel_motor_left_current  left wheel motor current
 * @param wheel_motor_right_current  right wheel motor current
 * @param fan_motor_current  fan motor current
 * @param worm_motor_current  worm motor current
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bug_motor_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t wheel_motor_left_current, uint16_t wheel_motor_right_current, uint16_t fan_motor_current, uint16_t worm_motor_current)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN];
	_mav_put_uint16_t(buf, 0, wheel_motor_left_current);
	_mav_put_uint16_t(buf, 2, wheel_motor_right_current);
	_mav_put_uint16_t(buf, 4, fan_motor_current);
	_mav_put_uint16_t(buf, 6, worm_motor_current);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN);
#else
	mavlink_bug_motor_state_t packet;
	packet.wheel_motor_left_current = wheel_motor_left_current;
	packet.wheel_motor_right_current = wheel_motor_right_current;
	packet.fan_motor_current = fan_motor_current;
	packet.worm_motor_current = worm_motor_current;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_BUG_MOTOR_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN, MAVLINK_MSG_ID_BUG_MOTOR_STATE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN);
#endif
}

/**
 * @brief Pack a bug_motor_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param wheel_motor_left_current  left wheel motor current
 * @param wheel_motor_right_current  right wheel motor current
 * @param fan_motor_current  fan motor current
 * @param worm_motor_current  worm motor current
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bug_motor_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t wheel_motor_left_current,uint16_t wheel_motor_right_current,uint16_t fan_motor_current,uint16_t worm_motor_current)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN];
	_mav_put_uint16_t(buf, 0, wheel_motor_left_current);
	_mav_put_uint16_t(buf, 2, wheel_motor_right_current);
	_mav_put_uint16_t(buf, 4, fan_motor_current);
	_mav_put_uint16_t(buf, 6, worm_motor_current);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN);
#else
	mavlink_bug_motor_state_t packet;
	packet.wheel_motor_left_current = wheel_motor_left_current;
	packet.wheel_motor_right_current = wheel_motor_right_current;
	packet.fan_motor_current = fan_motor_current;
	packet.worm_motor_current = worm_motor_current;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_BUG_MOTOR_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN, MAVLINK_MSG_ID_BUG_MOTOR_STATE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN);
#endif
}

/**
 * @brief Encode a bug_motor_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param bug_motor_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bug_motor_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_bug_motor_state_t* bug_motor_state)
{
	return mavlink_msg_bug_motor_state_pack(system_id, component_id, msg, bug_motor_state->wheel_motor_left_current, bug_motor_state->wheel_motor_right_current, bug_motor_state->fan_motor_current, bug_motor_state->worm_motor_current);
}

/**
 * @brief Encode a bug_motor_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bug_motor_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bug_motor_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_bug_motor_state_t* bug_motor_state)
{
	return mavlink_msg_bug_motor_state_pack_chan(system_id, component_id, chan, msg, bug_motor_state->wheel_motor_left_current, bug_motor_state->wheel_motor_right_current, bug_motor_state->fan_motor_current, bug_motor_state->worm_motor_current);
}

/**
 * @brief Send a bug_motor_state message
 * @param chan MAVLink channel to send the message
 *
 * @param wheel_motor_left_current  left wheel motor current
 * @param wheel_motor_right_current  right wheel motor current
 * @param fan_motor_current  fan motor current
 * @param worm_motor_current  worm motor current
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_bug_motor_state_send(mavlink_channel_t chan, uint16_t wheel_motor_left_current, uint16_t wheel_motor_right_current, uint16_t fan_motor_current, uint16_t worm_motor_current)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN];
	_mav_put_uint16_t(buf, 0, wheel_motor_left_current);
	_mav_put_uint16_t(buf, 2, wheel_motor_right_current);
	_mav_put_uint16_t(buf, 4, fan_motor_current);
	_mav_put_uint16_t(buf, 6, worm_motor_current);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BUG_MOTOR_STATE, buf, MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN, MAVLINK_MSG_ID_BUG_MOTOR_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BUG_MOTOR_STATE, buf, MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN);
#endif
#else
	mavlink_bug_motor_state_t packet;
	packet.wheel_motor_left_current = wheel_motor_left_current;
	packet.wheel_motor_right_current = wheel_motor_right_current;
	packet.fan_motor_current = fan_motor_current;
	packet.worm_motor_current = worm_motor_current;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BUG_MOTOR_STATE, (const char *)&packet, MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN, MAVLINK_MSG_ID_BUG_MOTOR_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BUG_MOTOR_STATE, (const char *)&packet, MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_bug_motor_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t wheel_motor_left_current, uint16_t wheel_motor_right_current, uint16_t fan_motor_current, uint16_t worm_motor_current)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint16_t(buf, 0, wheel_motor_left_current);
	_mav_put_uint16_t(buf, 2, wheel_motor_right_current);
	_mav_put_uint16_t(buf, 4, fan_motor_current);
	_mav_put_uint16_t(buf, 6, worm_motor_current);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BUG_MOTOR_STATE, buf, MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN, MAVLINK_MSG_ID_BUG_MOTOR_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BUG_MOTOR_STATE, buf, MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN);
#endif
#else
	mavlink_bug_motor_state_t *packet = (mavlink_bug_motor_state_t *)msgbuf;
	packet->wheel_motor_left_current = wheel_motor_left_current;
	packet->wheel_motor_right_current = wheel_motor_right_current;
	packet->fan_motor_current = fan_motor_current;
	packet->worm_motor_current = worm_motor_current;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BUG_MOTOR_STATE, (const char *)packet, MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN, MAVLINK_MSG_ID_BUG_MOTOR_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BUG_MOTOR_STATE, (const char *)packet, MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE BUG_MOTOR_STATE UNPACKING


/**
 * @brief Get field wheel_motor_left_current from bug_motor_state message
 *
 * @return  left wheel motor current
 */
static inline uint16_t mavlink_msg_bug_motor_state_get_wheel_motor_left_current(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field wheel_motor_right_current from bug_motor_state message
 *
 * @return  right wheel motor current
 */
static inline uint16_t mavlink_msg_bug_motor_state_get_wheel_motor_right_current(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field fan_motor_current from bug_motor_state message
 *
 * @return  fan motor current
 */
static inline uint16_t mavlink_msg_bug_motor_state_get_fan_motor_current(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field worm_motor_current from bug_motor_state message
 *
 * @return  worm motor current
 */
static inline uint16_t mavlink_msg_bug_motor_state_get_worm_motor_current(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Decode a bug_motor_state message into a struct
 *
 * @param msg The message to decode
 * @param bug_motor_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_bug_motor_state_decode(const mavlink_message_t* msg, mavlink_bug_motor_state_t* bug_motor_state)
{
#if MAVLINK_NEED_BYTE_SWAP
	bug_motor_state->wheel_motor_left_current = mavlink_msg_bug_motor_state_get_wheel_motor_left_current(msg);
	bug_motor_state->wheel_motor_right_current = mavlink_msg_bug_motor_state_get_wheel_motor_right_current(msg);
	bug_motor_state->fan_motor_current = mavlink_msg_bug_motor_state_get_fan_motor_current(msg);
	bug_motor_state->worm_motor_current = mavlink_msg_bug_motor_state_get_worm_motor_current(msg);
#else
	memcpy(bug_motor_state, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_BUG_MOTOR_STATE_LEN);
#endif
}
