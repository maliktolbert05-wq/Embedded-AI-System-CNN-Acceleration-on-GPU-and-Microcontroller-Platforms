#ifndef UART_H
#define UART_H

void UART_init();
void UART_send(char *s);
void UART_receive_image(unsigned char img[28][28]);

#endif
