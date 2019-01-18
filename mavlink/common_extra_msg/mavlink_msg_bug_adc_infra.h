// MESSAGE BUG_ADC_INFRA PACKING

#define MAVLINK_MSG_ID_BUG_ADC_INFRA 166

typedef struct __mavlink_bug_adc_infra_t
{
 uint16_t infra1; /*< infra1 ADC value*/
 uint16_t infra2; /*< infra2 ADC value*/
 uint16_t infra3; /*< infra3 ADC value*/
 uint16_t infra4; /*< infra4 ADC value*/
} mavlink_bug_adc_infra_t;

#define MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN 8
#define MAVLINK_MSG_ID_166_LEN 8

#define MAVLINK_MSG_ID_BUG_ADC_INFRA_CRC 221
#define MAVLINK_MSG_ID_166_CRC 221



#define MAVLINK_MESSAGE_INFO_BUG_ADC_INFRA { \
	"BUG_ADC_INFRA", \
	4, \
	{  { "infra1", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_bug_adc_infra_t, infra1) }, \
         { "infra2", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_bug_adc_infra_t, infra2) }, \
         { "infra3", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_bug_adc_infra_t, infra3) }, \
         { "infra4", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_bug_adc_infra_t, infra4) }, \
         } \
}


/**
 * @brief Pack a bug_adc_infra message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param infra1 infra1 ADC value
 * @param infra2 infra2 ADC value
 * @param infra3 infra3 ADC value
 * @param infra4 infra4 ADC value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bug_adc_infra_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t infra1, uint16_t infra2, uint16_t infra3, uint16_t infra4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN];
	_mav_put_uint16_t(buf, 0, infra1);
	_mav_put_uint16_t(buf, 2, infra2);
	_mav_put_uint16_t(buf, 4, infra3);
	_mav_put_uint16_t(buf, 6, infra4);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN);
#else
	mavlink_bug_adc_infra_t packet;
	packet.infra1 = infra1;
	packet.infra2 = infra2;
	packet.infra3 = infra3;
	packet.infra4 = infra4;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_BUG_ADC_INFRA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN, MAVLINK_MSG_ID_BUG_ADC_INFRA_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN);
#endif
}

/**
 * @brief Pack a bug_adc_infra message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param infra1 infra1 ADC value
 * @param infra2 infra2 ADC value
 * @param infra3 infra3 ADC value
 * @param infra4 infra4 ADC value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bug_adc_infra_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t infra1,uint16_t infra2,uint16_t infra3,uint16_t infra4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN];
	_mav_put_uint16_t(buf, 0, infra1);
	_mav_put_uint16_t(buf, 2, infra2);
	_mav_put_uint16_t(buf, 4, infra3);
	_mav_put_uint16_t(buf, 6, infra4);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN);
#else
	mavlink_bug_adc_infra_t packet;
	packet.infra1 = infra1;
	packet.infra2 = infra2;
	packet.infra3 = infra3;
	packet.infra4 = infra4;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_BUG_ADC_INFRA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN, MAVLINK_MSG_ID_BUG_ADC_INFRA_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN);
#endif
}

/**
 * @brief Encode a bug_adc_infra struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param bug_adc_infra C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bug_adc_infra_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_bug_adc_infra_t* bug_adc_infra)
{
	return mavlink_msg_bug_adc_infra_pack(system_id, component_id, msg, bug_adc_infra->infra1, bug_adc_infra->infra2, bug_adc_infra->infra3, bug_adc_infra->infra4);
}

/**
 * @brief Encode a bug_adc_infra struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bug_adc_infra C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bug_adc_infra_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_bug_adc_infra_t* bug_adc_infra)
{
	return mavlink_msg_bug_adc_infra_pack_chan(system_id, component_id, chan, msg, bug_adc_infra->infra1, bug_adc_infra->infra2, bug_adc_infra->infra3, bug_adc_infra->infra4);
}

/**
 * @brief Send a bug_adc_infra message
 * @param chan MAVLink channel to send the message
 *
 * @param infra1 infra1 ADC value
 * @param infra2 infra2 ADC value
 * @param infra3 infra3 ADC value
 * @param infra4 infra4 ADC value
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_bug_adc_infra_send(mavlink_channel_t chan, uint16_t infra1, uint16_t infra2, uint16_t infra3, uint16_t infra4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN];
	_mav_put_uint16_t(buf, 0, infra1);
	_mav_put_uint16_t(buf, 2, infra2);
	_mav_put_uint16_t(buf, 4, infra3);
	_mav_put_uint16_t(buf, 6, infra4);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BUG_ADC_INFRA, buf, MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN, MAVLINK_MSG_ID_BUG_ADC_INFRA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BUG_ADC_INFRA, buf, MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN);
#endif
#else
	mavlink_bug_adc_infra_t packet;
	packet.infra1 = infra1;
	packet.infra2 = infra2;
	packet.infra3 = infra3;
	packet.infra4 = infra4;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BUG_ADC_INFRA, (const char *)&packet, MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN, MAVLINK_MSG_ID_BUG_ADC_INFRA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BUG_ADC_INFRA, (const char *)&packet, MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_bug_adc_infra_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t infra1, uint16_t infra2, uint16_t infra3, uint16_t infra4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint16_t(buf, 0, infra1);
	_mav_put_uint16_t(buf, 2, infra2);
	_mav_put_uint16_t(buf, 4, infra3);
	_mav_put_uint16_t(buf, 6, infra4);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BUG_ADC_INFRA, buf, MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN, MAVLINK_MSG_ID_BUG_ADC_INFRA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BUG_ADC_INFRA, buf, MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN);
#endif
#else
	mavlink_bug_adc_infra_t *packet = (mavlink_bug_adc_infra_t *)msgbuf;
	packet->infra1 = infra1;
	packet->infra2 = infra2;
	packet->infra3 = infra3;
	packet->infra4 = infra4;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BUG_ADC_INFRA, (const char *)packet, MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN, MAVLINK_MSG_ID_BUG_ADC_INFRA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BUG_ADC_INFRA, (const char *)packet, MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE BUG_ADC_INFRA UNPACKING


/**
 * @brief Get field infra1 from bug_adc_infra message
 *
 * @return infra1 ADC value
 */
