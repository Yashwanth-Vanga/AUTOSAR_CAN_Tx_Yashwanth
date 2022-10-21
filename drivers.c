
/*
 * File:   Drivers.c
 * Author: ah70192
 *
 * Created on October 20, 2022, 11:06 PM
 */


#include <xc.h>
#include "Drivers.h"
void CAN_Configurator()
{
    CANCON = 0X80;  //Enable Configuration mode
    
    while((CANSTAT)!= 0x80); //Checking Configuration status set or not
    
    /* set Baud rate*/
    BRGCON1 = 0xC1;   //Baud rate 250 Kbps
    
    BRGCON2 = 0xAE;   //
    
    BRGCON3 = 0xA5;
    
    CIOCON = 0x20;   //CAN I/O Control Register
    
    CANCON = 0x08;   //Normal Mode
   
}
void can_init(){
    
    TRISA = 0XFF;
    TRISB = 0X7F;
    TRISC = 0XFF;
    TRISD = 0X3F;
    TRISBbits.RB2 = 0; //Tx Pin Direction definition
    TRISBbits.RB3 = 1; //Rx Pin Direction definition    
}
void Read_Config()
{
    PIE3bits.RXB0IE = 1;
    IPR3bits.RXB0IP = 1;
    
    CANCON = 0X0E;
    
    RXF0SIDH = 0X00;
    RXF0SIDL = 0X00;
    RXM0SIDH = 0X00;
    RXM0SIDH = 0X00;
}
