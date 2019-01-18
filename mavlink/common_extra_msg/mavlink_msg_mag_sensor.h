// MESSAGE MAG_SENSOR PACKING

#define MAVLINK_MSG_ID_MAG_SENSOR 159

typedef struct __mavlink_mag_sensor_t
{
 float angle; /*< */
 int16_t model ; /*< */
} mavlink_mag_sensor_t;

#define MAVLINK_MSG_ID_MAG_SENSOR_LEN 6
#define MAVLINK_MSG_ID_159_LEN 6

#define MAVLINK_MSG_ID_MAG_SENSOR_CRC 91
#define MAVLINK_MSG_ID_159_CRC 91



#define MAVLINK_MESSAGE_INFO_MAG_SENSOR { \
	"MAG_SENSOR", \
	2, \
	{  { "angle", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_mag_sensor_t, angle) }, \
         { "model ", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_mag_sensor_t, model ) }, \
         } \
}


/**
 * @brief Pack a mag_sensor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param model  
 * @param angle 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mag_sensor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       int16_t model , float angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_MAG_SENSOR_LEN];
	_mav_put_float(buf, 0, angle);
	_mav_put_int16_t(buf, 4, model );

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAG_SENSOR_LEN);
#else
	mavlink_mag_sensor_t packet;
	packet.angle = angle;
	packet.model  = model ;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAG_SENSOR_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_MAG_SENSOR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MAG_SENSOR_LEN, MAVLINK_MSG_ID_MAG_SENSOR_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MAG_SENSOR_LEN);
#endif
}

/**
 * @brief Pack a mag_sensor message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param model  
 * @param angle 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mag_sensor_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           int16_t model ,float angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_MAG_SENSOR_LEN];
	_mav_put_float(buf, 0, angle);
	_mav_put_int16_t(buf, 4, model );

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAG_SENSOR_LEN);
#else
	mavlink_mag_sensor_t packet;
	packet.angle = angle;
	packet.model  = model ;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAG_SENSOR_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_MAG_SENSOR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MAG_SENSOR_LEN, MAVLINK_MSG_ID_MAG_SENSOR_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MAG_SENSOR_LEN);
#endif
}

/**
 * @brief Encode a mag_sensor struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mag_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mag_sensor_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mag_sensor_t* mag_sensor)
{
	return mavlink_msg_mag_sensor_pack(system_id, component_id, msg, mag_sensor->model , mag_sensor->angle);
}

/**
 * @brief Encode a mag_sensor struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mag_sensor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mag_sensor_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mag_sensor_t* mag_sensor)
{
	return mavlink_msg_mag_sensor_pack_chan(system_id, component_id, chan, msg, mag_sensor->model , mag_sensor->angle);
}

/**
 * @brief Send a mag_sensor message
 * @param chan MAVLink channel to send the message
 *
 * @param model  
 * @param angle 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mag_sensor_send(mavlink_channel_t chan, int16_t model , float angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_MAG_SENSOR_LEN];
	_mav_put_float(buf, 0, angle);
	_mav_put_int16_t(buf, 4, model );

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAG_SENSOR, buf, MAVLINK_MSG_ID_MAG_SENSOR_LEN, MAVLINK_MSG_ID_MAG_SENSOR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAG_SENSOR, buf, MAVLINK_MSG_ID_MAG_SENSOR_LEN);
#endif
#else
	mavlink_mag_sensor_t packet;
	packet.angle = angle;
	packet.model  = model ;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAG_SENSOR, (const char *)&packet, MAVLINK_MSG_ID_MAG_SENSOR_LEN, MAVLINK_MSG_ID_MAG_SENSOR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAG_SENSOR, (const char *)&packet, MAVLINK_MSG_ID_MAG_SENSOR_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_MAG_SENSOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mag_sensor_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t model , float angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, angle);
	_mav_put_int16_t(buf, 4, model );

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAG_SENSOR, buf, MAVLINK_MSG_ID_MAG_SENSOR_LEN, MAVLINK_MSG_ID_MAG_SENSOR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAG_SENSOR, buf, MAVLINK_MSG_ID_MAG_SENSOR_LEN);
#endif
#else
	mavlink_mag_sensor_t *packet = (mavlink_mag_sensor_t *)msgbuf;
	packet->angle = angle;
	packet->model  = model ;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAG_SENSOR, (const char *)packet, MAVLINK_MSG_ID_MAG_SENSOR_LEN, MAVLINK_MSG_ID_MAG_SENSOR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAG_SENSOR, (const char *)packet, MAVLINK_MSG_ID_MAG_SENSOR_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE MAG_SENSOR UNPACKING


/**
 * @brief Get field model  from mag_sensor message
 *
 * @return 
 */
static inline int16_t mavlink_msg_mag_sensor_get_model (const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field angle from mag_sensor message
 *
 * @return 
 */
static inline float mavlink_msg_mag_sensor_get_angle(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a mag_sensor message into a struct
 *
 * @param msg The message to decode
 * @param mag_sensor C-struct to decode the message contents into
 */
static inline void mavlink_msg_mag_sensor_decode(const mavlink_message_t* msg, mavlink_mag_sensor_t* mag_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP
	mag_sensor->angle = mavlink_msg_mag_sensor_get_angle(msg);
	mag_sensor->model  = mavlink_msg_mag_sensor_get_model (msg);
#else
	memcpy(mag_sensor, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_MAG_SENSOR_LEN);
#endif
}
