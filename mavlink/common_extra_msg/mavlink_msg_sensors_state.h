// MESSAGE SENSORS_STATE PACKING

#define MAVLINK_MSG_ID_SENSORS_STATE 163

typedef struct __mavlink_sensors_state_t
{
 uint32_t timestamp; /*< Timestamp (milliseconds since system boot)*/
 uint8_t iosensor1; /*< [0]:dustbox [1]:sweep [2]:tray [3]:wire [4]-[7]:infra*/
 uint8_t iosensor2; /*< [0]:fornt_bumper [1]-[3]:bumper1-3 [4]-[7]:magnetism*/
 uint8_t iosensor3; /*< [0]:basestation_connect [1]:flag_dustbox_full*/
} mavlink_sensors_state_t;

#define MAVLINK_MSG_ID_SENSORS_STATE_LEN 7
#define MAVLINK_MSG_ID_163_LEN 7

#define MAVLINK_MSG_ID_SENSORS_STATE_CRC 196
#define MAVLINK_MSG_ID_163_CRC 196



#define MAVLINK_MESSAGE_INFO_SENSORS_STATE { \
	"SENSORS_STATE", \
	4, \
	{  { "timestamp", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_sensors_state_t, timestamp) }, \
         { "iosensor1", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_sensors_state_t, iosensor1) }, \
         { "iosensor2", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_sensors_state_t, iosensor2) }, \
         { "iosensor3", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_sensors_state_t, iosensor3) }, \
         } \
}


