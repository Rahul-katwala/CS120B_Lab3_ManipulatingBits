/*      Author: rkatw001
 *       *  Partner(s) Name: 
 *        *      Lab Section:
 *         *      Assignment: Lab #  Exercise #
 *          *      Exercise Description: [optional - include for your own benefit]
 *           *
 *            *      I acknowledge all content contained herein, excluding template or example
 *             *      code, is my own original work.
 *              */
#include "avr/io.h"
#ifdef _SIMULATE_
#include <simAVRHeader.h>
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
        DDRA=0x00;
        PORTA = 0xFF;
        DDRB=0xFF;
        PORTB = 0x00;
        DDRC = 0xFF;
        PORTC=0x00;

    /* Insert your solution below */
    while (1) {

        unsigned char BPORT = 0x00;
        unsigned char CPORT = 0x00;

        BPORT = PINA>> 4;
        CPORT = PINA << 4;

        PORTB = BPORT;
        PORTC = CPORT;

}
        return 1;
}
