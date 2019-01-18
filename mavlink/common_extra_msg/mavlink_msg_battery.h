// MESSAGE BATTERY PACKING

#define MAVLINK_MSG_ID_BATTERY 161

typedef struct __mavlink_battery_t
{
 uint16_t voltage; /*< battery voltage (V)*/
 int16_t current; /*< battery current (mA)*/
 uint8_t percent; /*<  battery percent (%)*/
 uint8_t state; /*<  battery state (%)*/
} mavlink_battery_t;

#define MAVLINK_MSG_ID_BATTERY_LEN 6
#define MAVLINK_MSG_ID_161_LEN 6

#define MAVLINK_MSG_ID_BATTERY_CRC 182
#define MAVLINK_MSG_ID_161_CRC 182



#define MAVLINK_MESSAGE_INFO_BATTERY { \
	"BATTERY", \
	4, \
	{  { "voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_battery_t, voltage) }, \
         { "current", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_battery_t, current) }, \
         { "percent", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_battery_t, percent) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_battery_t, state) }, \
         } \
}


/**
 * @brief Pack a battery message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param voltage battery voltage (V)
 * @param current battery current (mA)
 * @param percent  battery percent (%)
 * @param state  battery state (%)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_battery_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t voltage, int16_t current, uint8_t percent, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BATTERY_LEN];
	_mav_put_uint16_t(buf, 0, voltage);
	_mav_put_int16_t(buf, 2, current);
	_mav_put_uint8_t(buf, 4, percent);
	_mav_put_uint8_t(buf, 5, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_LEN);
#else
	mavlink_battery_t packet;
	packet.voltage = voltage;
	packet.current = current;
	packet.percent = percent;
	packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BATTERY_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_BATTERY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BATTERY_LEN, MAVLINK_MSG_ID_BATTERY_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BATTERY_LEN);
#endif
}

/**
 * @brief Pack a battery message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param voltage battery voltage (V)
 * @param current battery current (mA)
 * @param percent  battery percent (%)
 * @param state  battery state (%)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_battery_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t voltage,int16_t current,uint8_t percent,uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BATTERY_LEN];
	_mav_put_uint16_t(buf, 0, voltage);
	_mav_put_int16_t(buf, 2, current);
	_mav_put_uint8_t(buf, 4, percent);
	_mav_put_uint8_t(buf, 5, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_LEN);
#else
	mavlink_battery_t packet;
	packet.voltage = voltage;
	packet.current = current;
	packet.percent = percent;
	packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BATTERY_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_BATTERY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BATTERY_LEN, MAVLINK_MSG_ID_BATTERY_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BATTERY_LEN);
#endif
}

/**
 * @brief Encode a battery struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param battery C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_battery_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_battery_t* battery)
{
	return mavlink_msg_battery_pack(system_id, component_id, msg, battery->voltage, battery->current, battery->percent, battery->state);
}

/**
 * @brief Encode a battery struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param battery C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_battery_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_battery_t* battery)
{
	return mavlink_msg_battery_pack_chan(system_id, component_id, chan, msg, battery->voltage, battery->current, battery->percent, battery->state);
}

/**
 * @brief Send a battery message
 * @param chan MAVLink channel to send the message
 *
 * @param voltage battery voltage (V)
 * @param current battery current (mA)
 * @param percent  battery percent (%)
 * @param state  battery state (%)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_battery_send(mavlink_channel_t chan, uint16_t voltage, int16_t current, uint8_t percent, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BATTERY_LEN];
	_mav_put_uint16_t(buf, 0, voltage);
	_mav_put_int16_t(buf, 2, current);
	_mav_put_uint8_t(buf, 4, percent);
	_mav_put_uint8_t(buf, 5, state);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY, buf, MAVLINK_MSG_ID_BATTERY_LEN, MAVLINK_MSG_ID_BATTERY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY, buf, MAVLINK_MSG_ID_BATTERY_LEN);
#endif
#else
	mavlink_battery_t packet;
	packet.voltage = voltage;
	packet.current = current;
	packet.percent = percent;
	packet.state = state;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY, (const char *)&packet, MAVLINK_MSG_ID_BATTERY_LEN, MAVLINK_MSG_ID_BATTERY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY, (const char *)&packet, MAVLINK_MSG_ID_BATTERY_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_BATTERY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_battery_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t voltage, int16_t current, uint8_t percent, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint16_t(buf, 0, voltage);
	_mav_put_int16_t(buf, 2, current);
	_mav_put_uint8_t(buf, 4, percent);
	_mav_put_uint8_t(buf, 5, state);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY, buf, MAVLINK_MSG_ID_BATTERY_LEN, MAVLINK_MSG_ID_BATTERY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY, buf, MAVLINK_MSG_ID_BATTERY_LEN);
#endif
#else
	mavlink_battery_t *packet = (mavlink_battery_t *)msgbuf;
	packet->voltage = voltage;
	packet->current = current;
	packet->percent = percent;
	packet->state = state;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY, (const char *)packet, MAVLINK_MSG_ID_BATTERY_LEN, MAVLINK_MSG_ID_BATTERY_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY, (const char *)packet, MAVLINK_MSG_ID_BATTERY_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE BATTERY UNPACKING


/**
 * @brief Get field voltage from battery message
 *
 * @return battery voltage (V)
 */
static inline uint16_t mavlink_msg_battery_get_voltage(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field current from battery message
 *
 * @return battery current (mA)
 */
static inline int16_t mavlink_msg_battery_get_current(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field percent from battery message
 *
 * @return  battery percent (%)
 */
static inline uint8_t mavlink_msg_battery_get_percent(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field state from battery message
 *
 * @return  battery state (%)
 */
static inline uint8_t mavlink_msg_battery_get_state(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Decode a battery message into a struct
 *
 * @param msg The message to decode
 * @param battery C-struct to decode the message contents into
 */
static inline void mavlink_msg_battery_decode(const mavlink_message_t* msg, mavlink_battery_t* battery)
{
#if MAVLINK_NEED_BYTE_SWAP
	battery->voltage = mavlink_msg_battery_get_voltage(msg);
	battery->current = mavlink_msg_battery_get_current(msg);
	battery->percent = mavlink_msg_battery_get_percent(msg);
	battery->state = mavlink_msg_battery_get_state(msg);
#else
	memcpy(battery, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_BATTERY_LEN);
#endif
}
