/** @file
 *	@brief MAVLink comm protocol testsuite generated from common_extra_msg.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef COMMON_EXTRA_MSG_TESTSUITE_H
#define COMMON_EXTRA_MSG_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_common_extra_msg(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_common(system_id, component_id, last_msg);
	mavlink_test_common_extra_msg(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_cmd_velocity(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_cmd_velocity_t packet_in = {
		5,72
    };
	mavlink_cmd_velocity_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.linear_velocity = packet_in.linear_velocity;
        	packet1.angular_velocity = packet_in.angular_velocity;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_velocity_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_cmd_velocity_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_velocity_pack(system_id, component_id, &msg , packet1.linear_velocity , packet1.angular_velocity );
	mavlink_msg_cmd_velocity_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_velocity_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.linear_velocity , packet1.angular_velocity );
	mavlink_msg_cmd_velocity_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_cmd_velocity_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_velocity_send(MAVLINK_COMM_1 , packet1.linear_velocity , packet1.angular_velocity );
	mavlink_msg_cmd_velocity_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_cmd_fan_motor_speed(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_cmd_fan_motor_speed_t packet_in = {
		5
    };
	mavlink_cmd_fan_motor_speed_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.fan_motor_speed = packet_in.fan_motor_speed;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_fan_motor_speed_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_cmd_fan_motor_speed_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_fan_motor_speed_pack(system_id, component_id, &msg , packet1.fan_motor_speed );
	mavlink_msg_cmd_fan_motor_speed_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_fan_motor_speed_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.fan_motor_speed );
	mavlink_msg_cmd_fan_motor_speed_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_cmd_fan_motor_speed_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_fan_motor_speed_send(MAVLINK_COMM_1 , packet1.fan_motor_speed );
	mavlink_msg_cmd_fan_motor_speed_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_cmd_worm_motor_speed(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_cmd_worm_motor_speed_t packet_in = {
		5
    };
	mavlink_cmd_worm_motor_speed_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.worm_motor_speed = packet_in.worm_motor_speed;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_worm_motor_speed_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_cmd_worm_motor_speed_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_worm_motor_speed_pack(system_id, component_id, &msg , packet1.worm_motor_speed );
	mavlink_msg_cmd_worm_motor_speed_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_worm_motor_speed_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.worm_motor_speed );
	mavlink_msg_cmd_worm_motor_speed_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_cmd_worm_motor_speed_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_worm_motor_speed_send(MAVLINK_COMM_1 , packet1.worm_motor_speed );
	mavlink_msg_cmd_worm_motor_speed_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_cmd_system(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_cmd_system_t packet_in = {
		5
    };
	mavlink_cmd_system_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.cmd = packet_in.cmd;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_system_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_cmd_system_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_system_pack(system_id, component_id, &msg , packet1.cmd );
	mavlink_msg_cmd_system_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_system_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cmd );
	mavlink_msg_cmd_system_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_cmd_system_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_system_send(MAVLINK_COMM_1 , packet1.cmd );
	mavlink_msg_cmd_system_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_version(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_version_t packet_in = {
		"ABCDEFGHIJKLMNO","QRSTUVW"
    };
	mavlink_version_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        	mav_array_memcpy(packet1.mavlink_release, packet_in.mavlink_release, sizeof(char)*16);
        	mav_array_memcpy(packet1.software_release, packet_in.software_release, sizeof(char)*8);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_version_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_version_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_version_pack(system_id, component_id, &msg , packet1.mavlink_release , packet1.software_release );
	mavlink_msg_version_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_version_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mavlink_release , packet1.software_release );
	mavlink_msg_version_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_version_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_version_send(MAVLINK_COMM_1 , packet1.mavlink_release , packet1.software_release );
	mavlink_msg_version_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_heart_beat(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_heart_beat_t packet_in = {
		5
    };
	mavlink_heart_beat_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.id = packet_in.id;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_heart_beat_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_heart_beat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_heart_beat_pack(system_id, component_id, &msg , packet1.id );
	mavlink_msg_heart_beat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_heart_beat_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.id );
	mavlink_msg_heart_beat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_heart_beat_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_heart_beat_send(MAVLINK_COMM_1 , packet1.id );
	mavlink_msg_heart_beat_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_imu_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_imu_data_t packet_in = {
		17.0,45.0,73.0,101.0,129.0,157.0,185.0
    };
	mavlink_imu_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.gyro_z = packet_in.gyro_z;
        	packet1.accel_x = packet_in.accel_x;
        	packet1.accel_y = packet_in.accel_y;
        	packet1.accel_z = packet_in.accel_z;
        	packet1.yaw = packet_in.yaw;
        	packet1.roll = packet_in.roll;
        	packet1.pitch = packet_in.pitch;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_imu_data_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_imu_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_imu_data_pack(system_id, component_id, &msg , packet1.gyro_z , packet1.accel_x , packet1.accel_y , packet1.accel_z , packet1.yaw , packet1.roll , packet1.pitch );
	mavlink_msg_imu_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_imu_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.gyro_z , packet1.accel_x , packet1.accel_y , packet1.accel_z , packet1.yaw , packet1.roll , packet1.pitch );
	mavlink_msg_imu_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_imu_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_imu_data_send(MAVLINK_COMM_1 , packet1.gyro_z , packet1.accel_x , packet1.accel_y , packet1.accel_z , packet1.yaw , packet1.roll , packet1.pitch );
	mavlink_msg_imu_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_odometry_2d(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_odometry_2d_t packet_in = {
		963497464,45.0,73.0,101.0,129.0,157.0
    };
	mavlink_odometry_2d_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.timestamp = packet_in.timestamp;
        	packet1.linear_velocity = packet_in.linear_velocity;
        	packet1.angular_velocity = packet_in.angular_velocity;
        	packet1.x = packet_in.x;
        	packet1.y = packet_in.y;
        	packet1.yaw = packet_in.yaw;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_odometry_2d_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_odometry_2d_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_odometry_2d_pack(system_id, component_id, &msg , packet1.timestamp , packet1.linear_velocity , packet1.angular_velocity , packet1.x , packet1.y , packet1.yaw );
	mavlink_msg_odometry_2d_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_odometry_2d_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.linear_velocity , packet1.angular_velocity , packet1.x , packet1.y , packet1.yaw );
	mavlink_msg_odometry_2d_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_odometry_2d_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_odometry_2d_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.linear_velocity , packet1.angular_velocity , packet1.x , packet1.y , packet1.yaw );
	mavlink_msg_odometry_2d_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_distance_sensor_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_distance_sensor_data_t packet_in = {
		5,72
    };
	mavlink_distance_sensor_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.front_distance = packet_in.front_distance;
        	packet1.behind_distance = packet_in.behind_distance;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_distance_sensor_data_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_distance_sensor_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_distance_sensor_data_pack(system_id, component_id, &msg , packet1.front_distance , packet1.behind_distance );
	mavlink_msg_distance_sensor_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_distance_sensor_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.front_distance , packet1.behind_distance );
	mavlink_msg_distance_sensor_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_distance_sensor_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_distance_sensor_data_send(MAVLINK_COMM_1 , packet1.front_distance , packet1.behind_distance );
	mavlink_msg_distance_sensor_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_mag_sensor(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_mag_sensor_t packet_in = {
		17.0,17443
    };
	mavlink_mag_sensor_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.angle = packet_in.angle;
        	packet1.model  = packet_in.model ;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_mag_sensor_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_mag_sensor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_mag_sensor_pack(system_id, component_id, &msg , packet1.model  , packet1.angle );
	mavlink_msg_mag_sensor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_mag_sensor_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.model  , packet1.angle );
	mavlink_msg_mag_sensor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_mag_sensor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_mag_sensor_send(MAVLINK_COMM_1 , packet1.model  , packet1.angle );
	mavlink_msg_mag_sensor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_key(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_key_t packet_in = {
		5
    };
	mavlink_key_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.value = packet_in.value;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_key_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_key_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_key_pack(system_id, component_id, &msg , packet1.value );
	mavlink_msg_key_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_key_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.value );
	mavlink_msg_key_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_key_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_key_send(MAVLINK_COMM_1 , packet1.value );
	mavlink_msg_key_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_battery(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_battery_t packet_in = {
		17235,17339,17,84
    };
	mavlink_battery_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.voltage = packet_in.voltage;
        	packet1.current = packet_in.current;
        	packet1.percent = packet_in.percent;
        	packet1.state = packet_in.state;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_battery_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_battery_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_battery_pack(system_id, component_id, &msg , packet1.voltage , packet1.current , packet1.percent , packet1.state );
	mavlink_msg_battery_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_battery_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.voltage , packet1.current , packet1.percent , packet1.state );
	mavlink_msg_battery_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_battery_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_battery_send(MAVLINK_COMM_1 , packet1.voltage , packet1.current , packet1.percent , packet1.state );
	mavlink_msg_battery_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_time(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_time_t packet_in = {
		17235,139,206,17,84,151,218
    };
	mavlink_time_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.Year = packet_in.Year;
        	packet1.Hours = packet_in.Hours;
        	packet1.Minutes = packet_in.Minutes;
        	packet1.Seconds = packet_in.Seconds;
        	packet1.WeekDay = packet_in.WeekDay;
        	packet1.Month = packet_in.Month;
        	packet1.Date = packet_in.Date;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_time_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_time_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_time_pack(system_id, component_id, &msg , packet1.Hours , packet1.Minutes , packet1.Seconds , packet1.WeekDay , packet1.Month , packet1.Date , packet1.Year );
	mavlink_msg_time_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_time_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.Hours , packet1.Minutes , packet1.Seconds , packet1.WeekDay , packet1.Month , packet1.Date , packet1.Year );
	mavlink_msg_time_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_time_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_time_send(MAVLINK_COMM_1 , packet1.Hours , packet1.Minutes , packet1.Seconds , packet1.WeekDay , packet1.Month , packet1.Date , packet1.Year );
	mavlink_msg_time_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_sensors_state(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_sensors_state_t packet_in = {
		963497464,17,84,151
    };
	mavlink_sensors_state_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.timestamp = packet_in.timestamp;
        	packet1.iosensor1 = packet_in.iosensor1;
        	packet1.iosensor2 = packet_in.iosensor2;
        	packet1.iosensor3 = packet_in.iosensor3;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_sensors_state_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_sensors_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_sensors_state_pack(system_id, component_id, &msg , packet1.timestamp , packet1.iosensor1 , packet1.iosensor2 , packet1.iosensor3 );
	mavlink_msg_sensors_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_sensors_state_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.iosensor1 , packet1.iosensor2 , packet1.iosensor3 );
	mavlink_msg_sensors_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_sensors_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_sensors_state_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.iosensor1 , packet1.iosensor2 , packet1.iosensor3 );
	mavlink_msg_sensors_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_bug_motor_state(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_bug_motor_state_t packet_in = {
		17235,17339,17443,17547
    };
	mavlink_bug_motor_state_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.wheel_motor_left_current = packet_in.wheel_motor_left_current;
        	packet1.wheel_motor_right_current = packet_in.wheel_motor_right_current;
        	packet1.fan_motor_current = packet_in.fan_motor_current;
        	packet1.worm_motor_current = packet_in.worm_motor_current;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_bug_motor_state_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_bug_motor_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_bug_motor_state_pack(system_id, component_id, &msg , packet1.wheel_motor_left_current , packet1.wheel_motor_right_current , packet1.fan_motor_current , packet1.worm_motor_current );
	mavlink_msg_bug_motor_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_bug_motor_state_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.wheel_motor_left_current , packet1.wheel_motor_right_current , packet1.fan_motor_current , packet1.worm_motor_current );
	mavlink_msg_bug_motor_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_bug_motor_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_bug_motor_state_send(MAVLINK_COMM_1 , packet1.wheel_motor_left_current , packet1.wheel_motor_right_current , packet1.fan_motor_current , packet1.worm_motor_current );
	mavlink_msg_bug_motor_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_motor_fg(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_motor_fg_t packet_in = {
		17235,17339
    };
	mavlink_motor_fg_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.worm_motor_speed = packet_in.worm_motor_speed;
        	packet1.fan_motor_speed = packet_in.fan_motor_speed;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_motor_fg_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_motor_fg_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_motor_fg_pack(system_id, component_id, &msg , packet1.worm_motor_speed , packet1.fan_motor_speed );
	mavlink_msg_motor_fg_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_motor_fg_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.worm_motor_speed , packet1.fan_motor_speed );
	mavlink_msg_motor_fg_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_motor_fg_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_motor_fg_send(MAVLINK_COMM_1 , packet1.worm_motor_speed , packet1.fan_motor_speed );
	mavlink_msg_motor_fg_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_bug_adc_infra(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_bug_adc_infra_t packet_in = {
		17235,17339,17443,17547
    };
	mavlink_bug_adc_infra_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.infra1 = packet_in.infra1;
        	packet1.infra2 = packet_in.infra2;
        	packet1.infra3 = packet_in.infra3;
        	packet1.infra4 = packet_in.infra4;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_bug_adc_infra_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_bug_adc_infra_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_bug_adc_infra_pack(system_id, component_id, &msg , packet1.infra1 , packet1.infra2 , packet1.infra3 , packet1.infra4 );
	mavlink_msg_bug_adc_infra_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_bug_adc_infra_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.infra1 , packet1.infra2 , packet1.infra3 , packet1.infra4 );
	mavlink_msg_bug_adc_infra_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_bug_adc_infra_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_bug_adc_infra_send(MAVLINK_COMM_1 , packet1.infra1 , packet1.infra2 , packet1.infra3 , packet1.infra4 );
	mavlink_msg_bug_adc_infra_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_led_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_led_control_t packet_in = {
		5,72,139
    };
	mavlink_led_control_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.color = packet_in.color;
        	packet1.mode = packet_in.mode;
        	packet1.freque = packet_in.freque;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_led_control_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_led_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_led_control_pack(system_id, component_id, &msg , packet1.color , packet1.mode , packet1.freque );
	mavlink_msg_led_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_led_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.color , packet1.mode , packet1.freque );
	mavlink_msg_led_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_led_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_led_control_send(MAVLINK_COMM_1 , packet1.color , packet1.mode , packet1.freque );
	mavlink_msg_led_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_hardware_error(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_hardware_error_t packet_in = {
		5,72
    };
	mavlink_hardware_error_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.motor = packet_in.motor;
        	packet1.sensor = packet_in.sensor;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_hardware_error_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_hardware_error_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_hardware_error_pack(system_id, component_id, &msg , packet1.motor , packet1.sensor );
	mavlink_msg_hardware_error_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_hardware_error_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.motor , packet1.sensor );
	mavlink_msg_hardware_error_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_hardware_error_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_hardware_error_send(MAVLINK_COMM_1 , packet1.motor , packet1.sensor );
	mavlink_msg_hardware_error_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_cmd_imu(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_cmd_imu_t packet_in = {
		5
    };
	mavlink_cmd_imu_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.cmd = packet_in.cmd;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_imu_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_cmd_imu_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_imu_pack(system_id, component_id, &msg , packet1.cmd );
	mavlink_msg_cmd_imu_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_imu_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cmd );
	mavlink_msg_cmd_imu_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_cmd_imu_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cmd_imu_send(MAVLINK_COMM_1 , packet1.cmd );
	mavlink_msg_cmd_imu_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_r16checklist(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_r16checklist_t packet_in = {
		5,72
    };
	mavlink_r16checklist_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.iteam = packet_in.iteam;
        	packet1.result = packet_in.result;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_r16checklist_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_r16checklist_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_r16checklist_pack(system_id, component_id, &msg , packet1.iteam , packet1.result );
	mavlink_msg_r16checklist_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_r16checklist_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.iteam , packet1.result );
	mavlink_msg_r16checklist_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_r16checklist_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_r16checklist_send(MAVLINK_COMM_1 , packet1.iteam , packet1.result );
	mavlink_msg_r16checklist_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_startr16test(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_startr16test_t packet_in = {
		{ 963497464, 963497465 },29,"JKLMNOPQRSTUVWXYZABCDEF","HIJKLMNOPQRSTUVWXYZABCD"
    };
	mavlink_startr16test_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.mode = packet_in.mode;
        
        	mav_array_memcpy(packet1.comm, packet_in.comm, sizeof(uint32_t)*2);
        	mav_array_memcpy(packet1.ssid, packet_in.ssid, sizeof(char)*24);
        	mav_array_memcpy(packet1.passwd, packet_in.passwd, sizeof(char)*24);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_startr16test_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_startr16test_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_startr16test_pack(system_id, component_id, &msg , packet1.mode , packet1.comm , packet1.ssid , packet1.passwd );
	mavlink_msg_startr16test_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_startr16test_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mode , packet1.comm , packet1.ssid , packet1.passwd );
	mavlink_msg_startr16test_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_startr16test_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_startr16test_send(MAVLINK_COMM_1 , packet1.mode , packet1.comm , packet1.ssid , packet1.passwd );
	mavlink_msg_startr16test_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_vl6180calibration(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_vl6180calibration_t packet_in = {
		5,72
    };
	mavlink_vl6180calibration_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.offset_fornt = packet_in.offset_fornt;
        	packet1.offset_behind = packet_in.offset_behind;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_vl6180calibration_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_vl6180calibration_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_vl6180calibration_pack(system_id, component_id, &msg , packet1.offset_fornt , packet1.offset_behind );
	mavlink_msg_vl6180calibration_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_vl6180calibration_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.offset_fornt , packet1.offset_behind );
	mavlink_msg_vl6180calibration_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_vl6180calibration_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_vl6180calibration_send(MAVLINK_COMM_1 , packet1.offset_fornt , packet1.offset_behind );
	mavlink_msg_vl6180calibration_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_pcbachecklist(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_pcbachecklist_t packet_in = {
		17.0,17,84
    };
	mavlink_pcbachecklist_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.voltage = packet_in.voltage;
        	packet1.iteam = packet_in.iteam;
        	packet1.state = packet_in.state;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pcbachecklist_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_pcbachecklist_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pcbachecklist_pack(system_id, component_id, &msg , packet1.iteam , packet1.state , packet1.voltage );
	mavlink_msg_pcbachecklist_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pcbachecklist_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.iteam , packet1.state , packet1.voltage );
	mavlink_msg_pcbachecklist_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_pcbachecklist_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_pcbachecklist_send(MAVLINK_COMM_1 , packet1.iteam , packet1.state , packet1.voltage );
	mavlink_msg_pcbachecklist_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_test_item_setting(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_test_item_setting_t packet_in = {
		17235,139
    };
	mavlink_test_item_setting_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.code = packet_in.code;
        	packet1.item = packet_in.item;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_item_setting_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_test_item_setting_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_item_setting_pack(system_id, component_id, &msg , packet1.code , packet1.item );
	mavlink_msg_test_item_setting_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_item_setting_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.code , packet1.item );
	mavlink_msg_test_item_setting_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_test_item_setting_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_item_setting_send(MAVLINK_COMM_1 , packet1.code , packet1.item );
	mavlink_msg_test_item_setting_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_test_running(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_test_running_t packet_in = {
		17235
    };
	mavlink_test_running_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.code = packet_in.code;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_running_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_test_running_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_running_pack(system_id, component_id, &msg , packet1.code );
	mavlink_msg_test_running_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_running_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.code );
	mavlink_msg_test_running_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_test_running_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_running_send(MAVLINK_COMM_1 , packet1.code );
	mavlink_msg_test_running_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_test_reporting(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_test_reporting_t packet_in = {
		5,72,139,206
    };
	mavlink_test_reporting_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.item = packet_in.item;
        	packet1.index = packet_in.index;
        	packet1.state = packet_in.state;
        	packet1.result = packet_in.result;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_reporting_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_test_reporting_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_reporting_pack(system_id, component_id, &msg , packet1.item , packet1.index , packet1.state , packet1.result );
	mavlink_msg_test_reporting_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_reporting_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.item , packet1.index , packet1.state , packet1.result );
	mavlink_msg_test_reporting_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_test_reporting_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_reporting_send(MAVLINK_COMM_1 , packet1.item , packet1.index , packet1.state , packet1.result );
	mavlink_msg_test_reporting_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_test_going_on(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_test_going_on_t packet_in = {
		5
    };
	mavlink_test_going_on_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.code = packet_in.code;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_going_on_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_test_going_on_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_going_on_pack(system_id, component_id, &msg , packet1.code );
	mavlink_msg_test_going_on_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_going_on_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.code );
	mavlink_msg_test_going_on_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_test_going_on_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_going_on_send(MAVLINK_COMM_1 , packet1.code );
	mavlink_msg_test_going_on_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_reaction(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_reaction_t packet_in = {
		5
    };
	mavlink_reaction_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.Switch = packet_in.Switch;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_reaction_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_reaction_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_reaction_pack(system_id, component_id, &msg , packet1.Switch );
	mavlink_msg_reaction_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_reaction_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.Switch );
	mavlink_msg_reaction_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_reaction_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_reaction_send(MAVLINK_COMM_1 , packet1.Switch );
	mavlink_msg_reaction_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_common_extra_msg(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_cmd_velocity(system_id, component_id, last_msg);
	mavlink_test_cmd_fan_motor_speed(system_id, component_id, last_msg);
	mavlink_test_cmd_worm_motor_speed(system_id, component_id, last_msg);
	mavlink_test_cmd_system(system_id, component_id, last_msg);
	mavlink_test_version(system_id, component_id, last_msg);
	mavlink_test_heart_beat(system_id, component_id, last_msg);
	mavlink_test_imu_data(system_id, component_id, last_msg);
	mavlink_test_odometry_2d(system_id, component_id, last_msg);
	mavlink_test_distance_sensor_data(system_id, component_id, last_msg);
	mavlink_test_mag_sensor(system_id, component_id, last_msg);
	mavlink_test_key(system_id, component_id, last_msg);
	mavlink_test_battery(system_id, component_id, last_msg);
	mavlink_test_time(system_id, component_id, last_msg);
	mavlink_test_sensors_state(system_id, component_id, last_msg);
	mavlink_test_bug_motor_state(system_id, component_id, last_msg);
	mavlink_test_motor_fg(system_id, component_id, last_msg);
	mavlink_test_bug_adc_infra(system_id, component_id, last_msg);
	mavlink_test_led_control(system_id, component_id, last_msg);
	mavlink_test_hardware_error(system_id, component_id, last_msg);
	mavlink_test_cmd_imu(system_id, component_id, last_msg);
	mavlink_test_r16checklist(system_id, component_id, last_msg);
	mavlink_test_startr16test(system_id, component_id, last_msg);
	mavlink_test_vl6180calibration(system_id, component_id, last_msg);
	mavlink_test_pcbachecklist(system_id, component_id, last_msg);
	mavlink_test_test_item_setting(system_id, component_id, last_msg);
	mavlink_test_test_running(system_id, component_id, last_msg);
	mavlink_test_test_reporting(system_id, component_id, last_msg);
	mavlink_test_test_going_on(system_id, component_id, last_msg);
	mavlink_test_reaction(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // COMMON_EXTRA_MSG_TESTSUITE_H
