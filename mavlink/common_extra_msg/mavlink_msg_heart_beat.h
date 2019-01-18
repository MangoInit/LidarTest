// MESSAGE HEART_BEAT PACKING

#define MAVLINK_MSG_ID_HEART_BEAT 155

typedef struct __mavlink_heart_beat_t
{
 uint8_t id; /*< */
} mavlink_heart_beat_t;

#define MAVLINK_MSG_ID_HEART_BEAT_LEN 1
#define MAVLINK_MSG_ID_155_LEN 1

#define MAVLINK_MSG_ID_HEART_BEAT_CRC 77
#define MAVLINK_MSG_ID_155_CRC 77



#define MAVLINK_MESSAGE_INFO_HEART_BEAT { \
	"HEART_BEAT", \
	1, \
	{  { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_heart_beat_t, id) }, \
         } \
}


/**
 * @brief Pack a heart_beat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_heart_beat_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_HEART_BEAT_LEN];
	_mav_put_uint8_t(buf, 0, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HEART_BEAT_LEN);
#else
	mavlink_heart_beat_t packet;
	packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HEART_BEAT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_HEART_BEAT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HEART_BEAT_LEN, MAVLINK_MSG_ID_HEART_BEAT_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HEART_BEAT_LEN);
#endif
}

/**
 * @brief Pack a heart_beat message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param id 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_heart_beat_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_HEART_BEAT_LEN];
	_mav_put_uint8_t(buf, 0, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HEART_BEAT_LEN);
#else
	mavlink_heart_beat_t packet;
	packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HEART_BEAT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_HEART_BEAT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HEART_BEAT_LEN, MAVLINK_MSG_ID_HEART_BEAT_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HEART_BEAT_LEN);
#endif
}

/**
 * @brief Encode a heart_beat struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param heart_beat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_heart_beat_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_heart_beat_t* heart_beat)
{
	return mavlink_msg_heart_beat_pack(system_id, component_id, msg, heart_beat->id);
}

/**
 * @brief Encode a heart_beat struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param heart_beat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_heart_beat_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_heart_beat_t* heart_beat)
{
	return mavlink_msg_heart_beat_pack_chan(system_id, component_id, chan, msg, heart_beat->id);
}

/**
 * @brief Send a heart_beat message
 * @param chan MAVLink channel to send the message
 *
 * @param id 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_heart_beat_send(mavlink_channel_t chan, uint8_t id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_HEART_BEAT_LEN];
	_mav_put_uint8_t(buf, 0, id);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HEART_BEAT, buf, MAVLINK_MSG_ID_HEART_BEAT_LEN, MAVLINK_MSG_ID_HEART_BEAT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HEART_BEAT, buf, MAVLINK_MSG_ID_HEART_BEAT_LEN);
#endif
#else
	mavlink_heart_beat_t packet;
	packet.id = id;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HEART_BEAT, (const char *)&packet, MAVLINK_MSG_ID_HEART_BEAT_LEN, MAVLINK_MSG_ID_HEART_BEAT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HEART_BEAT, (const char *)&packet, MAVLINK_MSG_ID_HEART_BEAT_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_HEART_BEAT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_heart_beat_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, id);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HEART_BEAT, buf, MAVLINK_MSG_ID_HEART_BEAT_LEN, MAVLINK_MSG_ID_HEART_BEAT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HEART_BEAT, buf, MAVLINK_MSG_ID_HEART_BEAT_LEN);
#endif
#else
	mavlink_heart_beat_t *packet = (mavlink_heart_beat_t *)msgbuf;
	packet->id = id;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HEART_BEAT, (const char *)packet, MAVLINK_MSG_ID_HEART_BEAT_LEN, MAVLINK_MSG_ID_HEART_BEAT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HEART_BEAT, (const char *)packet, MAVLINK_MSG_ID_HEART_BEAT_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE HEART_BEAT UNPACKING


/**
 * @brief Get field id from heart_beat message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_heart_beat_get_id(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a heart_beat message into a struct
 *
 * @param msg The message to decode
 * @param heart_beat C-struct to decode the message contents into
 */
static inline void mavlink_msg_heart_beat_decode(const mavlink_message_t* msg, mavlink_heart_beat_t* heart_beat)
{
#if MAVLINK_NEED_BYTE_SWAP
	heart_beat->id = mavlink_msg_heart_beat_get_id(msg);
#else
	memcpy(heart_beat, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_HEART_BEAT_LEN);
#endif
}