static inline uint16_t mavlink_msg_bug_adc_infra_get_infra1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field infra2 from bug_adc_infra message
 *
 * @return infra2 ADC value
 */
static inline uint16_t mavlink_msg_bug_adc_infra_get_infra2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field infra3 from bug_adc_infra message
 *
 * @return infra3 ADC value
 */
static inline uint16_t mavlink_msg_bug_adc_infra_get_infra3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field infra4 from bug_adc_infra message
 *
 * @return infra4 ADC value
 */
static inline uint16_t mavlink_msg_bug_adc_infra_get_infra4(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Decode a bug_adc_infra message into a struct
 *
 * @param msg The message to decode
 * @param bug_adc_infra C-struct to decode the message contents into
 */
static inline void mavlink_msg_bug_adc_infra_decode(const mavlink_message_t* msg, mavlink_bug_adc_infra_t* bug_adc_infra)
{
#if MAVLINK_NEED_BYTE_SWAP
	bug_adc_infra->infra1 = mavlink_msg_bug_adc_infra_get_infra1(msg);
	bug_adc_infra->infra2 = mavlink_msg_bug_adc_infra_get_infra2(msg);
	bug_adc_infra->infra3 = mavlink_msg_bug_adc_infra_get_infra3(msg);
	bug_adc_infra->infra4 = mavlink_msg_bug_adc_infra_get_infra4(msg);
#else
	memcpy(bug_adc_infra, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_BUG_ADC_INFRA_LEN);
#endif
}
