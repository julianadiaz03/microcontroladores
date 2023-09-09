#include "config.h"
#include <xc.h>
 /* 
#define EN1()   PORTBbits.RB0
#define EN2()   PORTBbits.RB1
#define EN3()   PORTBbits.RB2 
#define EN4()   PORTBbits.RB3 
*/
void secuencia_01(void);
void secuencia_02(void);
void secuencia_03(void);
void secuencia_04(void);
void secuencia_05(void);
void secuencia_06(void);
void secuencia_07(void);
void secuencia_08(void);
void secuencia_09(void);
void Secuencias(void);

#define te 200
int s=0;
void main(void)
{
    TRISD = 0xFF;
    PORTD = 0x00;
    PORTB = 0X00;
	TRISBbits.TRISB0 = 1;// indica en que pines conectar el motor
    TRISBbits.TRISB1 = 1;
    TRISBbits.TRISB2 = 1;
    TRISBbits.TRISB3 = 1;
	
    while (1) {
		if((PORTBbits.RB0 == 0&PORTBbits.RB1 == 0)&(PORTBbits.RB2 == 0&PORTBbits.RB3 == 1)){
            secuencia_01;
        }
        if((PORTBbits.RB0 == 0&PORTBbits.RB1 == 0)&(PORTBbits.RB2 == 1&PORTBbits.RB3 == 0)){
            secuencia_02;
        }
        if((PORTBbits.RB0 == 0&PORTBbits.RB1 == 0)&(PORTBbits.RB2 == 1&PORTBbits.RB3 == 1)){
            secuencia_03;
        }
        if((PORTBbits.RB0 == 0&PORTBbits.RB1 == 1)&(PORTBbits.RB2 == 0&PORTBbits.RB3 == 0)){
            secuencia_04;
        }
        if((PORTBbits.RB0 == 0&PORTBbits.RB1 == 1)&(PORTBbits.RB2 == 0&PORTBbits.RB3 == 1)){
            secuencia_05;
        }
        if((PORTBbits.RB0 == 0&PORTBbits.RB1 == 1)&(PORTBbits.RB2 == 1&PORTBbits.RB3 == 0)){
            secuencia_06;
        }
        if((PORTBbits.RB0 == 0&PORTBbits.RB1 == 1)&(PORTBbits.RB2 == 1&PORTBbits.RB3 == 1)){
            secuencia_07;
        }
        if((PORTBbits.RB0 == 1&PORTBbits.RB1 == 0)&(PORTBbits.RB2 == 0&PORTBbits.RB3 == 0)){
            secuencia_08;
        }
        if((PORTBbits.RB0 == 1&PORTBbits.RB1 == 0)&(PORTBbits.RB2 == 0&PORTBbits.RB3 == 1)){
            secuencia_09;
    }
}
void secuencia_01(void){
	PORTD = 0b10000001;
	__delay_ms(te);
	PORTD = 0b11000011;
	__delay_ms(te);
	PORTD = 0b11100111;
	__delay_ms(te);
	PORTD = 0b11111111;
	__delay_ms(te);
	PORTD = 0b01111110;
	__delay_ms(te);
	PORTD = 0b00111100;
	__delay_ms(te);
	PORTD = 0b00011000;
	__delay_ms(te);
	PORTD = 0b00000000;
	__delay_ms(te);
}
void secuencia_02(void){
	PORTD = 0x0F;
	__delay_ms(te);
	PORTD = 0xF0;
	__delay_ms(te);
}
void secuencia_03(void){
	PORTD = 0b10101010;
	__delay_ms(te);
	PORTD = 0b01010101;
	__delay_ms(te);
}
void secuencia_04(void){
	PORTD = 0x00;
		__delay_ms(te);
		PORTD |= (1<<1);
		__delay_ms(te);
		PORTD |= (1<<3);
		__delay_ms(te);
		PORTD |= (1<<5);
		__delay_ms(te);
		PORTD |= (1<<7);
		__delay_ms(te);
		PORTD |= (1<<0);
		__delay_ms(te);
		PORTD |= (1<<2);
		__delay_ms(te);
		PORTD |= (1<<4);
		__delay_ms(te);
		PORTD |= (1<<6);
		__delay_ms(te);
}
void secuencia_05(void){
	PORTD = 0x00;
	__delay_ms(te);
	PORTD |= (1<<0);
	__delay_ms(te);
	PORTD |= (1<<1);
	__delay_ms(te);
	PORTD |= (1<<2);
	__delay_ms(te);
	PORTD |= (1<<3);
	__delay_ms(te);
	PORTD |= (1<<4);
	__delay_ms(te);
	PORTD |= (1<<5);
	__delay_ms(te);
	PORTD |= (1<<6);
	__delay_ms(te);
	PORTD |= (1<<7);
	__delay_ms(te);
	PORTD |= (1<<8);
	__delay_ms(te);
	PORTD = 0xFF;
	__delay_ms(te);
}
void secuencia_06(void){
	PORTD = 0xFF;
	__delay_ms(te);
	PORTD &= ~(1<<0);
	__delay_ms(te);
	PORTD &= ~(1<<1);
	__delay_ms(te);
	PORTD &= ~(1<<2);
	__delay_ms(te);
	PORTD &= ~(1<<3);
	__delay_ms(te);
	PORTD &= ~(1<<4);
	__delay_ms(te);
	PORTD &= ~(1<<5);
	__delay_ms(te);
	PORTD &= ~(1<<6);
	__delay_ms(te);
	PORTD &= ~(1<<7);
	__delay_ms(te);
	PORTD &= ~(1<<8);
	__delay_ms(te);
	PORTD = 0x00;
	__delay_ms(te);
}
void secuencia_07(void){
	PORTD = 0x00;
	__delay_ms(te);
	PORTD = 0b00011000;
	__delay_ms(te);
	PORTD = 0b00111100;
	__delay_ms(te);
	PORTD = 0b01111110;
	__delay_ms(te);
	PORTD = 0b11111111;
	__delay_ms(te);
}

void secuencia_08(void){
	PORTD = 0x00;
	__delay_ms(te);
	PORTD |= ( (1<<2) | (1<<5) );
	__delay_ms(te);
	PORTD |= ( (1<<7) | (1<<0) );
	__delay_ms(te);
	PORTD |= ( (1<<1) | (1<<6) );
	__delay_ms(te);
	PORTD = 0xFF;
	__delay_ms(te);
}
void secuencia_09(void){
	PORTD = 0x00;
	__delay_ms(te);
	PORTD = 0xFF;
	__delay_ms(te);
	PORTD = 0x0F;
	__delay_ms(te);
	PORTD = 0xF0;
	__delay_ms(te);
}
/*
void Secuencias(int S){
    switch(S){
        case 0:
            secuencia_01();
            break;
        case 1:
            secuencia_02();
            break;
        case 2:
            secuencia_03();
            break;
        case 3:
            secuencia_04();
            break;
        case 4:
            secuencia_05();
            break;
        case 5:
            secuencia_06();
            break;
        case 6:
            secuencia_07();
            break;
        case 7:
            secuencia_08();
            break;
        case 8:
            secuencia_09();
            break;
        
    }       
}
*/
