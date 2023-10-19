   /*********************************************************************************************************************
 * COPYRIGHT NOTICE
 * Copyright (c) 2018,逐�?��?�技
 * All rights reserved.
 * 技�?讨�?�QQ群：179029047
 *
 * 以下所有内容版权均属逐�?��?�技所有，�?经允许不得用于商业用途，
 * 欢迎各位使用并传�?�?程序，修改内容时必须保留逐�?��?�技的版权声明�?
 *
 * @file       		模拟IIC
 * @company	   		成都逐�?��?�技有限�?�?
 * @author     		逐�?��?�技(QQ3184284598)
 * @version    		查看common.h内VERSION宏定�?
 * @Software 		MDK FOR C251 V5.60
 * @Target core		LPC54606J512BD100
 * @Taobao   		https://seekfree.taobao.com/
 * @date       		2018-05-24
 * @note		
					接线定义�?
					------------------------------------ 
						SCL                 查看SEEKFREE_IIC文件内的SEEKFREE_SCL宏定�?
						SDA                 查看SEEKFREE_IIC文件内的SEEKFREE_SDA宏定�?
					------------------------------------ 
 ********************************************************************************************************************/




#ifndef _SEEKFREE_IIC_h
#define _SEEKFREE_IIC_h

#include "common.h"
#define SIMIIC_SCL_PIN P40
#define SIMIIC_SDA_PIN P41


typedef enum IIC       //DAC模块
{
    SIMIIC,
    SCCB
} IIC_type;



void  simiic_start(void);
void  simiic_stop(void);
void  simiic_ack_main(uint8 ack_main);
void  send_ch(uint8 c);
uint8 read_ch(uint8 ack);
void  simiic_write_reg(uint8 dev_add, uint8 reg, uint8 dat);
uint8 simiic_read_reg(uint8 dev_add, uint8 reg, IIC_type type);
void  simiic_read_regs(uint8 dev_add, uint8 reg, uint8 *dat_add, uint8 num, IIC_type type);
void  simiic_init(void);


#endif

