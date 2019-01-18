/** @file
 *	@brief MAVLink comm protocol generated from common_extra_msg.xml
 *	@see http://mavlink.org
 */
#ifndef MAVLINK_COMMON_EXTRA_MSG_H
#define MAVLINK_COMMON_EXTRA_MSG_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_COMMON_EXTRA_MSG.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {9, 31, 12, 0, 14, 28, 3, 32, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 20, 2, 25, 23, 30, 101, 22, 26, 16, 14, 28, 32, 28, 28, 22, 22, 21, 6, 6, 37, 4, 4, 2, 2, 4, 2, 2, 3, 13, 12, 37, 4, 0, 0, 27, 25, 0, 0, 0, 0, 0, 68, 26, 185, 229, 42, 6, 4, 0, 11, 18, 0, 0, 37, 20, 35, 33, 3, 0, 0, 0, 22, 39, 37, 53, 51, 53, 51, 0, 28, 56, 42, 33, 0, 0, 0, 0, 0, 0, 0, 26, 32, 32, 20, 32, 62, 44, 64, 84, 9, 254, 16, 12, 36, 44, 64, 22, 6, 14, 12, 97, 2, 2, 113, 35, 6, 79, 35, 35, 22, 13, 255, 14, 18, 43, 8, 22, 14, 36, 43, 41, 32, 243, 14, 93, 0, 100, 36, 60, 30, 2, 1, 1, 1, 24, 1, 28, 24, 2, 6, 1, 6, 8, 7, 8, 4, 8, 3, 2, 2, 1, 57, 2, 6, 3, 2, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 52, 53, 6, 2, 38, 0, 254, 36, 30, 18, 18, 51, 9, 0}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {50, 124, 137, 0, 237, 217, 104, 119, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 214, 159, 220, 168, 24, 23, 170, 144, 67, 115, 39, 246, 185, 104, 237, 244, 222, 212, 9, 254, 230, 28, 28, 132, 221, 232, 11, 153, 41, 39, 78, 196, 0, 0, 15, 3, 0, 0, 0, 0, 0, 153, 183, 51, 59, 118, 148, 21, 0, 243, 124, 0, 0, 38, 20, 158, 152, 143, 0, 0, 0, 106, 49, 22, 143, 140, 5, 150, 0, 231, 183, 63, 54, 0, 0, 0, 0, 0, 0, 0, 175, 102, 158, 208, 56, 93, 138, 108, 32, 185, 84, 34, 174, 124, 237, 4, 76, 128, 56, 116, 134, 237, 203, 250, 87, 203, 220, 25, 226, 46, 29, 223, 85, 6, 229, 203, 1, 195, 109, 168, 181, 47, 72, 131, 127, 0, 103, 154, 178, 200, 64, 55, 165, 109, 125, 77, 71, 178, 36, 91, 20, 182, 208, 196, 227, 115, 221, 25, 83, 240, 46, 131, 6, 39, 87, 10, 100, 128, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 104, 85, 95, 130, 184, 0, 8, 204, 49, 170, 44, 83, 46, 0}
#endif

