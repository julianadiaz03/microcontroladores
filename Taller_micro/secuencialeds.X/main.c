#include <xc.h>
#include "config.h"

#define te 100

void main(void){

//Configura el proyecto 

TRISD = 0b00000000; // Confiuguramos RDO-> out como salida SI TODOS SON SALIDAS TODOS DEBEN SER 0

// Loop infinito

while (1){
PORTD = 0b00000001; //enciende el led
__delay_ms(te);
PORTD = 0b00000011; //  Todo esto es para encender los led en secuencia 
__delay_ms(te);
PORTD = 0b00000111; 
__delay_ms(te);
PORTD = 0b00001111;  
__delay_ms(te);
PORTD = 0b00011111; 
__delay_ms(te);
PORTD = 0b00111111; 
__delay_ms(te);
PORTD = 0b01111111; 
__delay_ms(te);
PORTD = 0b11111111;  
__delay_ms(te);
PORTD = 0b01111111; 
__delay_ms(te);
PORTD = 0b00111111; 
__delay_ms(te);
PORTD = 0b00011111; 
__delay_ms(te);
PORTD = 0b00001111;  
__delay_ms(te);
PORTD = 0b00000111; 
__delay_ms(te);
PORTD = 0b00000011; //  Todo esto es para encender los led en secuencia 
__delay_ms(te);
PORTD = 0b00000001; //enciende el led
__delay_ms(te);
}

return;

}
