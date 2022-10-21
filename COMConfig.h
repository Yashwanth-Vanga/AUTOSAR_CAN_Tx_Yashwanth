/* 
 * File:   COM_Config.h
 * Author: ah70192
 *
 * Created on October 20, 2022, 11:12 PM
 */

#ifndef COM_CONFIG_H
#define	COM_CONFIG_H

#ifdef	__cplusplus
extern "C" {
#endif

typedef enum COM_SIG_List{
    sig_1_e,
    sig_2_e,
    sig_3_e,
    sig_4_e,
    sig_5_e
}COM_SIG_e_List;

typedef struct MSg_1_s{
    unsigned int sig_1_s:8;
    unsigned int sig_2_s:8;
    unsigned int sig_3_s:8;
    unsigned int sig_4_s:8;
    unsigned int sig_5_s:8;
}AUTOSAR_MSG1;

typedef enum PDU_COM_MSg_list{
     MSg_1_s,
     Msg_2_s,
     Msg_3_s,
     Msg_4_s
}PDUR_COM_MSg_list_E;

extern AUTOSAR_MSG1 AUTOSAR_MSG1_S;
extern PDUR_COM_MSg_list_E;
extern COM_SIG_e_List;


void CAN_Signal(int Data,int signal);
#ifdef	__cplusplus
}
#endif

#endif	/* COM_CONFIG_H */

