/*
 * File:   PDU.c
 * Author: ah70192
 *
 * Created on October 20, 2022, 11:01 PM
 */


#include <xc.h>
#include "PDU.h"

void can_write(unsigned int ID, unsigned char* data, unsigned char DLC){   //DLC - Data length Code
    
    
    CANCON = 0x08;  //Setting Configuration mode and Buffer Register
    
 //   while((CANSTAT)!= 0x88);
    
    TXB0SIDH = (ID>>3) & (0xFF);   //Transmit buffer 
    
    TXB0SIDL = (ID<<5) & (0xFF);
    
    TXB0DLC = DLC;
    
    TXB0D0 = data[0];
    TXB0D1 = data[1];
    TXB0D2 = data[2];
    TXB0D3 = data[3];
    TXB0D4 = data[4];
    TXB0D5 = data[5];
    TXB0D6 = data[6];
    TXB0D7 = data[7];
    TXB0CON=0X08;
    CANCON = 0X08; 
    
}
