// MESSAGE PcbaCheckList PACKING

#define MAVLINK_MSG_ID_PcbaCheckList 173

typedef struct __mavlink_pcbachecklist_t
{
 float voltage; /*< return voltage*/
 uint8_t iteam; /*< test iteam*/
 uint8_t state; /*< return result*/
} mavlink_pcbachecklist_t;

#define MAVLINK_MSG_ID_PcbaCheckList_LEN 6
#define MAVLINK_MSG_ID_173_LEN 6

#define MAVLINK_MSG_ID_PcbaCheckList_CRC 39
#define MAVLINK_MSG_ID_173_CRC 39



#define MAVLINK_MESSAGE_INFO_PcbaCheckList { \
	"PcbaCheckList", \
	3, \
	{  { "voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_pcbachecklist_t, voltage) }, \
         { "iteam", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_pcbachecklist_t, iteam) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_pcbachecklist_t, state) }, \
         } \
}


/**
 * @brief Pack a pcbachecklist message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param iteam test iteam
 * @param state return result
 * @param voltage return voltage
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pcbachecklist_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t iteam, uint8_t state, float voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PcbaCheckList_LEN];
	_mav_put_float(buf, 0, voltage);
	_mav_put_uint8_t(buf, 4, iteam);
	_mav_put_uint8_t(buf, 5, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PcbaCheckList_LEN);
#else
	mavlink_pcbachecklist_t packet;
	packet.voltage = voltage;
	packet.iteam = iteam;
	packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PcbaCheckList_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PcbaCheckList;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PcbaCheckList_LEN, MAVLINK_MSG_ID_PcbaCheckList_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PcbaCheckList_LEN);
#endif
}

/**
 * @brief Pack a pcbachecklist message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param iteam test iteam
 * @param state return result
 * @param voltage return voltage
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pcbachecklist_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t iteam,uint8_t state,float voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PcbaCheckList_LEN];
	_mav_put_float(buf, 0, voltage);
	_mav_put_uint8_t(buf, 4, iteam);
	_mav_put_uint8_t(buf, 5, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PcbaCheckList_LEN);
#else
	mavlink_pcbachecklist_t packet;
	packet.voltage = voltage;
	packet.iteam = iteam;
	packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PcbaCheckList_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PcbaCheckList;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PcbaCheckList_LEN, MAVLINK_MSG_ID_PcbaCheckList_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PcbaCheckList_LEN);
#endif
}

/**
 * @brief Encode a pcbachecklist struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pcbachecklist C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pcbachecklist_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pcbachecklist_t* pcbachecklist)
{
	return mavlink_msg_pcbachecklist_pack(system_id, component_id, msg, pcbachecklist->iteam, pcbachecklist->state, pcbachecklist->voltage);
}

/**
 * @brief Encode a pcbachecklist struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pcbachecklist C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pcbachecklist_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pcbachecklist_t* pcbachecklist)
{
	return mavlink_msg_pcbachecklist_pack_chan(system_id, component_id, chan, msg, pcbachecklist->iteam, pcbachecklist->state, pcbachecklist->voltage);
}

/**
 * @brief Send a pcbachecklist message
 * @param chan MAVLink channel to send the message
 *
 * @param iteam test iteam
 * @param state return result
 * @param voltage return voltage
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pcbachecklist_send(mavlink_channel_t chan, uint8_t iteam, uint8_t state, float voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PcbaCheckList_LEN];
	_mav_put_float(buf, 0, voltage);
	_mav_put_uint8_t(buf, 4, iteam);
	_mav_put_uint8_t(buf, 5, state);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PcbaCheckList, buf, MAVLINK_MSG_ID_PcbaCheckList_LEN, MAVLINK_MSG_ID_PcbaCheckList_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PcbaCheckList, buf, MAVLINK_MSG_ID_PcbaCheckList_LEN);
#endif
#else
	mavlink_pcbachecklist_t packet;
	packet.voltage = voltage;
	packet.iteam = iteam;
	packet.state = state;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PcbaCheckList, (const char *)&packet, MAVLINK_MSG_ID_PcbaCheckList_LEN, MAVLINK_MSG_ID_PcbaCheckList_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PcbaCheckList, (const char *)&packet, MAVLINK_MSG_ID_PcbaCheckList_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_PcbaCheckList_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pcbachecklist_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t iteam, uint8_t state, float voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, voltage);
	_mav_put_uint8_t(buf, 4, iteam);
	_mav_put_uint8_t(buf, 5, state);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PcbaCheckList, buf, MAVLINK_MSG_ID_PcbaCheckList_LEN, MAVLINK_MSG_ID_PcbaCheckList_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PcbaCheckList, buf, MAVLINK_MSG_ID_PcbaCheckList_LEN);
#endif
#else
	mavlink_pcbachecklist_t *packet = (mavlink_pcbachecklist_t *)msgbuf;
	packet->voltage = voltage;
	packet->iteam = iteam;
	packet->state = state;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PcbaCheckList, (const char *)packet, MAVLINK_MSG_ID_PcbaCheckList_LEN, MAVLINK_MSG_ID_PcbaCheckList_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PcbaCheckList, (const char *)packet, MAVLINK_MSG_ID_PcbaCheckList_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE PcbaCheckList UNPACKING


/**
 * @brief Get field iteam from pcbachecklist message
 *
 * @return test iteam
 */
static inline uint8_t mavlink_msg_pcbachecklist_get_iteam(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field state from pcbachecklist message
 *
 * @return return result
 */
static inline uint8_t mavlink_msg_pcbachecklist_get_state(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field voltage from pcbachecklist message
 *
 * @return return voltage
 */
static inline float mavlink_msg_pcbachecklist_get_voltage(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a pcbachecklist message into a struct
 *
 * @param msg The message to decode
 * @param pcbachecklist C-struct to decode the message contents into
 */
static inline void mavlink_msg_pcbachecklist_decode(const mavlink_message_t* msg, mavlink_pcbachecklist_t* pcbachecklist)
{
#if MAVLINK_NEED_BYTE_SWAP
	pcbachecklist->voltage = mavlink_msg_pcbachecklist_get_voltage(msg);
	pcbachecklist->iteam = mavlink_msg_pcbachecklist_get_iteam(msg);
	pcbachecklist->state = mavlink_msg_pcbachecklist_get_state(msg);
#else
	memcpy(pcbachecklist, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_PcbaCheckList_LEN);
#endif
}
