#include "config.h"
#include <xc.h>

char marca;

void main(void) {
    ANSELB = 0x00;
    TRISBbits.TRISB0 =1;
    TRISBbits.TRISB7 =0;
    while(1){
        if(PORTBbits.RB0 ==0){
            while(PORTBbits.RB0 ==0)
            marca++;
            
        }
        if(marca==3){
            LATBbits.LATB7 =1;
            marca=0;
        }
        __delay_ms(500);
        
    }
    return;
}