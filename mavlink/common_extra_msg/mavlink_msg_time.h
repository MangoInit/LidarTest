// MESSAGE TIME PACKING

#define MAVLINK_MSG_ID_TIME 162

typedef struct __mavlink_time_t
{
 uint16_t Year; /*< Specifies the RTC Date Year*/
 uint8_t Hours; /*< Specifies the RTC Time Hour*/
 uint8_t Minutes; /*< Specifies the RTC Time Minutes*/
 uint8_t Seconds; /*< Specifies the RTC Time Seconds*/
 uint8_t WeekDay; /*< Specifies the RTC Date WeekDay*/
 uint8_t Month; /*< Specifies the RTC Date Month (in BCD format)*/
 uint8_t Date; /*< Specifies the RTC Date*/
} mavlink_time_t;

#define MAVLINK_MSG_ID_TIME_LEN 8
#define MAVLINK_MSG_ID_162_LEN 8

#define MAVLINK_MSG_ID_TIME_CRC 208
#define MAVLINK_MSG_ID_162_CRC 208



#define MAVLINK_MESSAGE_INFO_TIME { \
	"TIME", \
	7, \
	{  { "Year", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_time_t, Year) }, \
         { "Hours", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_time_t, Hours) }, \
         { "Minutes", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_time_t, Minutes) }, \
         { "Seconds", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_time_t, Seconds) }, \
         { "WeekDay", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_time_t, WeekDay) }, \
         { "Month", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_time_t, Month) }, \
         { "Date", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_time_t, Date) }, \
         } \
}


/**
 * @brief Pack a time message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Hours Specifies the RTC Time Hour
 * @param Minutes Specifies the RTC Time Minutes
 * @param Seconds Specifies the RTC Time Seconds
 * @param WeekDay Specifies the RTC Date WeekDay
 * @param Month Specifies the RTC Date Month (in BCD format)
 * @param Date Specifies the RTC Date
 * @param Year Specifies the RTC Date Year
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_time_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t Hours, uint8_t Minutes, uint8_t Seconds, uint8_t WeekDay, uint8_t Month, uint8_t Date, uint16_t Year)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TIME_LEN];
	_mav_put_uint16_t(buf, 0, Year);
	_mav_put_uint8_t(buf, 2, Hours);
	_mav_put_uint8_t(buf, 3, Minutes);
	_mav_put_uint8_t(buf, 4, Seconds);
	_mav_put_uint8_t(buf, 5, WeekDay);
	_mav_put_uint8_t(buf, 6, Month);
	_mav_put_uint8_t(buf, 7, Date);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TIME_LEN);
#else
	mavlink_time_t packet;
	packet.Year = Year;
	packet.Hours = Hours;
	packet.Minutes = Minutes;
	packet.Seconds = Seconds;
	packet.WeekDay = WeekDay;
	packet.Month = Month;
	packet.Date = Date;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TIME_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TIME;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TIME_LEN, MAVLINK_MSG_ID_TIME_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TIME_LEN);
#endif
}

/**
 * @brief Pack a time message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Hours Specifies the RTC Time Hour
 * @param Minutes Specifies the RTC Time Minutes
 * @param Seconds Specifies the RTC Time Seconds
 * @param WeekDay Specifies the RTC Date WeekDay
 * @param Month Specifies the RTC Date Month (in BCD format)
 * @param Date Specifies the RTC Date
 * @param Year Specifies the RTC Date Year
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_time_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t Hours,uint8_t Minutes,uint8_t Seconds,uint8_t WeekDay,uint8_t Month,uint8_t Date,uint16_t Year)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TIME_LEN];
	_mav_put_uint16_t(buf, 0, Year);
	_mav_put_uint8_t(buf, 2, Hours);
	_mav_put_uint8_t(buf, 3, Minutes);
	_mav_put_uint8_t(buf, 4, Seconds);
	_mav_put_uint8_t(buf, 5, WeekDay);
	_mav_put_uint8_t(buf, 6, Month);
	_mav_put_uint8_t(buf, 7, Date);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TIME_LEN);
#else
	mavlink_time_t packet;
	packet.Year = Year;
	packet.Hours = Hours;
	packet.Minutes = Minutes;
	packet.Seconds = Seconds;
	packet.WeekDay = WeekDay;
	packet.Month = Month;
	packet.Date = Date;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TIME_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TIME;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TIME_LEN, MAVLINK_MSG_ID_TIME_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TIME_LEN);
#endif
}

/**
 * @brief Encode a time struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param time C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_time_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_time_t* time)
{
	return mavlink_msg_time_pack(system_id, component_id, msg, time->Hours, time->Minutes, time->Seconds, time->WeekDay, time->Month, time->Date, time->Year);
}

/**
 * @brief Encode a time struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_time_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_time_t* time)
{
	return mavlink_msg_time_pack_chan(system_id, component_id, chan, msg, time->Hours, time->Minutes, time->Seconds, time->WeekDay, time->Month, time->Date, time->Year);
}

/**
 * @brief Send a time message
 * @param chan MAVLink channel to send the message
 *
 * @param Hours Specifies the RTC Time Hour
 * @param Minutes Specifies the RTC Time Minutes
 * @param Seconds Specifies the RTC Time Seconds
 * @param WeekDay Specifies the RTC Date WeekDay
 * @param Month Specifies the RTC Date Month (in BCD format)
 * @param Date Specifies the RTC Date
 * @param Year Specifies the RTC Date Year
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_time_send(mavlink_channel_t chan, uint8_t Hours, uint8_t Minutes, uint8_t Seconds, uint8_t WeekDay, uint8_t Month, uint8_t Date, uint16_t Year)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TIME_LEN];
	_mav_put_uint16_t(buf, 0, Year);
	_mav_put_uint8_t(buf, 2, Hours);
	_mav_put_uint8_t(buf, 3, Minutes);
	_mav_put_uint8_t(buf, 4, Seconds);
	_mav_put_uint8_t(buf, 5, WeekDay);
	_mav_put_uint8_t(buf, 6, Month);
	_mav_put_uint8_t(buf, 7, Date);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TIME, buf, MAVLINK_MSG_ID_TIME_LEN, MAVLINK_MSG_ID_TIME_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TIME, buf, MAVLINK_MSG_ID_TIME_LEN);
#endif
#else
	mavlink_time_t packet;
	packet.Year = Year;
	packet.Hours = Hours;
	packet.Minutes = Minutes;
	packet.Seconds = Seconds;
	packet.WeekDay = WeekDay;
	packet.Month = Month;
	packet.Date = Date;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TIME, (const char *)&packet, MAVLINK_MSG_ID_TIME_LEN, MAVLINK_MSG_ID_TIME_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TIME, (const char *)&packet, MAVLINK_MSG_ID_TIME_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_TIME_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_time_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t Hours, uint8_t Minutes, uint8_t Seconds, uint8_t WeekDay, uint8_t Month, uint8_t Date, uint16_t Year)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint16_t(buf, 0, Year);
	_mav_put_uint8_t(buf, 2, Hours);
	_mav_put_uint8_t(buf, 3, Minutes);
	_mav_put_uint8_t(buf, 4, Seconds);
	_mav_put_uint8_t(buf, 5, WeekDay);
	_mav_put_uint8_t(buf, 6, Month);
	_mav_put_uint8_t(buf, 7, Date);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TIME, buf, MAVLINK_MSG_ID_TIME_LEN, MAVLINK_MSG_ID_TIME_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TIME, buf, MAVLINK_MSG_ID_TIME_LEN);
#endif
#else
	mavlink_time_t *packet = (mavlink_time_t *)msgbuf;
	packet->Year = Year;
	packet->Hours = Hours;
	packet->Minutes = Minutes;
	packet->Seconds = Seconds;
	packet->WeekDay = WeekDay;
	packet->Month = Month;
	packet->Date = Date;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TIME, (const char *)packet, MAVLINK_MSG_ID_TIME_LEN, MAVLINK_MSG_ID_TIME_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TIME, (const char *)packet, MAVLINK_MSG_ID_TIME_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE TIME UNPACKING


/**
 * @brief Get field Hours from time message
 *
 * @return Specifies the RTC Time Hour
 */
