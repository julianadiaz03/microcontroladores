#include <xc.h>
#include "config.h"

//#define BTN1 
//#define BTN2  

//#define BTN1_DIR  TRISBbits.TRISB2
//#define BTN2_DIR  TRISBbits.TRISB3 
/*
void main(void) {
   ANSELB = 0x00;
   TRISBbits.TRISB0 = 1;// indica en que pines conectar el motor
   TRISBbits.TRISB1 = 1;
   TRISBbits.TRISB2 = 0;
   TRISBbits.TRISB3 = 0;
  
   PORTBbits.RB2 = 0;
   PORTBbits.RB3 = 0;
   
  // BTN1_DIR =1;
   //BTN2_DIR =1;
    while (1) {
        
        if (PORTBbits.RB2 == 1 & PORTBbits.RB3 == 0){
            LATBbits.LATB0 = 1;
            LATBbits.LATB1 = 0;
        }if (PORTBbits.RB3 == 1 & PORTBbits.RB2 == 0){
            LATBbits.LATB1 = 1;
            LATBbits.LATB0 = 0;
        }if (PORTBbits.RB2 == 0 & PORTBbits.RB3 == 0){
            LATBbits.LATB1 = 0;
            LATBbits.LATB0 = 0;
        }if (PORTBbits.RB3 == 1 & PORTBbits.RB2 == 1){
            LATBbits.LATB1 = 0;
            LATBbits.LATB0 = 0;
        }
    }
    return;
} */
#define te 500
void main(void) {
   ANSELB = 0x00;
   TRISB = 0b00001100;
   //LATB = 0x00;
 
    while (1) {
        
        if (PORTBbits.RB2 == 0 && PORTBbits.RB3 == 0){
            LATBbits.LATB0=0;
            LATBbits.LATB1=0;
            __delay_ms(t);
        }
        if (PORTBbits.RB2 == 1 && PORTBbits.RB3 == 0){
            LATBbits.LATB0=0;
            LATBbits.LATB1=1;
            __delay_ms(t);
        }
        if (PORTBbits.RB2 == 0 && PORTBbits.RB3 == 1){
            LATBbits.LATB0=1;
            LATBbits.LATB1=0;
            __delay_ms(t);
        }if (PORTBbits.RB2 == 1 && PORTBbits.RB3 == 1){
            LATBbits.LATB0=1;
            LATBbits.LATB0=1;
            __delay_ms(t);
        }
    }
    return;
}