/**
 * @brief Pack a sensors_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp Timestamp (milliseconds since system boot)
 * @param iosensor1 [0]:dustbox [1]:sweep [2]:tray [3]:wire [4]-[7]:infra
 * @param iosensor2 [0]:fornt_bumper [1]-[3]:bumper1-3 [4]-[7]:magnetism
 * @param iosensor3 [0]:basestation_connect [1]:flag_dustbox_full
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sensors_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t timestamp, uint8_t iosensor1, uint8_t iosensor2, uint8_t iosensor3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SENSORS_STATE_LEN];
	_mav_put_uint32_t(buf, 0, timestamp);
	_mav_put_uint8_t(buf, 4, iosensor1);
	_mav_put_uint8_t(buf, 5, iosensor2);
	_mav_put_uint8_t(buf, 6, iosensor3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SENSORS_STATE_LEN);
#else
	mavlink_sensors_state_t packet;
	packet.timestamp = timestamp;
	packet.iosensor1 = iosensor1;
	packet.iosensor2 = iosensor2;
	packet.iosensor3 = iosensor3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SENSORS_STATE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SENSORS_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SENSORS_STATE_LEN, MAVLINK_MSG_ID_SENSORS_STATE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SENSORS_STATE_LEN);
#endif
}

/**
 * @brief Pack a sensors_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp Timestamp (milliseconds since system boot)
 * @param iosensor1 [0]:dustbox [1]:sweep [2]:tray [3]:wire [4]-[7]:infra
 * @param iosensor2 [0]:fornt_bumper [1]-[3]:bumper1-3 [4]-[7]:magnetism
 * @param iosensor3 [0]:basestation_connect [1]:flag_dustbox_full
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sensors_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t timestamp,uint8_t iosensor1,uint8_t iosensor2,uint8_t iosensor3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SENSORS_STATE_LEN];
	_mav_put_uint32_t(buf, 0, timestamp);
	_mav_put_uint8_t(buf, 4, iosensor1);
	_mav_put_uint8_t(buf, 5, iosensor2);
	_mav_put_uint8_t(buf, 6, iosensor3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SENSORS_STATE_LEN);
#else
	mavlink_sensors_state_t packet;
	packet.timestamp = timestamp;
	packet.iosensor1 = iosensor1;
	packet.iosensor2 = iosensor2;
	packet.iosensor3 = iosensor3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SENSORS_STATE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SENSORS_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SENSORS_STATE_LEN, MAVLINK_MSG_ID_SENSORS_STATE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SENSORS_STATE_LEN);
#endif
}

/**
 * @brief Encode a sensors_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sensors_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sensors_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sensors_state_t* sensors_state)
{
	return mavlink_msg_sensors_state_pack(system_id, component_id, msg, sensors_state->timestamp, sensors_state->iosensor1, sensors_state->iosensor2, sensors_state->iosensor3);
}

/**
 * @brief Encode a sensors_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sensors_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sensors_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sensors_state_t* sensors_state)
{
	return mavlink_msg_sensors_state_pack_chan(system_id, component_id, chan, msg, sensors_state->timestamp, sensors_state->iosensor1, sensors_state->iosensor2, sensors_state->iosensor3);
}

/**
 * @brief Send a sensors_state message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp Timestamp (milliseconds since system boot)
 * @param iosensor1 [0]:dustbox [1]:sweep [2]:tray [3]:wire [4]-[7]:infra
 * @param iosensor2 [0]:fornt_bumper [1]-[3]:bumper1-3 [4]-[7]:magnetism
 * @param iosensor3 [0]:basestation_connect [1]:flag_dustbox_full
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sensors_state_send(mavlink_channel_t chan, uint32_t timestamp, uint8_t iosensor1, uint8_t iosensor2, uint8_t iosensor3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SENSORS_STATE_LEN];
	_mav_put_uint32_t(buf, 0, timestamp);
	_mav_put_uint8_t(buf, 4, iosensor1);
	_mav_put_uint8_t(buf, 5, iosensor2);
	_mav_put_uint8_t(buf, 6, iosensor3);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SENSORS_STATE, buf, MAVLINK_MSG_ID_SENSORS_STATE_LEN, MAVLINK_MSG_ID_SENSORS_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SENSORS_STATE, buf, MAVLINK_MSG_ID_SENSORS_STATE_LEN);
#endif
#else
	mavlink_sensors_state_t packet;
	packet.timestamp = timestamp;
	packet.iosensor1 = iosensor1;
	packet.iosensor2 = iosensor2;
	packet.iosensor3 = iosensor3;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SENSORS_STATE, (const char *)&packet, MAVLINK_MSG_ID_SENSORS_STATE_LEN, MAVLINK_MSG_ID_SENSORS_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SENSORS_STATE, (const char *)&packet, MAVLINK_MSG_ID_SENSORS_STATE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_SENSORS_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sensors_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t timestamp, uint8_t iosensor1, uint8_t iosensor2, uint8_t iosensor3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, timestamp);
	_mav_put_uint8_t(buf, 4, iosensor1);
	_mav_put_uint8_t(buf, 5, iosensor2);
	_mav_put_uint8_t(buf, 6, iosensor3);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SENSORS_STATE, buf, MAVLINK_MSG_ID_SENSORS_STATE_LEN, MAVLINK_MSG_ID_SENSORS_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SENSORS_STATE, buf, MAVLINK_MSG_ID_SENSORS_STATE_LEN);
#endif
#else
	mavlink_sensors_state_t *packet = (mavlink_sensors_state_t *)msgbuf;
	packet->timestamp = timestamp;
	packet->iosensor1 = iosensor1;
	packet->iosensor2 = iosensor2;
	packet->iosensor3 = iosensor3;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SENSORS_STATE, (const char *)packet, MAVLINK_MSG_ID_SENSORS_STATE_LEN, MAVLINK_MSG_ID_SENSORS_STATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SENSORS_STATE, (const char *)packet, MAVLINK_MSG_ID_SENSORS_STATE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE SENSORS_STATE UNPACKING


/**
 * @brief Get field timestamp from sensors_state message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_sensors_state_get_timestamp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field iosensor1 from sensors_state message
 *
 * @return [0]:dustbox [1]:sweep [2]:tray [3]:wire [4]-[7]:infra
 */
static inline uint8_t mavlink_msg_sensors_state_get_iosensor1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field iosensor2 from sensors_state message
 *
 * @return [0]:fornt_bumper [1]-[3]:bumper1-3 [4]-[7]:magnetism
 */
static inline uint8_t mavlink_msg_sensors_state_get_iosensor2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field iosensor3 from sensors_state message
 *
 * @return [0]:basestation_connect [1]:flag_dustbox_full
 */
static inline uint8_t mavlink_msg_sensors_state_get_iosensor3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Decode a sensors_state message into a struct
 *
 * @param msg The message to decode
 * @param sensors_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_sensors_state_decode(const mavlink_message_t* msg, mavlink_sensors_state_t* sensors_state)
{
#if MAVLINK_NEED_BYTE_SWAP
	sensors_state->timestamp = mavlink_msg_sensors_state_get_timestamp(msg);
	sensors_state->iosensor1 = mavlink_msg_sensors_state_get_iosensor1(msg);
	sensors_state->iosensor2 = mavlink_msg_sensors_state_get_iosensor2(msg);
	sensors_state->iosensor3 = mavlink_msg_sensors_state_get_iosensor3(msg);
#else
	memcpy(sensors_state, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_SENSORS_STATE_LEN);
#endif
}
