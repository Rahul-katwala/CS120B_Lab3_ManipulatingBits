/*      Author: rkatw001
 *  Partner(s) Name: 
 *      Lab Section:
 *      Assignment: Lab #  Exercise #
 *      Exercise Description: [optional - include for your own benefit]
 *
 *      I acknowledge all content contained herein, excluding template or example
 *      code, is my own original work.
 */
#include "avr/io.h"
#ifdef _SIMULATE_
#include <simAVRHeader.h>
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
        DDRA=0x00;
        PORTA = 0xFF;
        DDRB=0x00;
        PORTB = 0xFF;
        DDRC = 0xFF;
        PORTC=0x00;

    /* Insert your solution below */
    while (1) {
        unsigned char totalC = 0x00;
        if ((PINA & 0x01)==0x01){
                totalC = totalC+ 0x01;
        }

        if ((PINB & 0x01) == 0x01){
                totalC = totalC + 0x01;
        }

         if ((PINA & 0x02)==0x02){
                totalC = totalC+ 0x01;
        }

        if ((PINB & 0x02) == 0x02){
                totalC = totalC + 0x01;
        }

        if ((PINA & 0x04) == 0x04){
                totalC = totalC+ 0x01;
        }

        if ((PINB & 0x04) == 0x04){
                totalC = totalC + 0x01;
        }

        if ((PINA & 0x08) == 0x08){
                totalC = totalC+ 0x01;
        }

        if ((PINB & 0x08) == 0x08){
                totalC = totalC + 0x01;
        }

        if ((PINA & 0x10)==0x10){
                totalC = totalC+ 0x01;
        }

        if ((PINB & 0x10) == 0x10){
                totalC = totalC + 0x01;
        }

          if ((PINA & 0x20)==0x20){
                totalC = totalC+ 0x01;
        }

        if ((PINB & 0x20) == 0x20){
                totalC = totalC + 0x01;
        }

          if ((PINA & 0x40)==0x40){
                totalC = totalC+ 0x01;
        }

        if ((PINB & 0x40) == 0x40){
                totalC = totalC + 0x01;
        }


          if ((PINA & 0x80)==0x80){
                totalC = totalC+ 0x01;
        }

        if ((PINB & 0x80) == 0x80){
                totalC = totalC + 0x01;
        }

        PORTC= totalC;

    }
    return 1;
}
