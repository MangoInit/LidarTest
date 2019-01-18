// MESSAGE VERSION PACKING

#define MAVLINK_MSG_ID_VERSION 154

typedef struct __mavlink_version_t
{
 char mavlink_release[16]; /*< */
 char software_release[8]; /*< */
} mavlink_version_t;

#define MAVLINK_MSG_ID_VERSION_LEN 24
#define MAVLINK_MSG_ID_154_LEN 24

#define MAVLINK_MSG_ID_VERSION_CRC 125
#define MAVLINK_MSG_ID_154_CRC 125

#define MAVLINK_MSG_VERSION_FIELD_MAVLINK_RELEASE_LEN 16
#define MAVLINK_MSG_VERSION_FIELD_SOFTWARE_RELEASE_LEN 8

#define MAVLINK_MESSAGE_INFO_VERSION { \
	"VERSION", \
	2, \
	{  { "mavlink_release", NULL, MAVLINK_TYPE_CHAR, 16, 0, offsetof(mavlink_version_t, mavlink_release) }, \
         { "software_release", NULL, MAVLINK_TYPE_CHAR, 8, 16, offsetof(mavlink_version_t, software_release) }, \
         } \
}


/**
 * @brief Pack a version message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mavlink_release 
 * @param software_release 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_version_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const char *mavlink_release, const char *software_release)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_VERSION_LEN];

	_mav_put_char_array(buf, 0, mavlink_release, 16);
	_mav_put_char_array(buf, 16, software_release, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VERSION_LEN);
#else
	mavlink_version_t packet;

	mav_array_memcpy(packet.mavlink_release, mavlink_release, sizeof(char)*16);
	mav_array_memcpy(packet.software_release, software_release, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VERSION_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_VERSION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VERSION_LEN, MAVLINK_MSG_ID_VERSION_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VERSION_LEN);
#endif
}

/**
 * @brief Pack a version message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mavlink_release 
 * @param software_release 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_version_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const char *mavlink_release,const char *software_release)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_VERSION_LEN];

	_mav_put_char_array(buf, 0, mavlink_release, 16);
	_mav_put_char_array(buf, 16, software_release, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VERSION_LEN);
#else
	mavlink_version_t packet;

	mav_array_memcpy(packet.mavlink_release, mavlink_release, sizeof(char)*16);
	mav_array_memcpy(packet.software_release, software_release, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VERSION_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_VERSION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VERSION_LEN, MAVLINK_MSG_ID_VERSION_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VERSION_LEN);
#endif
}

/**
 * @brief Encode a version struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param version C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_version_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_version_t* version)
{
	return mavlink_msg_version_pack(system_id, component_id, msg, version->mavlink_release, version->software_release);
}

/**
 * @brief Encode a version struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param version C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_version_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_version_t* version)
{
	return mavlink_msg_version_pack_chan(system_id, component_id, chan, msg, version->mavlink_release, version->software_release);
}

/**
 * @brief Send a version message
 * @param chan MAVLink channel to send the message
 *
 * @param mavlink_release 
 * @param software_release 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_version_send(mavlink_channel_t chan, const char *mavlink_release, const char *software_release)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_VERSION_LEN];

	_mav_put_char_array(buf, 0, mavlink_release, 16);
	_mav_put_char_array(buf, 16, software_release, 8);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VERSION, buf, MAVLINK_MSG_ID_VERSION_LEN, MAVLINK_MSG_ID_VERSION_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VERSION, buf, MAVLINK_MSG_ID_VERSION_LEN);
#endif
#else
	mavlink_version_t packet;

	mav_array_memcpy(packet.mavlink_release, mavlink_release, sizeof(char)*16);
	mav_array_memcpy(packet.software_release, software_release, sizeof(char)*8);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VERSION, (const char *)&packet, MAVLINK_MSG_ID_VERSION_LEN, MAVLINK_MSG_ID_VERSION_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VERSION, (const char *)&packet, MAVLINK_MSG_ID_VERSION_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_VERSION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_version_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *mavlink_release, const char *software_release)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;

	_mav_put_char_array(buf, 0, mavlink_release, 16);
	_mav_put_char_array(buf, 16, software_release, 8);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VERSION, buf, MAVLINK_MSG_ID_VERSION_LEN, MAVLINK_MSG_ID_VERSION_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VERSION, buf, MAVLINK_MSG_ID_VERSION_LEN);
#endif
#else
	mavlink_version_t *packet = (mavlink_version_t *)msgbuf;

	mav_array_memcpy(packet->mavlink_release, mavlink_release, sizeof(char)*16);
	mav_array_memcpy(packet->software_release, software_release, sizeof(char)*8);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VERSION, (const char *)packet, MAVLINK_MSG_ID_VERSION_LEN, MAVLINK_MSG_ID_VERSION_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VERSION, (const char *)packet, MAVLINK_MSG_ID_VERSION_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE VERSION UNPACKING


/**
 * @brief Get field mavlink_release from version message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_version_get_mavlink_release(const mavlink_message_t* msg, char *mavlink_release)
{
	return _MAV_RETURN_char_array(msg, mavlink_release, 16,  0);
}

/**
 * @brief Get field software_release from version message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_version_get_software_release(const mavlink_message_t* msg, char *software_release)
{
	return _MAV_RETURN_char_array(msg, software_release, 8,  16);
}

/**
 * @brief Decode a version message into a struct
 *
 * @param msg The message to decode
 * @param version C-struct to decode the message contents into
 */
static inline void mavlink_msg_version_decode(const mavlink_message_t* msg, mavlink_version_t* version)
{
#if MAVLINK_NEED_BYTE_SWAP
	mavlink_msg_version_get_mavlink_release(msg, version->mavlink_release);
	mavlink_msg_version_get_software_release(msg, version->software_release);
#else
	memcpy(version, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_VERSION_LEN);
#endif
}