static inline uint8_t mavlink_msg_time_get_Hours(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field Minutes from time message
 *
 * @return Specifies the RTC Time Minutes
 */
static inline uint8_t mavlink_msg_time_get_Minutes(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field Seconds from time message
 *
 * @return Specifies the RTC Time Seconds
 */
static inline uint8_t mavlink_msg_time_get_Seconds(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field WeekDay from time message
 *
 * @return Specifies the RTC Date WeekDay
 */
static inline uint8_t mavlink_msg_time_get_WeekDay(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field Month from time message
 *
 * @return Specifies the RTC Date Month (in BCD format)
 */
static inline uint8_t mavlink_msg_time_get_Month(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field Date from time message
 *
 * @return Specifies the RTC Date
 */
static inline uint8_t mavlink_msg_time_get_Date(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field Year from time message
 *
 * @return Specifies the RTC Date Year
 */
static inline uint16_t mavlink_msg_time_get_Year(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Decode a time message into a struct
 *
 * @param msg The message to decode
 * @param time C-struct to decode the message contents into
 */
static inline void mavlink_msg_time_decode(const mavlink_message_t* msg, mavlink_time_t* time)
{
#if MAVLINK_NEED_BYTE_SWAP
	time->Year = mavlink_msg_time_get_Year(msg);
	time->Hours = mavlink_msg_time_get_Hours(msg);
	time->Minutes = mavlink_msg_time_get_Minutes(msg);
	time->Seconds = mavlink_msg_time_get_Seconds(msg);
	time->WeekDay = mavlink_msg_time_get_WeekDay(msg);
	time->Month = mavlink_msg_time_get_Month(msg);
	time->Date = mavlink_msg_time_get_Date(msg);
#else
	memcpy(time, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_TIME_LEN);
#endif
}
