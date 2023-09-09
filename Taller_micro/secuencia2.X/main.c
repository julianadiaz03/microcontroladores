#include <xc.h>
#include "config.h"

#define te 100

void main(void) {
    // Configura el proyecto 
    TRISD = 0b00000000; // Configura RD0-RD7 como salidas

    // Loop infinito
    while (1) {
        for (int i = 0; i < 8; i++) {
            PORTD = (1 << i) - 1; // Enciende los primeros i LEDs
            __delay_ms(te);
        }

        for (int i = 6; i >= 0; i--) {
            PORTD = (1 << i) - 1; // Apaga los últimos i LEDs
            __delay_ms(te);
        }
    }

    return;
}






