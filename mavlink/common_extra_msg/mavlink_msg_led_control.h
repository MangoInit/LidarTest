// MESSAGE LED_CONTROL PACKING

#define MAVLINK_MSG_ID_LED_CONTROL 167

typedef struct __mavlink_led_control_t
{
 uint8_t color; /*< led color which you control*/
 uint8_t mode; /*< led state:open close blink breathing*/
 uint8_t freque; /*< freque*/
} mavlink_led_control_t;

#define MAVLINK_MSG_ID_LED_CONTROL_LEN 3
#define MAVLINK_MSG_ID_167_LEN 3

#define MAVLINK_MSG_ID_LED_CONTROL_CRC 25
#define MAVLINK_MSG_ID_167_CRC 25



#define MAVLINK_MESSAGE_INFO_LED_CONTROL { \
	"LED_CONTROL", \
	3, \
	{  { "color", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_led_control_t, color) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_led_control_t, mode) }, \
         { "freque", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_led_control_t, freque) }, \
         } \
}


/**
 * @brief Pack a led_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param color led color which you control
 * @param mode led state:open close blink breathing
 * @param freque freque
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_led_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t color, uint8_t mode, uint8_t freque)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_LED_CONTROL_LEN];
	_mav_put_uint8_t(buf, 0, color);
	_mav_put_uint8_t(buf, 1, mode);
	_mav_put_uint8_t(buf, 2, freque);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LED_CONTROL_LEN);
#else
	mavlink_led_control_t packet;
	packet.color = color;
	packet.mode = mode;
	packet.freque = freque;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LED_CONTROL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_LED_CONTROL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LED_CONTROL_LEN, MAVLINK_MSG_ID_LED_CONTROL_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LED_CONTROL_LEN);
#endif
}

/**
 * @brief Pack a led_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param color led color which you control
 * @param mode led state:open close blink breathing
 * @param freque freque
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_led_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t color,uint8_t mode,uint8_t freque)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_LED_CONTROL_LEN];
	_mav_put_uint8_t(buf, 0, color);
	_mav_put_uint8_t(buf, 1, mode);
	_mav_put_uint8_t(buf, 2, freque);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LED_CONTROL_LEN);
#else
	mavlink_led_control_t packet;
	packet.color = color;
	packet.mode = mode;
	packet.freque = freque;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LED_CONTROL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_LED_CONTROL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LED_CONTROL_LEN, MAVLINK_MSG_ID_LED_CONTROL_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LED_CONTROL_LEN);
#endif
}

/**
 * @brief Encode a led_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param led_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_led_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_led_control_t* led_control)
{
	return mavlink_msg_led_control_pack(system_id, component_id, msg, led_control->color, led_control->mode, led_control->freque);
}

/**
 * @brief Encode a led_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param led_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_led_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_led_control_t* led_control)
{
	return mavlink_msg_led_control_pack_chan(system_id, component_id, chan, msg, led_control->color, led_control->mode, led_control->freque);
}

/**
 * @brief Send a led_control message
 * @param chan MAVLink channel to send the message
 *
 * @param color led color which you control
 * @param mode led state:open close blink breathing
 * @param freque freque
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_led_control_send(mavlink_channel_t chan, uint8_t color, uint8_t mode, uint8_t freque)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_LED_CONTROL_LEN];
	_mav_put_uint8_t(buf, 0, color);
	_mav_put_uint8_t(buf, 1, mode);
	_mav_put_uint8_t(buf, 2, freque);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LED_CONTROL, buf, MAVLINK_MSG_ID_LED_CONTROL_LEN, MAVLINK_MSG_ID_LED_CONTROL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LED_CONTROL, buf, MAVLINK_MSG_ID_LED_CONTROL_LEN);
#endif
#else
	mavlink_led_control_t packet;
	packet.color = color;
	packet.mode = mode;
	packet.freque = freque;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LED_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_LED_CONTROL_LEN, MAVLINK_MSG_ID_LED_CONTROL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LED_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_LED_CONTROL_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_LED_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_led_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t color, uint8_t mode, uint8_t freque)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, color);
	_mav_put_uint8_t(buf, 1, mode);
	_mav_put_uint8_t(buf, 2, freque);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LED_CONTROL, buf, MAVLINK_MSG_ID_LED_CONTROL_LEN, MAVLINK_MSG_ID_LED_CONTROL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LED_CONTROL, buf, MAVLINK_MSG_ID_LED_CONTROL_LEN);
#endif
#else
	mavlink_led_control_t *packet = (mavlink_led_control_t *)msgbuf;
	packet->color = color;
	packet->mode = mode;
	packet->freque = freque;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LED_CONTROL, (const char *)packet, MAVLINK_MSG_ID_LED_CONTROL_LEN, MAVLINK_MSG_ID_LED_CONTROL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LED_CONTROL, (const char *)packet, MAVLINK_MSG_ID_LED_CONTROL_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE LED_CONTROL UNPACKING


/**
 * @brief Get field color from led_control message
 *
 * @return led color which you control
 */
static inline uint8_t mavlink_msg_led_control_get_color(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field mode from led_control message
 *
 * @return led state:open close blink breathing
 */
static inline uint8_t mavlink_msg_led_control_get_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field freque from led_control message
 *
 * @return freque
 */
static inline uint8_t mavlink_msg_led_control_get_freque(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a led_control message into a struct
 *
 * @param msg The message to decode
 * @param led_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_led_control_decode(const mavlink_message_t* msg, mavlink_led_control_t* led_control)
{
#if MAVLINK_NEED_BYTE_SWAP
	led_control->color = mavlink_msg_led_control_get_color(msg);
	led_control->mode = mavlink_msg_led_control_get_mode(msg);
	led_control->freque = mavlink_msg_led_control_get_freque(msg);
#else
	memcpy(led_control, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_LED_CONTROL_LEN);
#endif
}
