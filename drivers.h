/* 
 * File:   Drivers.h
 * Author: ah70192
 *
 * Created on October 20, 2022, 11:09 PM
 */

#ifndef DRIVERS_H
#define	DRIVERS_H

#define _XTAL_FREQ 20000000
    
#define NORMAL_MODE     0x00
#define CONFIG_MODE     0x80
#define DISABLE_MODE    0x20
#define LISEN_ONLY_MODE 0x60
#define LOOPBACK_MODE   0x40
    
#define Receive_Buffer0  0x0E
#define Receive_Buffer1  0x0A
#define Transmit_Buffer0 0x08
#define Transmit_Buffer1 0x06
#define Transmit_Buffer2 0x04
    
    
#define BAUD_RATE_125   125
#define BAUD_RATE_250   250    
#define BAUD_RATE_500   500
    

#define LED0 PORTBbits.RB0
#define LED1 PORTBbits.RB1


#ifdef	__cplusplus
extern "C" {
#endif

void can_init();
void CAN_Configurator();
void Read_Config();
void can_write(unsigned int ID, unsigned char* data, unsigned char DLC);


#ifdef	__cplusplus
}
#endif

#endif	/* DRIVERS_H */

