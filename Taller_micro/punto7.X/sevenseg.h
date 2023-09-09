/* 
 * File:   sevenseg.h
 * Author: julia
 *
 * Created on 8 de septiembre de 2023, 01:04 AM
 */

#ifndef SEVENSEG_H
#define	SEVENSEG_H

#include <xc.h>

#define DIR_segA   TRISBbits.TRISB0
#define DIR_segB   TRISBbits.TRISB1
#define DIR_segC   TRISBbits.TRISB2
#define DIR_segD   TRISBbits.TRISB3
#define DIR_segE   TRISBbits.TRISB4
#define DIR_segF   TRISBbits.TRISB5
#define DIR_segG   TRISBbits.TRISB6

#define segA  LATBbits.LATB0
#define segB  LATBbits.LATB1
#define segC  LATBbits.LATB2
#define segD  LATBbits.LATB3
#define segE  LATBbits.LATB4
#define segF  LATBbits.LATB5
#define segG  LATBbits.LATB6

#define OUT 0
#define IN  1

void display_init(void);
void display_ac(char dig);
void display_cc(char dig);


#endif	/* SEVENSEG_H */