#ifndef MAVLINK_MESSAGE_INFO
#define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_SYS_STATUS, MAVLINK_MESSAGE_INFO_SYSTEM_TIME, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_PING, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL_ACK, MAVLINK_MESSAGE_INFO_AUTH_KEY, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_SET_MODE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_READ, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_LIST, MAVLINK_MESSAGE_INFO_PARAM_VALUE, MAVLINK_MESSAGE_INFO_PARAM_SET, MAVLINK_MESSAGE_INFO_GPS_RAW_INT, MAVLINK_MESSAGE_INFO_GPS_STATUS, MAVLINK_MESSAGE_INFO_SCALED_IMU, MAVLINK_MESSAGE_INFO_RAW_IMU, MAVLINK_MESSAGE_INFO_RAW_PRESSURE, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE, MAVLINK_MESSAGE_INFO_ATTITUDE, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT, MAVLINK_MESSAGE_INFO_RC_CHANNELS_SCALED, MAVLINK_MESSAGE_INFO_RC_CHANNELS_RAW, MAVLINK_MESSAGE_INFO_SERVO_OUTPUT_RAW, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_WRITE_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_ITEM, MAVLINK_MESSAGE_INFO_MISSION_REQUEST, MAVLINK_MESSAGE_INFO_MISSION_SET_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_LIST, MAVLINK_MESSAGE_INFO_MISSION_COUNT, MAVLINK_MESSAGE_INFO_MISSION_CLEAR_ALL, MAVLINK_MESSAGE_INFO_MISSION_ITEM_REACHED, MAVLINK_MESSAGE_INFO_MISSION_ACK, MAVLINK_MESSAGE_INFO_SET_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_PARAM_MAP_RC, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_INT, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_SAFETY_SET_ALLOWED_AREA, MAVLINK_MESSAGE_INFO_SAFETY_ALLOWED_AREA, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION_COV, MAVLINK_MESSAGE_INFO_NAV_CONTROLLER_OUTPUT, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT_COV, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_COV, MAVLINK_MESSAGE_INFO_RC_CHANNELS, MAVLINK_MESSAGE_INFO_REQUEST_DATA_STREAM, MAVLINK_MESSAGE_INFO_DATA_STREAM, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MANUAL_CONTROL, MAVLINK_MESSAGE_INFO_RC_CHANNELS_OVERRIDE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MISSION_ITEM_INT, MAVLINK_MESSAGE_INFO_VFR_HUD, MAVLINK_MESSAGE_INFO_COMMAND_INT, MAVLINK_MESSAGE_INFO_COMMAND_LONG, MAVLINK_MESSAGE_INFO_COMMAND_ACK, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MANUAL_SETPOINT, MAVLINK_MESSAGE_INFO_SET_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_GLOBAL_INT, MAVLINK_MESSAGE_INFO_POSITION_TARGET_GLOBAL_INT, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET, MAVLINK_MESSAGE_INFO_HIL_STATE, MAVLINK_MESSAGE_INFO_HIL_CONTROLS, MAVLINK_MESSAGE_INFO_HIL_RC_INPUTS_RAW, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_GLOBAL_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_SPEED_ESTIMATE, MAVLINK_MESSAGE_INFO_VICON_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_HIGHRES_IMU, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW_RAD, MAVLINK_MESSAGE_INFO_HIL_SENSOR, MAVLINK_MESSAGE_INFO_SIM_STATE, MAVLINK_MESSAGE_INFO_RADIO_STATUS, MAVLINK_MESSAGE_INFO_FILE_TRANSFER_PROTOCOL, MAVLINK_MESSAGE_INFO_TIMESYNC, MAVLINK_MESSAGE_INFO_CAMERA_TRIGGER, MAVLINK_MESSAGE_INFO_HIL_GPS, MAVLINK_MESSAGE_INFO_HIL_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_HIL_STATE_QUATERNION, MAVLINK_MESSAGE_INFO_SCALED_IMU2, MAVLINK_MESSAGE_INFO_LOG_REQUEST_LIST, MAVLINK_MESSAGE_INFO_LOG_ENTRY, MAVLINK_MESSAGE_INFO_LOG_REQUEST_DATA, MAVLINK_MESSAGE_INFO_LOG_DATA, MAVLINK_MESSAGE_INFO_LOG_ERASE, MAVLINK_MESSAGE_INFO_LOG_REQUEST_END, MAVLINK_MESSAGE_INFO_GPS_INJECT_DATA, MAVLINK_MESSAGE_INFO_GPS2_RAW, MAVLINK_MESSAGE_INFO_POWER_STATUS, MAVLINK_MESSAGE_INFO_SERIAL_CONTROL, MAVLINK_MESSAGE_INFO_GPS_RTK, MAVLINK_MESSAGE_INFO_GPS2_RTK, MAVLINK_MESSAGE_INFO_SCALED_IMU3, MAVLINK_MESSAGE_INFO_DATA_TRANSMISSION_HANDSHAKE, MAVLINK_MESSAGE_INFO_ENCAPSULATED_DATA, MAVLINK_MESSAGE_INFO_DISTANCE_SENSOR, MAVLINK_MESSAGE_INFO_TERRAIN_REQUEST, MAVLINK_MESSAGE_INFO_TERRAIN_DATA, MAVLINK_MESSAGE_INFO_TERRAIN_CHECK, MAVLINK_MESSAGE_INFO_TERRAIN_REPORT, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE2, MAVLINK_MESSAGE_INFO_ATT_POS_MOCAP, MAVLINK_MESSAGE_INFO_SET_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ALTITUDE, MAVLINK_MESSAGE_INFO_RESOURCE_REQUEST, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE3, MAVLINK_MESSAGE_INFO_FOLLOW_TARGET, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_CONTROL_SYSTEM_STATE, MAVLINK_MESSAGE_INFO_BATTERY_STATUS, MAVLINK_MESSAGE_INFO_AUTOPILOT_VERSION, MAVLINK_MESSAGE_INFO_LANDING_TARGET, MAVLINK_MESSAGE_INFO_CMD_VELOCITY, MAVLINK_MESSAGE_INFO_CMD_FAN_MOTOR_SPEED, MAVLINK_MESSAGE_INFO_CMD_WORM_MOTOR_SPEED, MAVLINK_MESSAGE_INFO_CMD_SYSTEM, MAVLINK_MESSAGE_INFO_VERSION, MAVLINK_MESSAGE_INFO_HEART_BEAT, MAVLINK_MESSAGE_INFO_IMU_DATA, MAVLINK_MESSAGE_INFO_ODOMETRY_2D, MAVLINK_MESSAGE_INFO_DISTANCE_SENSOR_DATA, MAVLINK_MESSAGE_INFO_MAG_SENSOR, MAVLINK_MESSAGE_INFO_KEY, MAVLINK_MESSAGE_INFO_BATTERY, MAVLINK_MESSAGE_INFO_TIME, MAVLINK_MESSAGE_INFO_SENSORS_STATE, MAVLINK_MESSAGE_INFO_BUG_MOTOR_STATE, MAVLINK_MESSAGE_INFO_Motor_FG, MAVLINK_MESSAGE_INFO_BUG_ADC_INFRA, MAVLINK_MESSAGE_INFO_LED_CONTROL, MAVLINK_MESSAGE_INFO_R16CheckList, MAVLINK_MESSAGE_INFO_HARDWARE_ERROR, MAVLINK_MESSAGE_INFO_CMD_IMU, MAVLINK_MESSAGE_INFO_StartR16Test, MAVLINK_MESSAGE_INFO_VL6180Calibration, MAVLINK_MESSAGE_INFO_PcbaCheckList, MAVLINK_MESSAGE_INFO_TEST_ITEM_SETTING, MAVLINK_MESSAGE_INFO_TEST_RUNNING, MAVLINK_MESSAGE_INFO_TEST_REPORTING, MAVLINK_MESSAGE_INFO_TEST_GOING_ON, MAVLINK_MESSAGE_INFO_Reaction, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_ESTIMATOR_STATUS, MAVLINK_MESSAGE_INFO_WIND_COV, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_VIBRATION, MAVLINK_MESSAGE_INFO_HOME_POSITION, MAVLINK_MESSAGE_INFO_SET_HOME_POSITION, MAVLINK_MESSAGE_INFO_MESSAGE_INTERVAL, MAVLINK_MESSAGE_INFO_EXTENDED_SYS_STATE, MAVLINK_MESSAGE_INFO_ADSB_VEHICLE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_V2_EXTENSION, MAVLINK_MESSAGE_INFO_MEMORY_VECT, MAVLINK_MESSAGE_INFO_DEBUG_VECT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_FLOAT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_INT, MAVLINK_MESSAGE_INFO_STATUSTEXT, MAVLINK_MESSAGE_INFO_DEBUG, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_COMMON_EXTRA_MSG

