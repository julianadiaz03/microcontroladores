#include "config.h"
#include <xc.h>
#include "sevenseg.h"
char decoCC[]={191,134,219,207,230,237,253,135,255,231};//Areglo numemrico 
char decoAC[]={64,121,36,48,25,18,2,120,0,24};

#define te 50
int unidad=0,decena=0,num=0;
char cont=0;

int main(void)
{
	TRISD= 0x00;
    ANSELD =0x00;
    
    TRISBbits.TRISB0=0;//Salidas
    TRISBbits.TRISB1=0;
    TRISBbits.TRISB2=1;//Entradas
    TRISBbits.TRISB3=1;
    
    ANSELBbits.ANSB0=0;
    ANSELBbits.ANSB1=0;
    ANSELBbits.ANSB2=0; 
    ANSELBbits.ANSB3=0;
    
    while (1) 
    {if(PORTBbits.RB2 == 1 && PORTBbits.RB3 == 0){//Ascendente
            num=0;
            
            LATBbits.LATB0 = 1; //
            LATBbits.LATB1 = 0;
            LATD = decoCC[decena];
            __delay_ms(te);
            
            LATBbits.LATB0 = 0;
            LATBbits.LATB1 = 1;
            LATD = decoCC[unidad];
            __delay_ms(te);
            unidad++;
            
    if(unidad==9){
            decena++;
            unidad=0;
            }
    if(decena==10){
            decena=0;
            unidad=0;
            }
        }
    if(PORTBbits.RB2 == 0 && PORTBbits.RB3 == 1){//Descendente
            num=1;
            LATBbits.LATB0 = 1;
            LATBbits.LATB1 = 0;
            LATD = decoCC[decena];
            __delay_ms(te);
            
            LATBbits.LATB0 = 0;
            LATBbits.LATB1 = 1;
            LATD= decoCC[unidad];
            __delay_ms(te);
            unidad--;
            
    if(unidad==0){
            decena--;
            unidad=9;
            }
    if(decena==0){
            decena=9;
            unidad=9;
            }
        }
    if(PORTBbits.RB2 == 1 && PORTBbits.RB3 == 1){//Pausa
            num=2;
            LATBbits.LATB0 = 1;
            LATBbits.LATB1 = 0;    
            LATD = decoCC[decena];
            __delay_ms(te);
            LATBbits.LATB1 = 1;
            LATBbits.LATB0 = 0;
            LATD = decoCC[unidad];
            __delay_ms(te);
        } 
    if(PORTBbits.RB2 == 0 && PORTBbits.RB3 == 0){//Ultima accion con paso de dos
        if(num==0){//Ascendente
            LATBbits.LATB1 = 0;
            LATBbits.LATB0 = 1;
            LATD = decoCC[decena];
            __delay_ms(te);
            LATBbits.LATB1 = 1;
            LATBbits.LATB0 = 0;
            LATD= decoCC[unidad];
            __delay_ms(te);
            unidad=unidad+2;
        if(unidad>9){
            decena++;
            unidad=0;
       }
        if(decena>9){
            decena=0;
            unidad=0;
                }
            }
        if(num==1){//Descenten
            LATBbits.LATB1 = 0;
            LATBbits.LATB0 = 1;
            LATD = decoCC[decena];
            __delay_ms(te);
            LATBbits.LATB1 = 1;
            LATBbits.LATB0 = 0;
            LATD = decoCC[unidad];
            __delay_ms(te);
            unidad=unidad-2;
        if(unidad<=0){
                    decena--;
                    unidad=9;
                }
        if(decena<0){
                    decena=9;
                    unidad=9;
                }
            }
        if(num==2){//Pausa
            LATBbits.LATB1 = 0;
            LATBbits.LATB0 = 1;
            LATD = decoCC[decena];
            __delay_ms(te);
            LATBbits.LATB1 = 1;
            LATBbits.LATB0 = 0;
            LATD = decoCC[unidad];
                __delay_ms(te);
            }     
        }  
    }
    return 0;
}