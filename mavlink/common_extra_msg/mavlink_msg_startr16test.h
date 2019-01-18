// MESSAGE StartR16Test PACKING

#define MAVLINK_MSG_ID_StartR16Test 171

typedef struct __mavlink_startr16test_t
{
 uint32_t comm[2]; /*< communication id*/
 uint8_t mode; /*< test mode*/
 char ssid[24]; /*< wifi ssid*/
 char passwd[24]; /*< wifi password*/
} mavlink_startr16test_t;

#define MAVLINK_MSG_ID_StartR16Test_LEN 57
#define MAVLINK_MSG_ID_171_LEN 57

#define MAVLINK_MSG_ID_StartR16Test_CRC 131
#define MAVLINK_MSG_ID_171_CRC 131

#define MAVLINK_MSG_StartR16Test_FIELD_COMM_LEN 2
#define MAVLINK_MSG_StartR16Test_FIELD_SSID_LEN 24
#define MAVLINK_MSG_StartR16Test_FIELD_PASSWD_LEN 24

#define MAVLINK_MESSAGE_INFO_StartR16Test { \
	"StartR16Test", \
	4, \
	{  { "comm", NULL, MAVLINK_TYPE_UINT32_T, 2, 0, offsetof(mavlink_startr16test_t, comm) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_startr16test_t, mode) }, \
         { "ssid", NULL, MAVLINK_TYPE_CHAR, 24, 9, offsetof(mavlink_startr16test_t, ssid) }, \
         { "passwd", NULL, MAVLINK_TYPE_CHAR, 24, 33, offsetof(mavlink_startr16test_t, passwd) }, \
         } \
}


/**
 * @brief Pack a startr16test message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mode test mode
 * @param comm communication id
 * @param ssid wifi ssid
 * @param passwd wifi password
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_startr16test_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t mode, const uint32_t *comm, const char *ssid, const char *passwd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_StartR16Test_LEN];
	_mav_put_uint8_t(buf, 8, mode);
	_mav_put_uint32_t_array(buf, 0, comm, 2);
	_mav_put_char_array(buf, 9, ssid, 24);
	_mav_put_char_array(buf, 33, passwd, 24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_StartR16Test_LEN);
#else
	mavlink_startr16test_t packet;
	packet.mode = mode;
	mav_array_memcpy(packet.comm, comm, sizeof(uint32_t)*2);
	mav_array_memcpy(packet.ssid, ssid, sizeof(char)*24);
	mav_array_memcpy(packet.passwd, passwd, sizeof(char)*24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_StartR16Test_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_StartR16Test;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_StartR16Test_LEN, MAVLINK_MSG_ID_StartR16Test_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_StartR16Test_LEN);
#endif
}

/**
 * @brief Pack a startr16test message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mode test mode
 * @param comm communication id
 * @param ssid wifi ssid
 * @param passwd wifi password
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_startr16test_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t mode,const uint32_t *comm,const char *ssid,const char *passwd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_StartR16Test_LEN];
	_mav_put_uint8_t(buf, 8, mode);
	_mav_put_uint32_t_array(buf, 0, comm, 2);
	_mav_put_char_array(buf, 9, ssid, 24);
	_mav_put_char_array(buf, 33, passwd, 24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_StartR16Test_LEN);
#else
	mavlink_startr16test_t packet;
	packet.mode = mode;
	mav_array_memcpy(packet.comm, comm, sizeof(uint32_t)*2);
	mav_array_memcpy(packet.ssid, ssid, sizeof(char)*24);
	mav_array_memcpy(packet.passwd, passwd, sizeof(char)*24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_StartR16Test_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_StartR16Test;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_StartR16Test_LEN, MAVLINK_MSG_ID_StartR16Test_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_StartR16Test_LEN);
#endif
}

/**
 * @brief Encode a startr16test struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param startr16test C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_startr16test_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_startr16test_t* startr16test)
{
	return mavlink_msg_startr16test_pack(system_id, component_id, msg, startr16test->mode, startr16test->comm, startr16test->ssid, startr16test->passwd);
}

/**
 * @brief Encode a startr16test struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param startr16test C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_startr16test_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_startr16test_t* startr16test)
{
	return mavlink_msg_startr16test_pack_chan(system_id, component_id, chan, msg, startr16test->mode, startr16test->comm, startr16test->ssid, startr16test->passwd);
}

/**
 * @brief Send a startr16test message
 * @param chan MAVLink channel to send the message
 *
 * @param mode test mode
 * @param comm communication id
 * @param ssid wifi ssid
 * @param passwd wifi password
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_startr16test_send(mavlink_channel_t chan, uint8_t mode, const uint32_t *comm, const char *ssid, const char *passwd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_StartR16Test_LEN];
	_mav_put_uint8_t(buf, 8, mode);
	_mav_put_uint32_t_array(buf, 0, comm, 2);
	_mav_put_char_array(buf, 9, ssid, 24);
	_mav_put_char_array(buf, 33, passwd, 24);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_StartR16Test, buf, MAVLINK_MSG_ID_StartR16Test_LEN, MAVLINK_MSG_ID_StartR16Test_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_StartR16Test, buf, MAVLINK_MSG_ID_StartR16Test_LEN);
#endif
#else
	mavlink_startr16test_t packet;
	packet.mode = mode;
	mav_array_memcpy(packet.comm, comm, sizeof(uint32_t)*2);
	mav_array_memcpy(packet.ssid, ssid, sizeof(char)*24);
	mav_array_memcpy(packet.passwd, passwd, sizeof(char)*24);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_StartR16Test, (const char *)&packet, MAVLINK_MSG_ID_StartR16Test_LEN, MAVLINK_MSG_ID_StartR16Test_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_StartR16Test, (const char *)&packet, MAVLINK_MSG_ID_StartR16Test_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_StartR16Test_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_startr16test_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t mode, const uint32_t *comm, const char *ssid, const char *passwd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 8, mode);
	_mav_put_uint32_t_array(buf, 0, comm, 2);
	_mav_put_char_array(buf, 9, ssid, 24);
	_mav_put_char_array(buf, 33, passwd, 24);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_StartR16Test, buf, MAVLINK_MSG_ID_StartR16Test_LEN, MAVLINK_MSG_ID_StartR16Test_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_StartR16Test, buf, MAVLINK_MSG_ID_StartR16Test_LEN);
#endif
#else
	mavlink_startr16test_t *packet = (mavlink_startr16test_t *)msgbuf;
	packet->mode = mode;
	mav_array_memcpy(packet->comm, comm, sizeof(uint32_t)*2);
	mav_array_memcpy(packet->ssid, ssid, sizeof(char)*24);
	mav_array_memcpy(packet->passwd, passwd, sizeof(char)*24);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_StartR16Test, (const char *)packet, MAVLINK_MSG_ID_StartR16Test_LEN, MAVLINK_MSG_ID_StartR16Test_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_StartR16Test, (const char *)packet, MAVLINK_MSG_ID_StartR16Test_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE StartR16Test UNPACKING


/**
 * @brief Get field mode from startr16test message
 *
 * @return test mode
 */