// ENUM DEFINITIONS


/** @brief  */
#ifndef HAVE_ENUM_LED_COLOR
#define HAVE_ENUM_LED_COLOR
typedef enum LED_COLOR
{
	BLACK=0, /* Mission command to contorl led color | */
	RED=1, /* Mission command to contorl led color | */
	ORANGE=2, /* Mission command to contorl led color | */
	YELLOW=3, /* Mission command to contorl led color | */
	OLIVINE=4, /* Mission command to contorl led color | */
	GREEN=5, /* Mission command to contorl led color | */
	DARK_GREEN=6, /* Mission command to contorl led color | */
	CYAN=7, /* Mission command to contorl led color | */
	INDIGO=8, /* Mission command to contorl led color | */
	BULE=9, /* Mission command to contorl led color | */
	PURPLE=10, /* Mission command to contorl led color | */
	MAGENTA=11, /* Mission command to contorl led color | */
	AMARANTH=12, /* Mission command to contorl led color | */
	MIXTURE=13, /* Mission command to contorl led color | */
	LED_COLOR_ENUM_END=14, /*  | */
} LED_COLOR;
#endif

/** @brief  */
#ifndef HAVE_ENUM_LED_STATE
#define HAVE_ENUM_LED_STATE
typedef enum LED_STATE
{
	CLOSE=0, /* Mission command to contorl led mode | */
	OPEN=1, /* Mission command to contorl led mode | */
	BLINK=2, /* Mission command to contorl led mode | */
	BREATHING=3, /* Mission command to contorl led mode | */
	LED_STATE_ENUM_END=4, /*  | */
} LED_STATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_KEY_STATE
#define HAVE_ENUM_KEY_STATE
typedef enum KEY_STATE
{
	KEY1_SHORT_PRESS=1, /* Mission command to perform motor test | */
	KEY2_SHROT_PRESS=2, /* Mission command to perform motor test | */
	KEY1_LONG_PRESS=4, /* Mission command to perform motor test | */
	KEY2_LONG_PRESS=8, /* Mission command to perform motor test | */
	KEY1_AND_KEY2_LONG_PRESS=12, /* Mission command to perform motor test | */
	KEY_STATE_ENUM_END=13, /*  | */
} KEY_STATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_ROBOT_STATE
#define HAVE_ENUM_ROBOT_STATE
typedef enum ROBOT_STATE
{
	WORKING=1, /* Mission command to perform motor test | */
	STANDBY=2, /* Mission command to perform motor test | */
	INBASESTATION=3, /* Mission command to perform motor test | */
	ERROT=4, /* Mission command to perform motor test | */
	ROBOT_STATE_ENUM_END=5, /*  | */
} ROBOT_STATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_EnumCmdImu
#define HAVE_ENUM_EnumCmdImu
typedef enum EnumCmdImu
{
	IMU_OPEN=1, /* Mission command to perform motor test | */
	IMU_CLOSE=2, /* Mission command to perform motor test | */
	IMU_RESET=3, /* Mission command to perform motor test | */
	EnumCmdImu_ENUM_END=4, /*  | */
} EnumCmdImu;
#endif

