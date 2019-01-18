// MESSAGE IMU_DATA PACKING

#define MAVLINK_MSG_ID_IMU_DATA 156

typedef struct __mavlink_imu_data_t
{
 float gyro_z; /*<  rad/s */
 float accel_x; /*<  m/s^2 */
 float accel_y; /*<  m/s^2 */
 float accel_z; /*<  m/s^2 */
 float yaw; /*<  y (rad)  */
 float roll; /*<  z (rad)  */
 float pitch; /*<  x (rad)  */
} mavlink_imu_data_t;

#define MAVLINK_MSG_ID_IMU_DATA_LEN 28
#define MAVLINK_MSG_ID_156_LEN 28

#define MAVLINK_MSG_ID_IMU_DATA_CRC 71
#define MAVLINK_MSG_ID_156_CRC 71



#define MAVLINK_MESSAGE_INFO_IMU_DATA { \
	"IMU_DATA", \
	7, \
	{  { "gyro_z", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_imu_data_t, gyro_z) }, \
         { "accel_x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_imu_data_t, accel_x) }, \
         { "accel_y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_imu_data_t, accel_y) }, \
         { "accel_z", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_imu_data_t, accel_z) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_imu_data_t, yaw) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_imu_data_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_imu_data_t, pitch) }, \
         } \
}


/**
 * @brief Pack a imu_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param gyro_z  rad/s 
 * @param accel_x  m/s^2 
 * @param accel_y  m/s^2 
 * @param accel_z  m/s^2 
 * @param yaw  y (rad)  
 * @param roll  z (rad)  
 * @param pitch  x (rad)  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_imu_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float gyro_z, float accel_x, float accel_y, float accel_z, float yaw, float roll, float pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_IMU_DATA_LEN];
	_mav_put_float(buf, 0, gyro_z);
	_mav_put_float(buf, 4, accel_x);
	_mav_put_float(buf, 8, accel_y);
	_mav_put_float(buf, 12, accel_z);
	_mav_put_float(buf, 16, yaw);
	_mav_put_float(buf, 20, roll);
	_mav_put_float(buf, 24, pitch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IMU_DATA_LEN);
#else
	mavlink_imu_data_t packet;
	packet.gyro_z = gyro_z;
	packet.accel_x = accel_x;
	packet.accel_y = accel_y;
	packet.accel_z = accel_z;
	packet.yaw = yaw;
	packet.roll = roll;
	packet.pitch = pitch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IMU_DATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_IMU_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IMU_DATA_LEN, MAVLINK_MSG_ID_IMU_DATA_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IMU_DATA_LEN);
#endif
}

/**
 * @brief Pack a imu_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gyro_z  rad/s 
 * @param accel_x  m/s^2 
 * @param accel_y  m/s^2 
 * @param accel_z  m/s^2 
 * @param yaw  y (rad)  
 * @param roll  z (rad)  
 * @param pitch  x (rad)  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_imu_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float gyro_z,float accel_x,float accel_y,float accel_z,float yaw,float roll,float pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_IMU_DATA_LEN];
	_mav_put_float(buf, 0, gyro_z);
	_mav_put_float(buf, 4, accel_x);
	_mav_put_float(buf, 8, accel_y);
	_mav_put_float(buf, 12, accel_z);
	_mav_put_float(buf, 16, yaw);
	_mav_put_float(buf, 20, roll);
	_mav_put_float(buf, 24, pitch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IMU_DATA_LEN);
#else
	mavlink_imu_data_t packet;
	packet.gyro_z = gyro_z;
	packet.accel_x = accel_x;
	packet.accel_y = accel_y;
	packet.accel_z = accel_z;
	packet.yaw = yaw;
	packet.roll = roll;
	packet.pitch = pitch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IMU_DATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_IMU_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IMU_DATA_LEN, MAVLINK_MSG_ID_IMU_DATA_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IMU_DATA_LEN);
#endif
}

/**
 * @brief Encode a imu_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param imu_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_imu_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_imu_data_t* imu_data)
{
	return mavlink_msg_imu_data_pack(system_id, component_id, msg, imu_data->gyro_z, imu_data->accel_x, imu_data->accel_y, imu_data->accel_z, imu_data->yaw, imu_data->roll, imu_data->pitch);
}

/**
 * @brief Encode a imu_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param imu_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_imu_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_imu_data_t* imu_data)
{
	return mavlink_msg_imu_data_pack_chan(system_id, component_id, chan, msg, imu_data->gyro_z, imu_data->accel_x, imu_data->accel_y, imu_data->accel_z, imu_data->yaw, imu_data->roll, imu_data->pitch);
}

/**
 * @brief Send a imu_data message
 * @param chan MAVLink channel to send the message
 *
 * @param gyro_z  rad/s 
 * @param accel_x  m/s^2 
 * @param accel_y  m/s^2 
 * @param accel_z  m/s^2 
 * @param yaw  y (rad)  
 * @param roll  z (rad)  
 * @param pitch  x (rad)  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_imu_data_send(mavlink_channel_t chan, float gyro_z, float accel_x, float accel_y, float accel_z, float yaw, float roll, float pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_IMU_DATA_LEN];
	_mav_put_float(buf, 0, gyro_z);
	_mav_put_float(buf, 4, accel_x);
	_mav_put_float(buf, 8, accel_y);
	_mav_put_float(buf, 12, accel_z);
	_mav_put_float(buf, 16, yaw);
	_mav_put_float(buf, 20, roll);
	_mav_put_float(buf, 24, pitch);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_DATA, buf, MAVLINK_MSG_ID_IMU_DATA_LEN, MAVLINK_MSG_ID_IMU_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_DATA, buf, MAVLINK_MSG_ID_IMU_DATA_LEN);
#endif
#else
	mavlink_imu_data_t packet;
	packet.gyro_z = gyro_z;
	packet.accel_x = accel_x;
	packet.accel_y = accel_y;
	packet.accel_z = accel_z;
	packet.yaw = yaw;
	packet.roll = roll;
	packet.pitch = pitch;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_DATA, (const char *)&packet, MAVLINK_MSG_ID_IMU_DATA_LEN, MAVLINK_MSG_ID_IMU_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_DATA, (const char *)&packet, MAVLINK_MSG_ID_IMU_DATA_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_IMU_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_imu_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float gyro_z, float accel_x, float accel_y, float accel_z, float yaw, float roll, float pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, gyro_z);
	_mav_put_float(buf, 4, accel_x);
	_mav_put_float(buf, 8, accel_y);
	_mav_put_float(buf, 12, accel_z);
	_mav_put_float(buf, 16, yaw);
	_mav_put_float(buf, 20, roll);
	_mav_put_float(buf, 24, pitch);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_DATA, buf, MAVLINK_MSG_ID_IMU_DATA_LEN, MAVLINK_MSG_ID_IMU_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_DATA, buf, MAVLINK_MSG_ID_IMU_DATA_LEN);
#endif
#else
	mavlink_imu_data_t *packet = (mavlink_imu_data_t *)msgbuf;
	packet->gyro_z = gyro_z;
	packet->accel_x = accel_x;
	packet->accel_y = accel_y;
	packet->accel_z = accel_z;
	packet->yaw = yaw;
	packet->roll = roll;
	packet->pitch = pitch;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_DATA, (const char *)packet, MAVLINK_MSG_ID_IMU_DATA_LEN, MAVLINK_MSG_ID_IMU_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMU_DATA, (const char *)packet, MAVLINK_MSG_ID_IMU_DATA_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE IMU_DATA UNPACKING


/**
 * @brief Get field gyro_z from imu_data message
 *
 * @return  rad/s 
 */
