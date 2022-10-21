/* 
 * File:   PDU.h
 * Author: ah70192
 *
 * Created on October 20, 2022, 11:07 PM
 */

#ifndef PDU_H
#define	PDU_H

#ifdef	__cplusplus
extern "C" {
#endif


void can_write(unsigned int ID, unsigned char* data, unsigned char DLC);

#ifdef	__cplusplus
}
#endif

#endif	/* PDU_H */

