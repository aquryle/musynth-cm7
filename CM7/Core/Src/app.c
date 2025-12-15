/***************************************************************************//**
 * @file	app.c
 * @brief
 * @date	2025/12/16
 * @author	sata
 * @version	1.00
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>

#include "main.h"
#include "app.h"


extern I2C_HandleTypeDef hi2c1;
extern SAI_HandleTypeDef hsai_BlockA1;
extern SPI_HandleTypeDef hspi1;
extern TIM_HandleTypeDef htim13;
extern UART_HandleTypeDef huart1;

void app(void)
{
	printf("app start\n");

}
