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
extern TIM_HandleTypeDef htim2;
extern TIM_HandleTypeDef htim13;
extern UART_HandleTypeDef huart1;



void delay_ms(uint32_t t)
{
	HAL_TIM_Base_Start(&htim13);
	for (uint32_t i = 0; i < t; i++) {
		__HAL_TIM_SET_COUNTER(&htim13, 0);				// counter set as 0
		while (999 > __HAL_TIM_GET_COUNTER(&htim13));	// 1000clk wait
	}
	HAL_TIM_Base_Stop(&htim13);
}



void app(void)
{
	printf("app start\n");




	volatile int tmp;
	while (1) {
		tmp = (int)Get_Tick();
		printf("%d\n", tmp);
		HAL_Delay(1000);
	}

}
