// MESSAGE KEY PACKING

#define MAVLINK_MSG_ID_KEY 160

typedef struct __mavlink_key_t
{
 uint8_t value; /*<  key value */
} mavlink_key_t;

#define MAVLINK_MSG_ID_KEY_LEN 1
#define MAVLINK_MSG_ID_160_LEN 1

#define MAVLINK_MSG_ID_KEY_CRC 20
#define MAVLINK_MSG_ID_160_CRC 20



#define MAVLINK_MESSAGE_INFO_KEY { \
	"KEY", \
	1, \
	{  { "value", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_key_t, value) }, \
         } \
}


/**
 * @brief Pack a key message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param value  key value 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_key_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_KEY_LEN];
	_mav_put_uint8_t(buf, 0, value);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KEY_LEN);
#else
	mavlink_key_t packet;
	packet.value = value;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KEY_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_KEY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_KEY_LEN, MAVLINK_MSG_ID_KEY_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_KEY_LEN);
#endif
}

/**
 * @brief Pack a key message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param value  key value 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_key_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_KEY_LEN];
	_mav_put_uint8_t(buf, 0, value);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KEY_LEN);
#else
	mavlink_key_t packet;
	packet.value = value;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KEY_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_KEY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_KEY_LEN, MAVLINK_MSG_ID_KEY_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_KEY_LEN);
#endif
}

/**
 * @brief Encode a key struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param key C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_key_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_key_t* key)
{
	return mavlink_msg_key_pack(system_id, component_id, msg, key->value);
}

/**
 * @brief Encode a key struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param key C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_key_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_key_t* key)
{
	return mavlink_msg_key_pack_chan(system_id, component_id, chan, msg, key->value);
}

/**
 * @brief Send a key message
 * @param chan MAVLink channel to send the message
 *
 * @param value  key value 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_key_send(mavlink_channel_t chan, uint8_t value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_KEY_LEN];
	_mav_put_uint8_t(buf, 0, value);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KEY, buf, MAVLINK_MSG_ID_KEY_LEN, MAVLINK_MSG_ID_KEY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KEY, buf, MAVLINK_MSG_ID_KEY_LEN);
#endif
#else
	mavlink_key_t packet;
	packet.value = value;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KEY, (const char *)&packet, MAVLINK_MSG_ID_KEY_LEN, MAVLINK_MSG_ID_KEY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KEY, (const char *)&packet, MAVLINK_MSG_ID_KEY_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_KEY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_key_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, value);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KEY, buf, MAVLINK_MSG_ID_KEY_LEN, MAVLINK_MSG_ID_KEY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KEY, buf, MAVLINK_MSG_ID_KEY_LEN);
#endif
#else
	mavlink_key_t *packet = (mavlink_key_t *)msgbuf;
	packet->value = value;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KEY, (const char *)packet, MAVLINK_MSG_ID_KEY_LEN, MAVLINK_MSG_ID_KEY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KEY, (const char *)packet, MAVLINK_MSG_ID_KEY_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE KEY UNPACKING


/**
 * @brief Get field value from key message
 *
 * @return  key value 
 */
static inline uint8_t mavlink_msg_key_get_value(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a key message into a struct
 *
 * @param msg The message to decode
 * @param key C-struct to decode the message contents into
 */
static inline void mavlink_msg_key_decode(const mavlink_message_t* msg, mavlink_key_t* key)
{
#if MAVLINK_NEED_BYTE_SWAP
	key->value = mavlink_msg_key_get_value(msg);
#else
	memcpy(key, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_KEY_LEN);
#endif
}
