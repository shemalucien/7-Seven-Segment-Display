/*
 * File:   project1.c
 * Author: ShemaLucien
 *
 * Created on July 17, 2021, 9:41 AM
 */

#include <xc.h>
#define _XTAL_FREQ 8000000

void main(void) {
    
  TRISC = 0x00; /* Configure the ports as output */
  unsigned int segment[11]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6f},i;
  
    while (1) 
    {
        for (i = 0; i <=9; i++) // loop to display 0-9
        {
            PORTC = segment[i]; 
            __delay_ms(1000);
        }
    }


    return;
}
