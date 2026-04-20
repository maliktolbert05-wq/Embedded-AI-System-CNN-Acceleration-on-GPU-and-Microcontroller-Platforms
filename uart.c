#include <msp430.h>
#include "uart.h"

void UART_init(){}

void UART_send(char *s){
    while(*s){
        while(!(UCA0IFG & UCTXIFG));
        UCA0TXBUF = *s++;
    }
}

void UART_receive_image(unsigned char img[28][28]){}
