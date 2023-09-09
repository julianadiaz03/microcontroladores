#include <xc.h>
#include "confi.h"

char decoCC[]={191,134,219,207,230,237,253,135,255,231};//Areglo numemrico 
char decoAC[]={64,121,36,48,25,18,2,120,0,24};
//LATDbits.LATD0=1;
void main(void){
    TRISC=0b11110000;
    PORTC=0x00;
    TRISD=0x00;
    PORTD=0x00;
    while(1){
        if(PORTCbits.RC3 == 1){
            LATDbits.LATD0 = 0; 
            LATDbits.LATD1 = 0;
            LATDbits.LATD2 = 0;
        }else{
             if(PORTCbits.RC0 == 1 && PORTCbits.RC1 == 0 && PORTCbits.RC2 == 0 ){
                LATDbits.LATD0 = 1; 
             }
             if(PORTCbits.RC0 == 0 ){
                LATDbits.LATD0 = 0; 
             }
             if(PORTCbits.RC0 == 0 && PORTCbits.RC1 == 1 && PORTCbits.RC2 == 0 ){
                LATDbits.LATD1 = 1; 
             }
             if(PORTCbits.RC1 == 0 ){
                LATDbits.LATD1 = 0; 
             }
             if(PORTCbits.RC0 == 0 && PORTCbits.RC1 == 0 && PORTCbits.RC2 == 1 ){
                LATDbits.LATD2 = 1; 
             }
             if(PORTCbits.RC2 == 0 ){
                LATDbits.LATD2 = 0; 
             } 
        }
    }
    return;
}
