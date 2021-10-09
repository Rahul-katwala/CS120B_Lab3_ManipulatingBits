#include "avr/io.h"
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
        DDRA=0x00;
        PORTA = 0xFF;
       //DDRB=0x00;
       //PORTB = 0xFF;
        DDRC = 0xFF;
        PORTC=0x00;





        while(1){
        unsigned char CPORT = 0x00;
        if(((PINA & 0x01) == 0x01) || ((PINA & 0x02)== 0x02)){
                CPORT = 0x60;
}

        if(((PINA & 0x03) == 0x03) || ((PINA & 0x04)== 0x04)){
                CPORT = 0x70;
}

if(((PINA & 0x05) == 0x05) || ((PINA & 0x06)== 0x06)){
                CPORT = 0x38;
}

if(((PINA & 0x07) == 0x07) || ((PINA & 0x08)== 0x08) || ((PINA & 0x09) ==0x09)){
                CPORT = 0x3C;
}
if(((PINA & 0x0A) == 0x0A) || ((PINA & 0x0B)== 0x0B) || ((PINA & 0x0C) ==0x0C)){
                CPORT = 0x3E;
}

if(((PINA & 0x0D) == 0x0D) || ((PINA & 0x0E)== 0x0E) || ((PINA & 0x0F) ==0x0F)){
                CPORT = 0x3F;
}

        PORTC= CPORT;

}
return 1;
}
