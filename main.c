#include <msp430.h>
#include "uart.h"
#include "lenet.h"

unsigned char image[28][28];

int main(void){
    WDTCTL = WDTPW | WDTHOLD;
    UART_init();

    while(1){
        UART_receive_image(image);
        run_inference(image);
        int r = predict();

        char buf[20];
        sprintf(buf,"CLASS:%d\n",r);
        UART_send(buf);
    }
}
