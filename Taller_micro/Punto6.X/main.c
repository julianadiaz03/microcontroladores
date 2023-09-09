#include "config.h"
#include <xc.h>

void semaforo1 (void);
void semaforo2 (void);
void semaforo3 (void);


#define te 500
#define ta 300

int main(void)
{
    TRISD = 0b00000000;
	TRISB = 0b00000000;
	TRISC = 0b00000000;
    while (1) 
    {
		semaforo1();
		__delay_ms(te);
		semaforo2();
		__delay_ms(te);
		semaforo3();
		__delay_ms(te);
    }
}
void semaforo1(void){
	
	PORTD = (1<<0);
	PORTB = (1<<0);
	PORTC = (1<<0);
	__delay_ms(ta);
	PORTD = 0x00;
	__delay_ms(20);
	PORTD = (1<<1);
	__delay_ms(ta);
	PORTD = 0x00;
	__delay_ms(20);
	PORTD = (1<<2);
	__delay_ms(500);
	PORTD = 0x00;
	__delay_ms(20);
	PORTD = (1<<1);
	__delay_ms(ta);
	PORTD = 0x00;
	__delay_ms(20);
	PORTD = (1<<0);
}
void semaforo2(void){
	
	PORTD = (1<<0);
	PORTC = (1<<0);
	PORTB = 0x00;
	__delay_ms(20);
	PORTB = (1<<1);
	__delay_ms(ta);
	PORTB = 0x00;
	__delay_ms(20);
	PORTB = (1<<2);
	__delay_ms(500);
	PORTB = 0x00;
	__delay_ms(20);
	PORTB = (1<<1);
	__delay_ms(ta);
	PORTB = 0x00;
	__delay_ms(20);
	PORTB = (1<<0);
}
void semaforo3(void){
	
	PORTD = (1<<0);
	PORTB = (1<<0);
	__delay_ms(ta);
	PORTC = 0x00;
	__delay_ms(20);
	PORTC = (1<<1);
	__delay_ms(ta);
	PORTC = 0x00;
	__delay_ms(20);
	PORTC = (1<<2);
	__delay_ms(te);
	PORTC = 0x00;
	__delay_ms(20);
	PORTC = (1<<1);
	__delay_ms(ta);
	PORTC = 0x00;
	__delay_ms(20);
	PORTC = (1<<0);
}