static inline uint8_t mavlink_msg_startr16test_get_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field comm from startr16test message
 *
 * @return communication id
 */
static inline uint16_t mavlink_msg_startr16test_get_comm(const mavlink_message_t* msg, uint32_t *comm)
{
	return _MAV_RETURN_uint32_t_array(msg, comm, 2,  0);
}

/**
 * @brief Get field ssid from startr16test message
 *
 * @return wifi ssid
 */
static inline uint16_t mavlink_msg_startr16test_get_ssid(const mavlink_message_t* msg, char *ssid)
{
	return _MAV_RETURN_char_array(msg, ssid, 24,  9);
}

/**
 * @brief Get field passwd from startr16test message
 *
 * @return wifi password
 */
static inline uint16_t mavlink_msg_startr16test_get_passwd(const mavlink_message_t* msg, char *passwd)
{
	return _MAV_RETURN_char_array(msg, passwd, 24,  33);
}

/**
 * @brief Decode a startr16test message into a struct
 *
 * @param msg The message to decode
 * @param startr16test C-struct to decode the message contents into
 */
static inline void mavlink_msg_startr16test_decode(const mavlink_message_t* msg, mavlink_startr16test_t* startr16test)
{
#if MAVLINK_NEED_BYTE_SWAP
	mavlink_msg_startr16test_get_comm(msg, startr16test->comm);
	startr16test->mode = mavlink_msg_startr16test_get_mode(msg);
	mavlink_msg_startr16test_get_ssid(msg, startr16test->ssid);
	mavlink_msg_startr16test_get_passwd(msg, startr16test->passwd);
#else
	memcpy(startr16test, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_StartR16Test_LEN);
#endif
}