static inline float mavlink_msg_imu_data_get_gyro_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field accel_x from imu_data message
 *
 * @return  m/s^2 
 */
static inline float mavlink_msg_imu_data_get_accel_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field accel_y from imu_data message
 *
 * @return  m/s^2 
 */
static inline float mavlink_msg_imu_data_get_accel_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field accel_z from imu_data message
 *
 * @return  m/s^2 
 */
static inline float mavlink_msg_imu_data_get_accel_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field yaw from imu_data message
 *
 * @return  y (rad)  
 */
static inline float mavlink_msg_imu_data_get_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field roll from imu_data message
 *
 * @return  z (rad)  
 */
static inline float mavlink_msg_imu_data_get_roll(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field pitch from imu_data message
 *
 * @return  x (rad)  
 */
static inline float mavlink_msg_imu_data_get_pitch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a imu_data message into a struct
 *
 * @param msg The message to decode
 * @param imu_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_imu_data_decode(const mavlink_message_t* msg, mavlink_imu_data_t* imu_data)
{
#if MAVLINK_NEED_BYTE_SWAP
	imu_data->gyro_z = mavlink_msg_imu_data_get_gyro_z(msg);
	imu_data->accel_x = mavlink_msg_imu_data_get_accel_x(msg);
	imu_data->accel_y = mavlink_msg_imu_data_get_accel_y(msg);
	imu_data->accel_z = mavlink_msg_imu_data_get_accel_z(msg);
	imu_data->yaw = mavlink_msg_imu_data_get_yaw(msg);
	imu_data->roll = mavlink_msg_imu_data_get_roll(msg);
	imu_data->pitch = mavlink_msg_imu_data_get_pitch(msg);
#else
	memcpy(imu_data, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_IMU_DATA_LEN);
#endif
}
