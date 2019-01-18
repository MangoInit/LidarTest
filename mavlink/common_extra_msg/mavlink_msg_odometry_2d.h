// MESSAGE ODOMETRY_2D PACKING

#define MAVLINK_MSG_ID_ODOMETRY_2D 157

typedef struct __mavlink_odometry_2d_t
{
 uint32_t timestamp; /*< Timestamp (milliseconds since system boot)*/
 float linear_velocity; /*< linear velocity in yaw plane (m/sec) getting from wheels*/
 float angular_velocity; /*< angular velocity around yaw axis (degree /sec) getting from wheels*/
 float x; /*<  world coordinate x (m) getting from wheels*/
 float y; /*<  world coordinate y (m) getting from wheels*/
 float yaw; /*<  robot world coordinate x (rad) getting from wheels*/
} mavlink_odometry_2d_t;

#define MAVLINK_MSG_ID_ODOMETRY_2D_LEN 24
#define MAVLINK_MSG_ID_157_LEN 24

#define MAVLINK_MSG_ID_ODOMETRY_2D_CRC 178
#define MAVLINK_MSG_ID_157_CRC 178



#define MAVLINK_MESSAGE_INFO_ODOMETRY_2D { \
	"ODOMETRY_2D", \
	6, \
	{  { "timestamp", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_odometry_2d_t, timestamp) }, \
         { "linear_velocity", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_odometry_2d_t, linear_velocity) }, \
         { "angular_velocity", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_odometry_2d_t, angular_velocity) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_odometry_2d_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_odometry_2d_t, y) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_odometry_2d_t, yaw) }, \
         } \
}


/**
 * @brief Pack a odometry_2d message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp Timestamp (milliseconds since system boot)
 * @param linear_velocity linear velocity in yaw plane (m/sec) getting from wheels
 * @param angular_velocity angular velocity around yaw axis (degree /sec) getting from wheels
 * @param x  world coordinate x (m) getting from wheels
 * @param y  world coordinate y (m) getting from wheels
 * @param yaw  robot world coordinate x (rad) getting from wheels
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_odometry_2d_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t timestamp, float linear_velocity, float angular_velocity, float x, float y, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ODOMETRY_2D_LEN];
	_mav_put_uint32_t(buf, 0, timestamp);
	_mav_put_float(buf, 4, linear_velocity);
	_mav_put_float(buf, 8, angular_velocity);
	_mav_put_float(buf, 12, x);
	_mav_put_float(buf, 16, y);
	_mav_put_float(buf, 20, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ODOMETRY_2D_LEN);
#else
	mavlink_odometry_2d_t packet;
	packet.timestamp = timestamp;
	packet.linear_velocity = linear_velocity;
	packet.angular_velocity = angular_velocity;
	packet.x = x;
	packet.y = y;
	packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ODOMETRY_2D_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ODOMETRY_2D;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ODOMETRY_2D_LEN, MAVLINK_MSG_ID_ODOMETRY_2D_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ODOMETRY_2D_LEN);
#endif
}

/**
 * @brief Pack a odometry_2d message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp Timestamp (milliseconds since system boot)
 * @param linear_velocity linear velocity in yaw plane (m/sec) getting from wheels
 * @param angular_velocity angular velocity around yaw axis (degree /sec) getting from wheels
 * @param x  world coordinate x (m) getting from wheels
 * @param y  world coordinate y (m) getting from wheels
 * @param yaw  robot world coordinate x (rad) getting from wheels
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_odometry_2d_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t timestamp,float linear_velocity,float angular_velocity,float x,float y,float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ODOMETRY_2D_LEN];
	_mav_put_uint32_t(buf, 0, timestamp);
	_mav_put_float(buf, 4, linear_velocity);
	_mav_put_float(buf, 8, angular_velocity);
	_mav_put_float(buf, 12, x);
	_mav_put_float(buf, 16, y);
	_mav_put_float(buf, 20, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ODOMETRY_2D_LEN);
#else
	mavlink_odometry_2d_t packet;
	packet.timestamp = timestamp;
	packet.linear_velocity = linear_velocity;
	packet.angular_velocity = angular_velocity;
	packet.x = x;
	packet.y = y;
	packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ODOMETRY_2D_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ODOMETRY_2D;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ODOMETRY_2D_LEN, MAVLINK_MSG_ID_ODOMETRY_2D_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ODOMETRY_2D_LEN);
#endif
}

/**
 * @brief Encode a odometry_2d struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param odometry_2d C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_odometry_2d_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_odometry_2d_t* odometry_2d)
{
	return mavlink_msg_odometry_2d_pack(system_id, component_id, msg, odometry_2d->timestamp, odometry_2d->linear_velocity, odometry_2d->angular_velocity, odometry_2d->x, odometry_2d->y, odometry_2d->yaw);
}

/**
 * @brief Encode a odometry_2d struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param odometry_2d C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_odometry_2d_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_odometry_2d_t* odometry_2d)
{
	return mavlink_msg_odometry_2d_pack_chan(system_id, component_id, chan, msg, odometry_2d->timestamp, odometry_2d->linear_velocity, odometry_2d->angular_velocity, odometry_2d->x, odometry_2d->y, odometry_2d->yaw);
}

/**
 * @brief Send a odometry_2d message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp Timestamp (milliseconds since system boot)
 * @param linear_velocity linear velocity in yaw plane (m/sec) getting from wheels
 * @param angular_velocity angular velocity around yaw axis (degree /sec) getting from wheels
 * @param x  world coordinate x (m) getting from wheels
 * @param y  world coordinate y (m) getting from wheels
 * @param yaw  robot world coordinate x (rad) getting from wheels
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_odometry_2d_send(mavlink_channel_t chan, uint32_t timestamp, float linear_velocity, float angular_velocity, float x, float y, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ODOMETRY_2D_LEN];
	_mav_put_uint32_t(buf, 0, timestamp);
	_mav_put_float(buf, 4, linear_velocity);
	_mav_put_float(buf, 8, angular_velocity);
	_mav_put_float(buf, 12, x);
	_mav_put_float(buf, 16, y);
	_mav_put_float(buf, 20, yaw);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODOMETRY_2D, buf, MAVLINK_MSG_ID_ODOMETRY_2D_LEN, MAVLINK_MSG_ID_ODOMETRY_2D_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODOMETRY_2D, buf, MAVLINK_MSG_ID_ODOMETRY_2D_LEN);
#endif
#else
	mavlink_odometry_2d_t packet;
	packet.timestamp = timestamp;
	packet.linear_velocity = linear_velocity;
	packet.angular_velocity = angular_velocity;
	packet.x = x;
	packet.y = y;
	packet.yaw = yaw;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODOMETRY_2D, (const char *)&packet, MAVLINK_MSG_ID_ODOMETRY_2D_LEN, MAVLINK_MSG_ID_ODOMETRY_2D_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODOMETRY_2D, (const char *)&packet, MAVLINK_MSG_ID_ODOMETRY_2D_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ODOMETRY_2D_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_odometry_2d_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t timestamp, float linear_velocity, float angular_velocity, float x, float y, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, timestamp);
	_mav_put_float(buf, 4, linear_velocity);
	_mav_put_float(buf, 8, angular_velocity);
	_mav_put_float(buf, 12, x);
	_mav_put_float(buf, 16, y);
	_mav_put_float(buf, 20, yaw);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODOMETRY_2D, buf, MAVLINK_MSG_ID_ODOMETRY_2D_LEN, MAVLINK_MSG_ID_ODOMETRY_2D_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODOMETRY_2D, buf, MAVLINK_MSG_ID_ODOMETRY_2D_LEN);
#endif
#else
	mavlink_odometry_2d_t *packet = (mavlink_odometry_2d_t *)msgbuf;
	packet->timestamp = timestamp;
	packet->linear_velocity = linear_velocity;
	packet->angular_velocity = angular_velocity;
	packet->x = x;
	packet->y = y;
	packet->yaw = yaw;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODOMETRY_2D, (const char *)packet, MAVLINK_MSG_ID_ODOMETRY_2D_LEN, MAVLINK_MSG_ID_ODOMETRY_2D_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODOMETRY_2D, (const char *)packet, MAVLINK_MSG_ID_ODOMETRY_2D_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ODOMETRY_2D UNPACKING


/**
 * @brief Get field timestamp from odometry_2d message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_odometry_2d_get_timestamp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field linear_velocity from odometry_2d message
 *
 * @return linear velocity in yaw plane (m/sec) getting from wheels
 */
