/*
 * ds2502.h
 *
 *  Created on: Jun 6, 2025
 *      Author: eldon
 */

#ifndef DS2431_DRIVER_DS2431_H_
#define DS2431_DRIVER_DS2431_H_


#include <stdint.h>
#include "stm32f4xx_hal.h"



#define ONE_WIRE_PORT GPIOA		//enter GPIO port used here
#define ONE_WIRE_PIN GPIO_PIN_9	//enter the gpio pin used for 1 wire communication
#define boundaryaddress 0x007F	//last address of page3

void OneWire_Reset(void);
void OneWire_WriteByte(uint8_t byte);
uint8_t OneWire_ReadByte(void);
void OneWire_WriteMemory(uint16_t address, uint8_t *pdata);
void OneWire_ReadMemory(uint8_t address, size_t bytesToRead, uint8_t *pdataBuffer);
void Read_ScratchPad(uint8_t *pdata);
void Copy_ScratchPad();



#endif /* DS2431_DRIVER_DS2431_H_ */
