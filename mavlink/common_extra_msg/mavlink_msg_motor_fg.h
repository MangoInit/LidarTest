// MESSAGE Motor_FG PACKING

#define MAVLINK_MSG_ID_Motor_FG 165

typedef struct __mavlink_motor_fg_t
{
 int16_t worm_motor_speed; /*<  worm motor speed*/
 int16_t fan_motor_speed; /*<  fan motor speed*/
} mavlink_motor_fg_t;

#define MAVLINK_MSG_ID_Motor_FG_LEN 4
#define MAVLINK_MSG_ID_165_LEN 4

#define MAVLINK_MSG_ID_Motor_FG_CRC 115
#define MAVLINK_MSG_ID_165_CRC 115



#define MAVLINK_MESSAGE_INFO_Motor_FG { \
	"Motor_FG", \
	2, \
	{  { "worm_motor_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_motor_fg_t, worm_motor_speed) }, \
         { "fan_motor_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_motor_fg_t, fan_motor_speed) }, \
         } \
}


/**
 * @brief Pack a motor_fg message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param worm_motor_speed  worm motor speed
 * @param fan_motor_speed  fan motor speed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_motor_fg_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       int16_t worm_motor_speed, int16_t fan_motor_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_Motor_FG_LEN];
	_mav_put_int16_t(buf, 0, worm_motor_speed);
	_mav_put_int16_t(buf, 2, fan_motor_speed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Motor_FG_LEN);
#else
	mavlink_motor_fg_t packet;
	packet.worm_motor_speed = worm_motor_speed;
	packet.fan_motor_speed = fan_motor_speed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Motor_FG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_Motor_FG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Motor_FG_LEN, MAVLINK_MSG_ID_Motor_FG_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Motor_FG_LEN);
#endif
}

/**
 * @brief Pack a motor_fg message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param worm_motor_speed  worm motor speed
 * @param fan_motor_speed  fan motor speed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_motor_fg_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           int16_t worm_motor_speed,int16_t fan_motor_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_Motor_FG_LEN];
	_mav_put_int16_t(buf, 0, worm_motor_speed);
	_mav_put_int16_t(buf, 2, fan_motor_speed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Motor_FG_LEN);
#else
	mavlink_motor_fg_t packet;
	packet.worm_motor_speed = worm_motor_speed;
	packet.fan_motor_speed = fan_motor_speed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Motor_FG_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_Motor_FG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Motor_FG_LEN, MAVLINK_MSG_ID_Motor_FG_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Motor_FG_LEN);
#endif
}

/**
 * @brief Encode a motor_fg struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param motor_fg C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_motor_fg_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_motor_fg_t* motor_fg)
{
	return mavlink_msg_motor_fg_pack(system_id, component_id, msg, motor_fg->worm_motor_speed, motor_fg->fan_motor_speed);
}

/**
 * @brief Encode a motor_fg struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param motor_fg C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_motor_fg_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_motor_fg_t* motor_fg)
{
	return mavlink_msg_motor_fg_pack_chan(system_id, component_id, chan, msg, motor_fg->worm_motor_speed, motor_fg->fan_motor_speed);
}

/**
 * @brief Send a motor_fg message
 * @param chan MAVLink channel to send the message
 *
 * @param worm_motor_speed  worm motor speed
 * @param fan_motor_speed  fan motor speed
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_motor_fg_send(mavlink_channel_t chan, int16_t worm_motor_speed, int16_t fan_motor_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_Motor_FG_LEN];
	_mav_put_int16_t(buf, 0, worm_motor_speed);
	_mav_put_int16_t(buf, 2, fan_motor_speed);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Motor_FG, buf, MAVLINK_MSG_ID_Motor_FG_LEN, MAVLINK_MSG_ID_Motor_FG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Motor_FG, buf, MAVLINK_MSG_ID_Motor_FG_LEN);
#endif
#else
	mavlink_motor_fg_t packet;
	packet.worm_motor_speed = worm_motor_speed;
	packet.fan_motor_speed = fan_motor_speed;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Motor_FG, (const char *)&packet, MAVLINK_MSG_ID_Motor_FG_LEN, MAVLINK_MSG_ID_Motor_FG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Motor_FG, (const char *)&packet, MAVLINK_MSG_ID_Motor_FG_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_Motor_FG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_motor_fg_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t worm_motor_speed, int16_t fan_motor_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_int16_t(buf, 0, worm_motor_speed);
	_mav_put_int16_t(buf, 2, fan_motor_speed);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Motor_FG, buf, MAVLINK_MSG_ID_Motor_FG_LEN, MAVLINK_MSG_ID_Motor_FG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Motor_FG, buf, MAVLINK_MSG_ID_Motor_FG_LEN);
#endif
#else
	mavlink_motor_fg_t *packet = (mavlink_motor_fg_t *)msgbuf;
	packet->worm_motor_speed = worm_motor_speed;
	packet->fan_motor_speed = fan_motor_speed;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Motor_FG, (const char *)packet, MAVLINK_MSG_ID_Motor_FG_LEN, MAVLINK_MSG_ID_Motor_FG_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Motor_FG, (const char *)packet, MAVLINK_MSG_ID_Motor_FG_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE Motor_FG UNPACKING


/**
 * @brief Get field worm_motor_speed from motor_fg message
 *
 * @return  worm motor speed
 */
static inline int16_t mavlink_msg_motor_fg_get_worm_motor_speed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field fan_motor_speed from motor_fg message
 *
 * @return  fan motor speed
 */
static inline int16_t mavlink_msg_motor_fg_get_fan_motor_speed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Decode a motor_fg message into a struct
 *
 * @param msg The message to decode
 * @param motor_fg C-struct to decode the message contents into
 */
static inline void mavlink_msg_motor_fg_decode(const mavlink_message_t* msg, mavlink_motor_fg_t* motor_fg)
{
#if MAVLINK_NEED_BYTE_SWAP
	motor_fg->worm_motor_speed = mavlink_msg_motor_fg_get_worm_motor_speed(msg);
	motor_fg->fan_motor_speed = mavlink_msg_motor_fg_get_fan_motor_speed(msg);
#else
	memcpy(motor_fg, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_Motor_FG_LEN);
#endif
}
