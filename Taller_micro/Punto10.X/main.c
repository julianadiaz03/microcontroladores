#include <xc.h>
#include "confi.h"

char decoCC[]={191,134,219,207,230,237,253,135,255,231};//Areglo numemrico 
char decoAC[]={64,121,36,48,25,18,2,120,0,24};
//LATDbits.LATD0=1  PORTDbits.RD0 == 0 while(PORTBbits.RB0 == 1);

void main(void){
    TRISC=0b00000011;
    PORTC=0x00;
    while(1){
        if(PORTCbits.RC0==1){
            while(PORTCbits.RC0==1);
            LATCbits.LATC2= ~LATCbits.LATC2;
        }
        if(PORTCbits.RC1==1){
            while(PORTCbits.RC1==1);
            LATCbits.LATC2= ~LATCbits.LATC2;
        }
                
    }
    
    return;
}

