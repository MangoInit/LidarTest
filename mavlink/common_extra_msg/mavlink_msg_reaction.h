// MESSAGE Reaction PACKING

#define MAVLINK_MSG_ID_Reaction 178

typedef struct __mavlink_reaction_t
{
 uint8_t Switch; /*< Timestamp (milliseconds since system boot)*/
} mavlink_reaction_t;

#define MAVLINK_MSG_ID_Reaction_LEN 1
#define MAVLINK_MSG_ID_178_LEN 1

#define MAVLINK_MSG_ID_Reaction_CRC 80
#define MAVLINK_MSG_ID_178_CRC 80



#define MAVLINK_MESSAGE_INFO_Reaction { \
	"Reaction", \
	1, \
	{  { "Switch", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_reaction_t, Switch) }, \
         } \
}


/**
 * @brief Pack a reaction message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Switch Timestamp (milliseconds since system boot)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_reaction_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t Switch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_Reaction_LEN];
	_mav_put_uint8_t(buf, 0, Switch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Reaction_LEN);
#else
	mavlink_reaction_t packet;
	packet.Switch = Switch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Reaction_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_Reaction;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Reaction_LEN, MAVLINK_MSG_ID_Reaction_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Reaction_LEN);
#endif
}

/**
 * @brief Pack a reaction message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Switch Timestamp (milliseconds since system boot)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_reaction_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t Switch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_Reaction_LEN];
	_mav_put_uint8_t(buf, 0, Switch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Reaction_LEN);
#else
	mavlink_reaction_t packet;
	packet.Switch = Switch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Reaction_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_Reaction;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Reaction_LEN, MAVLINK_MSG_ID_Reaction_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Reaction_LEN);
#endif
}

/**
 * @brief Encode a reaction struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param reaction C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_reaction_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_reaction_t* reaction)
{
	return mavlink_msg_reaction_pack(system_id, component_id, msg, reaction->Switch);
}

/**
 * @brief Encode a reaction struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param reaction C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_reaction_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_reaction_t* reaction)
{
	return mavlink_msg_reaction_pack_chan(system_id, component_id, chan, msg, reaction->Switch);
}

/**
 * @brief Send a reaction message
 * @param chan MAVLink channel to send the message
 *
 * @param Switch Timestamp (milliseconds since system boot)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_reaction_send(mavlink_channel_t chan, uint8_t Switch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_Reaction_LEN];
	_mav_put_uint8_t(buf, 0, Switch);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Reaction, buf, MAVLINK_MSG_ID_Reaction_LEN, MAVLINK_MSG_ID_Reaction_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Reaction, buf, MAVLINK_MSG_ID_Reaction_LEN);
#endif
#else
	mavlink_reaction_t packet;
	packet.Switch = Switch;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Reaction, (const char *)&packet, MAVLINK_MSG_ID_Reaction_LEN, MAVLINK_MSG_ID_Reaction_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Reaction, (const char *)&packet, MAVLINK_MSG_ID_Reaction_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_Reaction_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_reaction_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t Switch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, Switch);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Reaction, buf, MAVLINK_MSG_ID_Reaction_LEN, MAVLINK_MSG_ID_Reaction_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Reaction, buf, MAVLINK_MSG_ID_Reaction_LEN);
#endif
#else
	mavlink_reaction_t *packet = (mavlink_reaction_t *)msgbuf;
	packet->Switch = Switch;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Reaction, (const char *)packet, MAVLINK_MSG_ID_Reaction_LEN, MAVLINK_MSG_ID_Reaction_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Reaction, (const char *)packet, MAVLINK_MSG_ID_Reaction_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE Reaction UNPACKING


/**
 * @brief Get field Switch from reaction message
 *
 * @return Timestamp (milliseconds since system boot)
 */
static inline uint8_t mavlink_msg_reaction_get_Switch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a reaction message into a struct
 *
 * @param msg The message to decode
 * @param reaction C-struct to decode the message contents into
 */
static inline void mavlink_msg_reaction_decode(const mavlink_message_t* msg, mavlink_reaction_t* reaction)
{
#if MAVLINK_NEED_BYTE_SWAP
	reaction->Switch = mavlink_msg_reaction_get_Switch(msg);
#else
	memcpy(reaction, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_Reaction_LEN);
#endif
}
