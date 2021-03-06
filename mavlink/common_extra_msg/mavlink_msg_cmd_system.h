// MESSAGE CMD_SYSTEM PACKING

#define MAVLINK_MSG_ID_CMD_SYSTEM 153

typedef struct __mavlink_cmd_system_t
{
 uint8_t cmd; /*< See EnumCmdSystem*/
} mavlink_cmd_system_t;

#define MAVLINK_MSG_ID_CMD_SYSTEM_LEN 1
#define MAVLINK_MSG_ID_153_LEN 1

#define MAVLINK_MSG_ID_CMD_SYSTEM_CRC 109
#define MAVLINK_MSG_ID_153_CRC 109



#define MAVLINK_MESSAGE_INFO_CMD_SYSTEM { \
	"CMD_SYSTEM", \
	1, \
	{  { "cmd", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cmd_system_t, cmd) }, \
         } \
}


/**
 * @brief Pack a cmd_system message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cmd See EnumCmdSystem
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_system_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CMD_SYSTEM_LEN];
	_mav_put_uint8_t(buf, 0, cmd);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SYSTEM_LEN);
#else
	mavlink_cmd_system_t packet;
	packet.cmd = cmd;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SYSTEM_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CMD_SYSTEM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_SYSTEM_LEN, MAVLINK_MSG_ID_CMD_SYSTEM_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_SYSTEM_LEN);
#endif
}

/**
 * @brief Pack a cmd_system message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd See EnumCmdSystem
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_system_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CMD_SYSTEM_LEN];
	_mav_put_uint8_t(buf, 0, cmd);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_SYSTEM_LEN);
#else
	mavlink_cmd_system_t packet;
	packet.cmd = cmd;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_SYSTEM_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CMD_SYSTEM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_SYSTEM_LEN, MAVLINK_MSG_ID_CMD_SYSTEM_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_SYSTEM_LEN);
#endif
}

/**
 * @brief Encode a cmd_system struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_system C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_system_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_system_t* cmd_system)
{
	return mavlink_msg_cmd_system_pack(system_id, component_id, msg, cmd_system->cmd);
}

/**
 * @brief Encode a cmd_system struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_system C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_system_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_system_t* cmd_system)
{
	return mavlink_msg_cmd_system_pack_chan(system_id, component_id, chan, msg, cmd_system->cmd);
}

/**
 * @brief Send a cmd_system message
 * @param chan MAVLink channel to send the message
 *
 * @param cmd See EnumCmdSystem
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_system_send(mavlink_channel_t chan, uint8_t cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CMD_SYSTEM_LEN];
	_mav_put_uint8_t(buf, 0, cmd);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SYSTEM, buf, MAVLINK_MSG_ID_CMD_SYSTEM_LEN, MAVLINK_MSG_ID_CMD_SYSTEM_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SYSTEM, buf, MAVLINK_MSG_ID_CMD_SYSTEM_LEN);
#endif
#else
	mavlink_cmd_system_t packet;
	packet.cmd = cmd;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SYSTEM, (const char *)&packet, MAVLINK_MSG_ID_CMD_SYSTEM_LEN, MAVLINK_MSG_ID_CMD_SYSTEM_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SYSTEM, (const char *)&packet, MAVLINK_MSG_ID_CMD_SYSTEM_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_CMD_SYSTEM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_system_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, cmd);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SYSTEM, buf, MAVLINK_MSG_ID_CMD_SYSTEM_LEN, MAVLINK_MSG_ID_CMD_SYSTEM_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SYSTEM, buf, MAVLINK_MSG_ID_CMD_SYSTEM_LEN);
#endif
#else
	mavlink_cmd_system_t *packet = (mavlink_cmd_system_t *)msgbuf;
	packet->cmd = cmd;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SYSTEM, (const char *)packet, MAVLINK_MSG_ID_CMD_SYSTEM_LEN, MAVLINK_MSG_ID_CMD_SYSTEM_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_SYSTEM, (const char *)packet, MAVLINK_MSG_ID_CMD_SYSTEM_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE CMD_SYSTEM UNPACKING


/**
 * @brief Get field cmd from cmd_system message
 *
 * @return See EnumCmdSystem
 */
static inline uint8_t mavlink_msg_cmd_system_get_cmd(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a cmd_system message into a struct
 *
 * @param msg The message to decode
 * @param cmd_system C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_system_decode(const mavlink_message_t* msg, mavlink_cmd_system_t* cmd_system)
{
#if MAVLINK_NEED_BYTE_SWAP
	cmd_system->cmd = mavlink_msg_cmd_system_get_cmd(msg);
#else
	memcpy(cmd_system, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_CMD_SYSTEM_LEN);
#endif
}
