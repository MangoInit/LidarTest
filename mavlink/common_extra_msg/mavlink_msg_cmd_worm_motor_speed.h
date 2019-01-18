// MESSAGE CMD_WORM_MOTOR_SPEED PACKING

#define MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED 152

typedef struct __mavlink_cmd_worm_motor_speed_t
{
 int8_t worm_motor_speed; /*< worm motor speed*/
} mavlink_cmd_worm_motor_speed_t;

#define MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN 1
#define MAVLINK_MSG_ID_152_LEN 1

#define MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_CRC 165
#define MAVLINK_MSG_ID_152_CRC 165



#define MAVLINK_MESSAGE_INFO_CMD_WORM_MOTOR_SPEED { \
	"CMD_WORM_MOTOR_SPEED", \
	1, \
	{  { "worm_motor_speed", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_cmd_worm_motor_speed_t, worm_motor_speed) }, \
         } \
}


/**
 * @brief Pack a cmd_worm_motor_speed message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param worm_motor_speed worm motor speed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_worm_motor_speed_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       int8_t worm_motor_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN];
	_mav_put_int8_t(buf, 0, worm_motor_speed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN);
#else
	mavlink_cmd_worm_motor_speed_t packet;
	packet.worm_motor_speed = worm_motor_speed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN);
#endif
}

/**
 * @brief Pack a cmd_worm_motor_speed message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param worm_motor_speed worm motor speed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_worm_motor_speed_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           int8_t worm_motor_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN];
	_mav_put_int8_t(buf, 0, worm_motor_speed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN);
#else
	mavlink_cmd_worm_motor_speed_t packet;
	packet.worm_motor_speed = worm_motor_speed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN);
#endif
}

/**
 * @brief Encode a cmd_worm_motor_speed struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_worm_motor_speed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_worm_motor_speed_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_worm_motor_speed_t* cmd_worm_motor_speed)
{
	return mavlink_msg_cmd_worm_motor_speed_pack(system_id, component_id, msg, cmd_worm_motor_speed->worm_motor_speed);
}

/**
 * @brief Encode a cmd_worm_motor_speed struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_worm_motor_speed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_worm_motor_speed_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_worm_motor_speed_t* cmd_worm_motor_speed)
{
	return mavlink_msg_cmd_worm_motor_speed_pack_chan(system_id, component_id, chan, msg, cmd_worm_motor_speed->worm_motor_speed);
}

/**
 * @brief Send a cmd_worm_motor_speed message
 * @param chan MAVLink channel to send the message
 *
 * @param worm_motor_speed worm motor speed
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_worm_motor_speed_send(mavlink_channel_t chan, int8_t worm_motor_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN];
	_mav_put_int8_t(buf, 0, worm_motor_speed);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED, buf, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED, buf, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN);
#endif
#else
	mavlink_cmd_worm_motor_speed_t packet;
	packet.worm_motor_speed = worm_motor_speed;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED, (const char *)&packet, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED, (const char *)&packet, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_worm_motor_speed_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t worm_motor_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_int8_t(buf, 0, worm_motor_speed);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED, buf, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED, buf, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN);
#endif
#else
	mavlink_cmd_worm_motor_speed_t *packet = (mavlink_cmd_worm_motor_speed_t *)msgbuf;
	packet->worm_motor_speed = worm_motor_speed;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED, (const char *)packet, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED, (const char *)packet, MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE CMD_WORM_MOTOR_SPEED UNPACKING


/**
 * @brief Get field worm_motor_speed from cmd_worm_motor_speed message
 *
 * @return worm motor speed
 */
static inline int8_t mavlink_msg_cmd_worm_motor_speed_get_worm_motor_speed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  0);
}

/**
 * @brief Decode a cmd_worm_motor_speed message into a struct
 *
 * @param msg The message to decode
 * @param cmd_worm_motor_speed C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_worm_motor_speed_decode(const mavlink_message_t* msg, mavlink_cmd_worm_motor_speed_t* cmd_worm_motor_speed)
{
#if MAVLINK_NEED_BYTE_SWAP
	cmd_worm_motor_speed->worm_motor_speed = mavlink_msg_cmd_worm_motor_speed_get_worm_motor_speed(msg);
#else
	memcpy(cmd_worm_motor_speed, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_CMD_WORM_MOTOR_SPEED_LEN);
#endif
}
