// MESSAGE DISTANCE_SENSOR_DATA PACKING

#define MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA 158

typedef struct __mavlink_distance_sensor_data_t
{
 uint8_t front_distance; /*<  distance value (mm)*/
 uint8_t behind_distance; /*<  distance value (mm)*/
} mavlink_distance_sensor_data_t;

#define MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN 2
#define MAVLINK_MSG_ID_158_LEN 2

#define MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_CRC 36
#define MAVLINK_MSG_ID_158_CRC 36



#define MAVLINK_MESSAGE_INFO_DISTANCE_SENSOR_DATA { \
	"DISTANCE_SENSOR_DATA", \
	2, \
	{  { "front_distance", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_distance_sensor_data_t, front_distance) }, \
         { "behind_distance", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_distance_sensor_data_t, behind_distance) }, \
         } \
}


/**
 * @brief Pack a distance_sensor_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param front_distance  distance value (mm)
 * @param behind_distance  distance value (mm)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_distance_sensor_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t front_distance, uint8_t behind_distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN];
	_mav_put_uint8_t(buf, 0, front_distance);
	_mav_put_uint8_t(buf, 1, behind_distance);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN);
#else
	mavlink_distance_sensor_data_t packet;
	packet.front_distance = front_distance;
	packet.behind_distance = behind_distance;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN);
#endif
}

/**
 * @brief Pack a distance_sensor_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param front_distance  distance value (mm)
 * @param behind_distance  distance value (mm)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_distance_sensor_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t front_distance,uint8_t behind_distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN];
	_mav_put_uint8_t(buf, 0, front_distance);
	_mav_put_uint8_t(buf, 1, behind_distance);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN);
#else
	mavlink_distance_sensor_data_t packet;
	packet.front_distance = front_distance;
	packet.behind_distance = behind_distance;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN);
#endif
}

/**
 * @brief Encode a distance_sensor_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param distance_sensor_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_distance_sensor_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_distance_sensor_data_t* distance_sensor_data)
{
	return mavlink_msg_distance_sensor_data_pack(system_id, component_id, msg, distance_sensor_data->front_distance, distance_sensor_data->behind_distance);
}

/**
 * @brief Encode a distance_sensor_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param distance_sensor_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_distance_sensor_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_distance_sensor_data_t* distance_sensor_data)
{
	return mavlink_msg_distance_sensor_data_pack_chan(system_id, component_id, chan, msg, distance_sensor_data->front_distance, distance_sensor_data->behind_distance);
}

/**
 * @brief Send a distance_sensor_data message
 * @param chan MAVLink channel to send the message
 *
 * @param front_distance  distance value (mm)
 * @param behind_distance  distance value (mm)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_distance_sensor_data_send(mavlink_channel_t chan, uint8_t front_distance, uint8_t behind_distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN];
	_mav_put_uint8_t(buf, 0, front_distance);
	_mav_put_uint8_t(buf, 1, behind_distance);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA, buf, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA, buf, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN);
#endif
#else
	mavlink_distance_sensor_data_t packet;
	packet.front_distance = front_distance;
	packet.behind_distance = behind_distance;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA, (const char *)&packet, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA, (const char *)&packet, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_distance_sensor_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t front_distance, uint8_t behind_distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, front_distance);
	_mav_put_uint8_t(buf, 1, behind_distance);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA, buf, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA, buf, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN);
#endif
#else
	mavlink_distance_sensor_data_t *packet = (mavlink_distance_sensor_data_t *)msgbuf;
	packet->front_distance = front_distance;
	packet->behind_distance = behind_distance;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA, (const char *)packet, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA, (const char *)packet, MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE DISTANCE_SENSOR_DATA UNPACKING


/**
 * @brief Get field front_distance from distance_sensor_data message
 *
 * @return  distance value (mm)
 */
static inline uint8_t mavlink_msg_distance_sensor_data_get_front_distance(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field behind_distance from distance_sensor_data message
 *
 * @return  distance value (mm)
 */
static inline uint8_t mavlink_msg_distance_sensor_data_get_behind_distance(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a distance_sensor_data message into a struct
 *
 * @param msg The message to decode
 * @param distance_sensor_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_distance_sensor_data_decode(const mavlink_message_t* msg, mavlink_distance_sensor_data_t* distance_sensor_data)
{
#if MAVLINK_NEED_BYTE_SWAP
	distance_sensor_data->front_distance = mavlink_msg_distance_sensor_data_get_front_distance(msg);
	distance_sensor_data->behind_distance = mavlink_msg_distance_sensor_data_get_behind_distance(msg);
#else
	memcpy(distance_sensor_data, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_DISTANCE_SENSOR_DATA_LEN);
#endif
}