static inline float mavlink_msg_odometry_2d_get_linear_velocity(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field angular_velocity from odometry_2d message
 *
 * @return angular velocity around yaw axis (degree /sec) getting from wheels
 */
static inline float mavlink_msg_odometry_2d_get_angular_velocity(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field x from odometry_2d message
 *
 * @return  world coordinate x (m) getting from wheels
 */
static inline float mavlink_msg_odometry_2d_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field y from odometry_2d message
 *
 * @return  world coordinate y (m) getting from wheels
 */
static inline float mavlink_msg_odometry_2d_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field yaw from odometry_2d message
 *
 * @return  robot world coordinate x (rad) getting from wheels
 */
static inline float mavlink_msg_odometry_2d_get_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a odometry_2d message into a struct
 *
 * @param msg The message to decode
 * @param odometry_2d C-struct to decode the message contents into
 */
static inline void mavlink_msg_odometry_2d_decode(const mavlink_message_t* msg, mavlink_odometry_2d_t* odometry_2d)
{
#if MAVLINK_NEED_BYTE_SWAP
	odometry_2d->timestamp = mavlink_msg_odometry_2d_get_timestamp(msg);
	odometry_2d->linear_velocity = mavlink_msg_odometry_2d_get_linear_velocity(msg);
	odometry_2d->angular_velocity = mavlink_msg_odometry_2d_get_angular_velocity(msg);
	odometry_2d->x = mavlink_msg_odometry_2d_get_x(msg);
	odometry_2d->y = mavlink_msg_odometry_2d_get_y(msg);
	odometry_2d->yaw = mavlink_msg_odometry_2d_get_yaw(msg);
#else
	memcpy(odometry_2d, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ODOMETRY_2D_LEN);
#endif
}
