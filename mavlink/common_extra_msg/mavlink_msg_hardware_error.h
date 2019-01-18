// MESSAGE HARDWARE_ERROR PACKING

#define MAVLINK_MSG_ID_HARDWARE_ERROR 169

typedef struct __mavlink_hardware_error_t
{
 uint8_t motor; /*< 0 for ok,1 for warning*/
 uint8_t sensor; /*< 0 for ok,1 for warning*/
} mavlink_hardware_error_t;

#define MAVLINK_MSG_ID_HARDWARE_ERROR_LEN 2
#define MAVLINK_MSG_ID_169_LEN 2

#define MAVLINK_MSG_ID_HARDWARE_ERROR_CRC 240
#define MAVLINK_MSG_ID_169_CRC 240



#define MAVLINK_MESSAGE_INFO_HARDWARE_ERROR { \
	"HARDWARE_ERROR", \
	2, \
	{  { "motor", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_hardware_error_t, motor) }, \
         { "sensor", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_hardware_error_t, sensor) }, \
         } \
}


/**
 * @brief Pack a hardware_error message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param motor 0 for ok,1 for warning
 * @param sensor 0 for ok,1 for warning
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hardware_error_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t motor, uint8_t sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_HARDWARE_ERROR_LEN];
	_mav_put_uint8_t(buf, 0, motor);
	_mav_put_uint8_t(buf, 1, sensor);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HARDWARE_ERROR_LEN);
#else
	mavlink_hardware_error_t packet;
	packet.motor = motor;
	packet.sensor = sensor;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HARDWARE_ERROR_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_HARDWARE_ERROR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HARDWARE_ERROR_LEN, MAVLINK_MSG_ID_HARDWARE_ERROR_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HARDWARE_ERROR_LEN);
#endif
}

/**
 * @brief Pack a hardware_error message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param motor 0 for ok,1 for warning
 * @param sensor 0 for ok,1 for warning
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hardware_error_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t motor,uint8_t sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_HARDWARE_ERROR_LEN];
	_mav_put_uint8_t(buf, 0, motor);
	_mav_put_uint8_t(buf, 1, sensor);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HARDWARE_ERROR_LEN);
#else
	mavlink_hardware_error_t packet;
	packet.motor = motor;
	packet.sensor = sensor;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HARDWARE_ERROR_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_HARDWARE_ERROR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HARDWARE_ERROR_LEN, MAVLINK_MSG_ID_HARDWARE_ERROR_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HARDWARE_ERROR_LEN);
#endif
}

/**
 * @brief Encode a hardware_error struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hardware_error C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hardware_error_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hardware_error_t* hardware_error)
{
	return mavlink_msg_hardware_error_pack(system_id, component_id, msg, hardware_error->motor, hardware_error->sensor);
}

/**
 * @brief Encode a hardware_error struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hardware_error C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hardware_error_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hardware_error_t* hardware_error)
{
	return mavlink_msg_hardware_error_pack_chan(system_id, component_id, chan, msg, hardware_error->motor, hardware_error->sensor);
}

/**
 * @brief Send a hardware_error message
 * @param chan MAVLink channel to send the message
 *
 * @param motor 0 for ok,1 for warning
 * @param sensor 0 for ok,1 for warning
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hardware_error_send(mavlink_channel_t chan, uint8_t motor, uint8_t sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_HARDWARE_ERROR_LEN];
	_mav_put_uint8_t(buf, 0, motor);
	_mav_put_uint8_t(buf, 1, sensor);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HARDWARE_ERROR, buf, MAVLINK_MSG_ID_HARDWARE_ERROR_LEN, MAVLINK_MSG_ID_HARDWARE_ERROR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HARDWARE_ERROR, buf, MAVLINK_MSG_ID_HARDWARE_ERROR_LEN);
#endif
#else
	mavlink_hardware_error_t packet;
	packet.motor = motor;
	packet.sensor = sensor;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HARDWARE_ERROR, (const char *)&packet, MAVLINK_MSG_ID_HARDWARE_ERROR_LEN, MAVLINK_MSG_ID_HARDWARE_ERROR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HARDWARE_ERROR, (const char *)&packet, MAVLINK_MSG_ID_HARDWARE_ERROR_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_HARDWARE_ERROR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hardware_error_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t motor, uint8_t sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, motor);
	_mav_put_uint8_t(buf, 1, sensor);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HARDWARE_ERROR, buf, MAVLINK_MSG_ID_HARDWARE_ERROR_LEN, MAVLINK_MSG_ID_HARDWARE_ERROR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HARDWARE_ERROR, buf, MAVLINK_MSG_ID_HARDWARE_ERROR_LEN);
#endif
#else
	mavlink_hardware_error_t *packet = (mavlink_hardware_error_t *)msgbuf;
	packet->motor = motor;
	packet->sensor = sensor;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HARDWARE_ERROR, (const char *)packet, MAVLINK_MSG_ID_HARDWARE_ERROR_LEN, MAVLINK_MSG_ID_HARDWARE_ERROR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HARDWARE_ERROR, (const char *)packet, MAVLINK_MSG_ID_HARDWARE_ERROR_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE HARDWARE_ERROR UNPACKING


/**
 * @brief Get field motor from hardware_error message
 *
 * @return 0 for ok,1 for warning
 */
static inline uint8_t mavlink_msg_hardware_error_get_motor(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field sensor from hardware_error message
 *
 * @return 0 for ok,1 for warning
 */
static inline uint8_t mavlink_msg_hardware_error_get_sensor(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a hardware_error message into a struct
 *
 * @param msg The message to decode
 * @param hardware_error C-struct to decode the message contents into
 */
static inline void mavlink_msg_hardware_error_decode(const mavlink_message_t* msg, mavlink_hardware_error_t* hardware_error)
{
#if MAVLINK_NEED_BYTE_SWAP
	hardware_error->motor = mavlink_msg_hardware_error_get_motor(msg);
	hardware_error->sensor = mavlink_msg_hardware_error_get_sensor(msg);
#else
	memcpy(hardware_error, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_HARDWARE_ERROR_LEN);
#endif
}