/** @brief  */
#ifndef HAVE_ENUM_EnumCmdSystem
#define HAVE_ENUM_EnumCmdSystem
typedef enum EnumCmdSystem
{
	STM32_SHUTDOWM=1, /* Mission command to perform motor test | */
	STM32_RESET=2, /* Mission command to perform motor test | */
	R16_RESET=3, /* Mission command to perform motor test | */
	FAN_OPEN=4, /* Mission command to perform motor test | */
	FAN_CLOSE=5, /* Mission command to perform motor test | */
	CALIBRATEVL6180=6, /* Mission command to perform motor test | */
	EnumCmdSystem_ENUM_END=7, /*  | */
} EnumCmdSystem;
#endif

/** @brief  */
#ifndef HAVE_ENUM_EnumPcbaChekcList
#define HAVE_ENUM_EnumPcbaChekcList
typedef enum EnumPcbaChekcList
{
	VCC_DCDC=1, /* Mission command to perform motor test | */
	VCC_STM=2, /* Mission command to perform motor test | */
	VCC_RTC=3, /* Mission command to perform motor test | */
	VCC_R16_LDO=4, /* Mission command to perform motor test | */
	VCC_R16_PS=5, /* Mission command to perform motor test | */
	VCC_SENSOR=6, /* Mission command to perform motor test | */
	INFRA1=7, /* Mission command to perform motor test | */
	INFRA2=8, /* Mission command to perform motor test | */
	INFRA3=9, /* Mission command to perform motor test | */
	INFRA4=10, /* Mission command to perform motor test | */
	TRAY_LEFT=11, /* Mission command to perform motor test | */
	TRAY_RIGHT=12, /* Mission command to perform motor test | */
	DUST_BOX=13, /* Mission command to perform motor test | */
	KEY1=14, /* Mission command to perform motor test | */
	KEY2=15, /* Mission command to perform motor test | */
	LED=16, /* Mission command to perform motor test | */
	IIC1_TEST=17, /* Mission command to perform motor test | */
	IIC2_TEST=18, /* Mission command to perform motor test | */
	WHEEL_LEFT=19, /* Mission command to perform motor test | */
	WHEEL_RIGHT=20, /* Mission command to perform motor test | */
	FAN=21, /* Mission command to perform motor test | */
	POWER_START=22, /* Mission command to perform motor test | */
	VOICE=23, /* Mission command to perform motor test | */
	RTC_FUNCTION=24, /* Mission command to perform motor test | */
	FRONT_BUMPER=25, /* Mission command to perform motor test | */
	KEY_RESET=26, /* Mission command to perform motor test | */
	EnumPcbaChekcList_ENUM_END=27, /*  | */
} EnumPcbaChekcList;
#endif

