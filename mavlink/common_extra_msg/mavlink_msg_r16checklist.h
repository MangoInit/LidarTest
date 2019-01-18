// MESSAGE R16CheckList PACKING

#define MAVLINK_MSG_ID_R16CheckList 168

typedef struct __mavlink_r16checklist_t
{
 uint8_t iteam; /*< point1*/
 uint8_t result; /*< point2*/
} mavlink_r16checklist_t;

#define MAVLINK_MSG_ID_R16CheckList_LEN 2
#define MAVLINK_MSG_ID_168_LEN 2

#define MAVLINK_MSG_ID_R16CheckList_CRC 83
#define MAVLINK_MSG_ID_168_CRC 83



#define MAVLINK_MESSAGE_INFO_R16CheckList { \
	"R16CheckList", \
	2, \
	{  { "iteam", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_r16checklist_t, iteam) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_r16checklist_t, result) }, \
         } \
}


/**
 * @brief Pack a r16checklist message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param iteam point1
 * @param result point2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r16checklist_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t iteam, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_R16CheckList_LEN];
	_mav_put_uint8_t(buf, 0, iteam);
	_mav_put_uint8_t(buf, 1, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R16CheckList_LEN);
#else
	mavlink_r16checklist_t packet;
	packet.iteam = iteam;
	packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R16CheckList_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_R16CheckList;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_R16CheckList_LEN, MAVLINK_MSG_ID_R16CheckList_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_R16CheckList_LEN);
#endif
}

/**
 * @brief Pack a r16checklist message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param iteam point1
 * @param result point2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_r16checklist_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t iteam,uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_R16CheckList_LEN];
	_mav_put_uint8_t(buf, 0, iteam);
	_mav_put_uint8_t(buf, 1, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_R16CheckList_LEN);
#else
	mavlink_r16checklist_t packet;
	packet.iteam = iteam;
	packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_R16CheckList_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_R16CheckList;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_R16CheckList_LEN, MAVLINK_MSG_ID_R16CheckList_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_R16CheckList_LEN);
#endif
}

/**
 * @brief Encode a r16checklist struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param r16checklist C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r16checklist_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_r16checklist_t* r16checklist)
{
	return mavlink_msg_r16checklist_pack(system_id, component_id, msg, r16checklist->iteam, r16checklist->result);
}

/**
 * @brief Encode a r16checklist struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param r16checklist C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_r16checklist_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_r16checklist_t* r16checklist)
{
	return mavlink_msg_r16checklist_pack_chan(system_id, component_id, chan, msg, r16checklist->iteam, r16checklist->result);
}

/**
 * @brief Send a r16checklist message
 * @param chan MAVLink channel to send the message
 *
 * @param iteam point1
 * @param result point2
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_r16checklist_send(mavlink_channel_t chan, uint8_t iteam, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_R16CheckList_LEN];
	_mav_put_uint8_t(buf, 0, iteam);
	_mav_put_uint8_t(buf, 1, result);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R16CheckList, buf, MAVLINK_MSG_ID_R16CheckList_LEN, MAVLINK_MSG_ID_R16CheckList_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R16CheckList, buf, MAVLINK_MSG_ID_R16CheckList_LEN);
#endif
#else
	mavlink_r16checklist_t packet;
	packet.iteam = iteam;
	packet.result = result;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R16CheckList, (const char *)&packet, MAVLINK_MSG_ID_R16CheckList_LEN, MAVLINK_MSG_ID_R16CheckList_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R16CheckList, (const char *)&packet, MAVLINK_MSG_ID_R16CheckList_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_R16CheckList_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_r16checklist_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t iteam, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, iteam);
	_mav_put_uint8_t(buf, 1, result);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R16CheckList, buf, MAVLINK_MSG_ID_R16CheckList_LEN, MAVLINK_MSG_ID_R16CheckList_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R16CheckList, buf, MAVLINK_MSG_ID_R16CheckList_LEN);
#endif
#else
	mavlink_r16checklist_t *packet = (mavlink_r16checklist_t *)msgbuf;
	packet->iteam = iteam;
	packet->result = result;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R16CheckList, (const char *)packet, MAVLINK_MSG_ID_R16CheckList_LEN, MAVLINK_MSG_ID_R16CheckList_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_R16CheckList, (const char *)packet, MAVLINK_MSG_ID_R16CheckList_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE R16CheckList UNPACKING


/**
 * @brief Get field iteam from r16checklist message
 *
 * @return point1
 */
static inline uint8_t mavlink_msg_r16checklist_get_iteam(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field result from r16checklist message
 *
 * @return point2
 */
static inline uint8_t mavlink_msg_r16checklist_get_result(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a r16checklist message into a struct
 *
 * @param msg The message to decode
 * @param r16checklist C-struct to decode the message contents into
 */
static inline void mavlink_msg_r16checklist_decode(const mavlink_message_t* msg, mavlink_r16checklist_t* r16checklist)
{
#if MAVLINK_NEED_BYTE_SWAP
	r16checklist->iteam = mavlink_msg_r16checklist_get_iteam(msg);
	r16checklist->result = mavlink_msg_r16checklist_get_result(msg);
#else
	memcpy(r16checklist, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_R16CheckList_LEN);
#endif
}
