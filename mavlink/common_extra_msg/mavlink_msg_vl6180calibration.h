// MESSAGE VL6180Calibration PACKING

#define MAVLINK_MSG_ID_VL6180Calibration 172

typedef struct __mavlink_vl6180calibration_t
{
 uint8_t offset_fornt; /*< See EnumStartR16Test*/
 uint8_t offset_behind; /*< See EnumStartR16Test*/
} mavlink_vl6180calibration_t;

#define MAVLINK_MSG_ID_VL6180Calibration_LEN 2
#define MAVLINK_MSG_ID_172_LEN 2

#define MAVLINK_MSG_ID_VL6180Calibration_CRC 6
#define MAVLINK_MSG_ID_172_CRC 6



#define MAVLINK_MESSAGE_INFO_VL6180Calibration { \
	"VL6180Calibration", \
	2, \
	{  { "offset_fornt", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_vl6180calibration_t, offset_fornt) }, \
         { "offset_behind", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_vl6180calibration_t, offset_behind) }, \
         } \
}


/**
 * @brief Pack a vl6180calibration message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param offset_fornt See EnumStartR16Test
 * @param offset_behind See EnumStartR16Test
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vl6180calibration_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t offset_fornt, uint8_t offset_behind)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_VL6180Calibration_LEN];
	_mav_put_uint8_t(buf, 0, offset_fornt);
	_mav_put_uint8_t(buf, 1, offset_behind);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VL6180Calibration_LEN);
#else
	mavlink_vl6180calibration_t packet;
	packet.offset_fornt = offset_fornt;
	packet.offset_behind = offset_behind;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VL6180Calibration_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_VL6180Calibration;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VL6180Calibration_LEN, MAVLINK_MSG_ID_VL6180Calibration_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VL6180Calibration_LEN);
#endif
}

/**
 * @brief Pack a vl6180calibration message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param offset_fornt See EnumStartR16Test
 * @param offset_behind See EnumStartR16Test
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vl6180calibration_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t offset_fornt,uint8_t offset_behind)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_VL6180Calibration_LEN];
	_mav_put_uint8_t(buf, 0, offset_fornt);
	_mav_put_uint8_t(buf, 1, offset_behind);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VL6180Calibration_LEN);
#else
	mavlink_vl6180calibration_t packet;
	packet.offset_fornt = offset_fornt;
	packet.offset_behind = offset_behind;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VL6180Calibration_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_VL6180Calibration;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VL6180Calibration_LEN, MAVLINK_MSG_ID_VL6180Calibration_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VL6180Calibration_LEN);
#endif
}

/**
 * @brief Encode a vl6180calibration struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vl6180calibration C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vl6180calibration_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vl6180calibration_t* vl6180calibration)
{
	return mavlink_msg_vl6180calibration_pack(system_id, component_id, msg, vl6180calibration->offset_fornt, vl6180calibration->offset_behind);
}

/**
 * @brief Encode a vl6180calibration struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vl6180calibration C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vl6180calibration_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vl6180calibration_t* vl6180calibration)
{
	return mavlink_msg_vl6180calibration_pack_chan(system_id, component_id, chan, msg, vl6180calibration->offset_fornt, vl6180calibration->offset_behind);
}

/**
 * @brief Send a vl6180calibration message
 * @param chan MAVLink channel to send the message
 *
 * @param offset_fornt See EnumStartR16Test
 * @param offset_behind See EnumStartR16Test
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vl6180calibration_send(mavlink_channel_t chan, uint8_t offset_fornt, uint8_t offset_behind)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_VL6180Calibration_LEN];
	_mav_put_uint8_t(buf, 0, offset_fornt);
	_mav_put_uint8_t(buf, 1, offset_behind);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VL6180Calibration, buf, MAVLINK_MSG_ID_VL6180Calibration_LEN, MAVLINK_MSG_ID_VL6180Calibration_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VL6180Calibration, buf, MAVLINK_MSG_ID_VL6180Calibration_LEN);
#endif
#else
	mavlink_vl6180calibration_t packet;
	packet.offset_fornt = offset_fornt;
	packet.offset_behind = offset_behind;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VL6180Calibration, (const char *)&packet, MAVLINK_MSG_ID_VL6180Calibration_LEN, MAVLINK_MSG_ID_VL6180Calibration_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VL6180Calibration, (const char *)&packet, MAVLINK_MSG_ID_VL6180Calibration_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_VL6180Calibration_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vl6180calibration_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t offset_fornt, uint8_t offset_behind)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, offset_fornt);
	_mav_put_uint8_t(buf, 1, offset_behind);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VL6180Calibration, buf, MAVLINK_MSG_ID_VL6180Calibration_LEN, MAVLINK_MSG_ID_VL6180Calibration_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VL6180Calibration, buf, MAVLINK_MSG_ID_VL6180Calibration_LEN);
#endif
#else
	mavlink_vl6180calibration_t *packet = (mavlink_vl6180calibration_t *)msgbuf;
	packet->offset_fornt = offset_fornt;
	packet->offset_behind = offset_behind;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VL6180Calibration, (const char *)packet, MAVLINK_MSG_ID_VL6180Calibration_LEN, MAVLINK_MSG_ID_VL6180Calibration_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VL6180Calibration, (const char *)packet, MAVLINK_MSG_ID_VL6180Calibration_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE VL6180Calibration UNPACKING


/**
 * @brief Get field offset_fornt from vl6180calibration message
 *
 * @return See EnumStartR16Test
 */
static inline uint8_t mavlink_msg_vl6180calibration_get_offset_fornt(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field offset_behind from vl6180calibration message
 *
 * @return See EnumStartR16Test
 */
static inline uint8_t mavlink_msg_vl6180calibration_get_offset_behind(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a vl6180calibration message into a struct
 *
 * @param msg The message to decode
 * @param vl6180calibration C-struct to decode the message contents into
 */
static inline void mavlink_msg_vl6180calibration_decode(const mavlink_message_t* msg, mavlink_vl6180calibration_t* vl6180calibration)
{
#if MAVLINK_NEED_BYTE_SWAP
	vl6180calibration->offset_fornt = mavlink_msg_vl6180calibration_get_offset_fornt(msg);
	vl6180calibration->offset_behind = mavlink_msg_vl6180calibration_get_offset_behind(msg);
#else
	memcpy(vl6180calibration, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_VL6180Calibration_LEN);
#endif
}
