/*
 * MPU6050.h
 *
 *  Created on: 23 kwi 2023
 *      Author: User
 */

#ifndef INC_MPU6050_H_
#define INC_MPU6050_H_


#include "main.h"

#define MPU6050_I2C_PORT hi2c1
extern I2C_HandleTypeDef MPU6050_I2C_PORT;

#define MPU6050_ADDR 0xD0
#define SMPLRT_DIV_REG 0x19
#define GYRO_CONFIG_REG 0x1B
#define ACCEL_CONFIG_REG 0x1C
#define ACCEL_XOUT_H_REG 0x3B
#define TEMP_OUT_H_REG 0x41
#define GYRO_XOUT_H_REG 0x43
#define PWR_MGMT_1_REG 0x6B
#define WHO_AM_I_REG 0x75



void MPU6050_Init (void);
void MPU6050_Read_Accel(float A[3]);
void MPU6050_Read_Gyro (float G[3]);

#endif /* INC_MPU6050_H_ */
