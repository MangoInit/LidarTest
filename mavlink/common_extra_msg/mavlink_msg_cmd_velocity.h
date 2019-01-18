// MESSAGE CMD_VELOCITY PACKING

#define MAVLINK_MSG_ID_CMD_VELOCITY 150

typedef struct __mavlink_cmd_velocity_t
{
 int8_t linear_velocity; /*< linear velocity in yaw plane (m/sec) getting from wheels*/
 int8_t angular_velocity; /*< angular velocity around yaw axis (rad /sec) getting from wheels*/
} mavlink_cmd_velocity_t;

#define MAVLINK_MSG_ID_CMD_VELOCITY_LEN 2
#define MAVLINK_MSG_ID_150_LEN 2

#define MAVLINK_MSG_ID_CMD_VELOCITY_CRC 64
#define MAVLINK_MSG_ID_150_CRC 64



#define MAVLINK_MESSAGE_INFO_CMD_VELOCITY { \
	"CMD_VELOCITY", \
	2, \
	{  { "linear_velocity", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_cmd_velocity_t, linear_velocity) }, \
         { "angular_velocity", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_cmd_velocity_t, angular_velocity) }, \
         } \
}


/**
 * @brief Pack a cmd_velocity message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param linear_velocity linear velocity in yaw plane (m/sec) getting from wheels
 * @param angular_velocity angular velocity around yaw axis (rad /sec) getting from wheels
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_velocity_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       int8_t linear_velocity, int8_t angular_velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CMD_VELOCITY_LEN];
	_mav_put_int8_t(buf, 0, linear_velocity);
	_mav_put_int8_t(buf, 1, angular_velocity);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_VELOCITY_LEN);
#else
	mavlink_cmd_velocity_t packet;
	packet.linear_velocity = linear_velocity;
	packet.angular_velocity = angular_velocity;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_VELOCITY_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CMD_VELOCITY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_VELOCITY_LEN, MAVLINK_MSG_ID_CMD_VELOCITY_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_VELOCITY_LEN);
#endif
}

/**
 * @brief Pack a cmd_velocity message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param linear_velocity linear velocity in yaw plane (m/sec) getting from wheels
 * @param angular_velocity angular velocity around yaw axis (rad /sec) getting from wheels
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_velocity_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           int8_t linear_velocity,int8_t angular_velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CMD_VELOCITY_LEN];
	_mav_put_int8_t(buf, 0, linear_velocity);
	_mav_put_int8_t(buf, 1, angular_velocity);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_VELOCITY_LEN);
#else
	mavlink_cmd_velocity_t packet;
	packet.linear_velocity = linear_velocity;
	packet.angular_velocity = angular_velocity;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_VELOCITY_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CMD_VELOCITY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_VELOCITY_LEN, MAVLINK_MSG_ID_CMD_VELOCITY_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_VELOCITY_LEN);
#endif
}

/**
 * @brief Encode a cmd_velocity struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_velocity C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_velocity_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_velocity_t* cmd_velocity)
{
	return mavlink_msg_cmd_velocity_pack(system_id, component_id, msg, cmd_velocity->linear_velocity, cmd_velocity->angular_velocity);
}

/**
 * @brief Encode a cmd_velocity struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_velocity C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_velocity_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_velocity_t* cmd_velocity)
{
	return mavlink_msg_cmd_velocity_pack_chan(system_id, component_id, chan, msg, cmd_velocity->linear_velocity, cmd_velocity->angular_velocity);
}

/**
 * @brief Send a cmd_velocity message
 * @param chan MAVLink channel to send the message
 *
 * @param linear_velocity linear velocity in yaw plane (m/sec) getting from wheels
 * @param angular_velocity angular velocity around yaw axis (rad /sec) getting from wheels
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_velocity_send(mavlink_channel_t chan, int8_t linear_velocity, int8_t angular_velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CMD_VELOCITY_LEN];
	_mav_put_int8_t(buf, 0, linear_velocity);
	_mav_put_int8_t(buf, 1, angular_velocity);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_VELOCITY, buf, MAVLINK_MSG_ID_CMD_VELOCITY_LEN, MAVLINK_MSG_ID_CMD_VELOCITY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_VELOCITY, buf, MAVLINK_MSG_ID_CMD_VELOCITY_LEN);
#endif
#else
	mavlink_cmd_velocity_t packet;
	packet.linear_velocity = linear_velocity;
	packet.angular_velocity = angular_velocity;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_VELOCITY, (const char *)&packet, MAVLINK_MSG_ID_CMD_VELOCITY_LEN, MAVLINK_MSG_ID_CMD_VELOCITY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_VELOCITY, (const char *)&packet, MAVLINK_MSG_ID_CMD_VELOCITY_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_CMD_VELOCITY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_velocity_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t linear_velocity, int8_t angular_velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_int8_t(buf, 0, linear_velocity);
	_mav_put_int8_t(buf, 1, angular_velocity);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_VELOCITY, buf, MAVLINK_MSG_ID_CMD_VELOCITY_LEN, MAVLINK_MSG_ID_CMD_VELOCITY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_VELOCITY, buf, MAVLINK_MSG_ID_CMD_VELOCITY_LEN);
#endif
#else
	mavlink_cmd_velocity_t *packet = (mavlink_cmd_velocity_t *)msgbuf;
	packet->linear_velocity = linear_velocity;
	packet->angular_velocity = angular_velocity;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_VELOCITY, (const char *)packet, MAVLINK_MSG_ID_CMD_VELOCITY_LEN, MAVLINK_MSG_ID_CMD_VELOCITY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_VELOCITY, (const char *)packet, MAVLINK_MSG_ID_CMD_VELOCITY_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE CMD_VELOCITY UNPACKING


/**
 * @brief Get field linear_velocity from cmd_velocity message
 *
 * @return linear velocity in yaw plane (m/sec) getting from wheels
 */
static inline int8_t mavlink_msg_cmd_velocity_get_linear_velocity(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  0);
}

/**
 * @brief Get field angular_velocity from cmd_velocity message
 *
 * @return angular velocity around yaw axis (rad /sec) getting from wheels
 */
static inline int8_t mavlink_msg_cmd_velocity_get_angular_velocity(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  1);
}

/**
 * @brief Decode a cmd_velocity message into a struct
 *
 * @param msg The message to decode
 * @param cmd_velocity C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_velocity_decode(const mavlink_message_t* msg, mavlink_cmd_velocity_t* cmd_velocity)
{
#if MAVLINK_NEED_BYTE_SWAP
	cmd_velocity->linear_velocity = mavlink_msg_cmd_velocity_get_linear_velocity(msg);
	cmd_velocity->angular_velocity = mavlink_msg_cmd_velocity_get_angular_velocity(msg);
#else
	memcpy(cmd_velocity, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_CMD_VELOCITY_LEN);
#endif
}