/** @brief  */
#ifndef HAVE_ENUM_EnumR16ChekcList
#define HAVE_ENUM_EnumR16ChekcList
typedef enum EnumR16ChekcList
{
	UART=1, /* Mission command to perform motor test | */
	SPI=2, /* Mission command to perform motor test | */
	WIFI=3, /* Mission command to perform motor test | */
	EMMC=4, /* Mission command to perform motor test | */
	RAM=5, /* Mission command to perform motor test | */
	DX8=6, /* Mission command to perform motor test | */
	AUDIO=7, /* Mission command to perform motor test | */
	EnumR16ChekcList_ENUM_END=8, /*  | */
} EnumR16ChekcList;
#endif

/** @brief  */
#ifndef HAVE_ENUM_EnumChekResult
#define HAVE_ENUM_EnumChekResult
typedef enum EnumChekResult
{
	PASS=0, /* Mission command to perform motor test | */
	FAIL=1, /* Mission command to perform motor test | */
	EnumChekResult_ENUM_END=2, /*  | */
} EnumChekResult;
#endif

/** @brief  */
#ifndef HAVE_ENUM_EnumR16ChekMode
#define HAVE_ENUM_EnumR16ChekMode
typedef enum EnumR16ChekMode
{
	PCBA_MODE=1, /* Mission command to perform motor test | */
	SEMI_MODE=2, /* Mission command to perform motor test | */
	CAPPING_MODE=3, /* Mission command to perform motor test | */
	NORMAL_MODE=4, /* Mission command to perform motor test | */
	EnumR16ChekMode_ENUM_END=5, /*  | */
} EnumR16ChekMode;
#endif

