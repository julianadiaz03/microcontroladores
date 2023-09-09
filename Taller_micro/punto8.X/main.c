#include <xc.h>
#include "config.h"

char decoCC[]={191,134,219,207,230,237,253,135,255,231};//Areglo numemrico 
char decoAC[]={64,121,36,48,25,18,2,120,0,24};
//LATDbits.LATD0=1  PORTDbits.RD0 == 0 while(PORTBbits.RB0 == 1);
int te=50;
char desplaza;

void main(void){
    TRISC  = 0b01111111;
    TRISB  = 0x00;
    TRISD  = 0x00;
    ANSELB = 0x00;
    PORTB = 0x00;
    PORTC = 0x00;
    PORTD = 0x00;
    while(1){//C0-C1-C3 BOTONES // C3- Velocidad // C4-Hacia arriba // C5 - Hacia abajo
        if(PORTCbits.RC3==1){
          te=te-5;  
        }
        if(PORTCbits.RC4==0 && PORTCbits.RC5==0){ //Ingreso de datos
            LATDbits.LATD5=PORTCbits.RC0;
            LATDbits.LATD6=PORTCbits.RC1;
            LATDbits.LATD7=PORTCbits.RC2; 
        }
        while(PORTCbits.RC4==1){
            desplaza=LATBbits.LATB0;
            __delay_ms(te);
            LATBbits.LATB0=LATBbits.LATB1;
            __delay_ms(te);
            LATBbits.LATB1=LATBbits.LATB2;
            __delay_ms(te);
            LATBbits.LATB2=LATBbits.LATB3;
            __delay_ms(te);
            LATBbits.LATB3=LATBbits.LATB4;
            __delay_ms(te);
            LATBbits.LATB4=LATBbits.LATB5;
            __delay_ms(te);
            LATBbits.LATB5=LATBbits.LATB6;
            __delay_ms(te);
            LATBbits.LATB6=LATBbits.LATB7;
            __delay_ms(te);
            LATBbits.LATB7=LATDbits.LATD0;
            __delay_ms(te);
            LATDbits.LATD0=LATDbits.LATD1;
            __delay_ms(te);
            LATDbits.LATD1=LATDbits.LATD2;
            __delay_ms(te);
            LATDbits.LATD2=LATDbits.LATD3;
            __delay_ms(te);
            LATDbits.LATD3=LATDbits.LATD4;
            __delay_ms(te);
            LATDbits.LATD4=LATDbits.LATD5;
            __delay_ms(te);
            LATDbits.LATD5=LATDbits.LATD6;
            __delay_ms(te);
            LATDbits.LATD6=LATDbits.LATD7;
            __delay_ms(te);
            LATDbits.LATD7=desplaza;
            __delay_ms(te);
        }
        while(PORTCbits.RC5==1){
            desplaza=LATDbits.LATD7;            
           LATDbits.LATD7=LATDbits.LATD6;
           __delay_ms(te); 
           LATDbits.LATD6=LATDbits.LATD5;
           __delay_ms(te);  
           LATDbits.LATD5=LATDbits.LATD4;
           __delay_ms(te); 
           LATDbits.LATD4=LATDbits.LATD3;
           __delay_ms(te);  
           LATDbits.LATD3=LATDbits.LATD2;
           __delay_ms(te); 
           LATDbits.LATD2=LATDbits.LATD1;
           __delay_ms(te);  
           LATDbits.LATD1=LATDbits.LATD0;
           __delay_ms(te); 
           LATDbits.LATD0=LATBbits.LATB7;
           __delay_ms(te);  
           LATBbits.LATB7=LATBbits.LATB6;
           __delay_ms(te);
           LATBbits.LATB6=LATBbits.LATB5;
           __delay_ms(te);
           LATBbits.LATB5=LATBbits.LATB4;
           __delay_ms(te);
           LATBbits.LATB4=LATBbits.LATB3;
           __delay_ms(te);
           LATBbits.LATB3=LATBbits.LATB2;
           __delay_ms(te);
           LATBbits.LATB2=LATBbits.LATB1;
           __delay_ms(te);
           LATBbits.LATB1=LATBbits.LATB0;
           __delay_ms(te);
           LATBbits.LATB0=desplaza;
           __delay_ms(te);
        }
    }
    return;
}