/** @brief  */
#ifndef HAVE_ENUM_TEST_ITEM
#define HAVE_ENUM_TEST_ITEM
typedef enum TEST_ITEM
{
	WIFI_CONNECT_TEST=0, /* Mission command to contorl led color | */
	RF433_COMM_TEST=1, /* Mission command to contorl led color | */
	BATT_CHARGE_TEST=2, /* Mission command to contorl led color | */
	SPEAKER_TEST=3, /* Mission command to contorl led color | */
	BUMPER_SENSOR_TEST=4, /* Mission command to contorl led color | */
	CLIFF_SENSOR_TEST=5, /* Mission command to contorl led color | */
	MAGNETIC_SENSOR_TEST=6, /* Mission command to contorl led color | */
	IMU_SENSOR_TEST=7, /* Mission command to contorl led color | */
	CLEANING_MODULE_TEST=8, /* Mission command to contorl led color | */
	WHEEL_TEST=9, /* Mission command to contorl led color | */
	FAN_TEST=10, /* Mission command to contorl led color | */
	WORM_TEST=11, /* Mission command to contorl led color | */
	TOF_FRONT_TEST=12, /* Mission command to contorl led color | */
	TOF_BEHIND_TEST=13, /* Mission command to contorl led color | */
	STATION_CONTACT_TEST=14, /* Mission command to contorl led color | */
	RST_TEST=16, /* Mission command to contorl led color | */
        ULTRASONIC_SENSOR_TEST=17, /* Mission command to contorl led color | */     //replace radiator
	WIRE_SENSOR_TEST=18, /* Mission command to contorl led color | */
	TEST_ITEM_ENUM_END=19, /*  | */
} TEST_ITEM;
#endif

/** @brief  */
#ifndef HAVE_ENUM_TEST_STATE
#define HAVE_ENUM_TEST_STATE
typedef enum TEST_STATE
{
	STATE_PENDING=0, /* Mission command to contorl led mode | */
	STATE_OVER=1, /* Mission command to contorl led mode | */
	TEST_STATE_ENUM_END=2, /*  | */
} TEST_STATE;
#endif

#include "../common/common.h"

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_cmd_velocity.h"
#include "./mavlink_msg_cmd_fan_motor_speed.h"
#include "./mavlink_msg_cmd_worm_motor_speed.h"
#include "./mavlink_msg_cmd_system.h"
#include "./mavlink_msg_version.h"
#include "./mavlink_msg_heart_beat.h"
#include "./mavlink_msg_imu_data.h"
#include "./mavlink_msg_odometry_2d.h"
#include "./mavlink_msg_distance_sensor_data.h"
#include "./mavlink_msg_mag_sensor.h"
#include "./mavlink_msg_key.h"
#include "./mavlink_msg_battery.h"
#include "./mavlink_msg_time.h"
#include "./mavlink_msg_sensors_state.h"
#include "./mavlink_msg_bug_motor_state.h"
#include "./mavlink_msg_motor_fg.h"
#include "./mavlink_msg_bug_adc_infra.h"
#include "./mavlink_msg_led_control.h"
#include "./mavlink_msg_hardware_error.h"
#include "./mavlink_msg_cmd_imu.h"
#include "./mavlink_msg_r16checklist.h"
#include "./mavlink_msg_startr16test.h"
#include "./mavlink_msg_vl6180calibration.h"
#include "./mavlink_msg_pcbachecklist.h"
#include "./mavlink_msg_test_item_setting.h"
#include "./mavlink_msg_test_running.h"
#include "./mavlink_msg_test_reporting.h"
#include "./mavlink_msg_test_going_on.h"
#include "./mavlink_msg_reaction.h"

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_COMMON_EXTRA_MSG_H
