#include "sevenseg.h"

void display_init(void){
    DIR_segA = OUT;
    DIR_segB = OUT;
    DIR_segC = OUT;
    DIR_segD = OUT;
    DIR_segE = OUT;
    DIR_segF = OUT;
    DIR_segG = OUT;
}
void display_ac(char dig){
    switch(dig){
        case 0: segA = 0;
                segB = 0;
                segC = 0;
                segD = 0;
                segE = 0;
                segF = 0;
                segG = 1;
                break;
                
        case 1: segA = 1;
                segB = 0;
                segC = 0;
                segD = 1;
                segE = 1;
                segF = 1;
                segG = 1;
                break;
         
        case 2: segA = 0;
                segB = 0;
                segC = 1;
                segD = 0;
                segE = 0;
                segF = 1;
                segG = 0;
                break;
                
        case 3: segA = 0;
                segB = 0;
                segC = 0;
                segD = 0;
                segE = 1;
                segF = 1;
                segG = 0;
                break;
        
        case 4: segA = 1;
                segB = 0;
                segC = 0;
                segD = 1;
                segE = 1;
                segF = 0;
                segG = 0;
                break;
                
        case 5: segA = 0;
                segB = 1;
                segC = 0;
                segD = 0;
                segE = 1;
                segF = 0;
                segG = 0;
                break;
                
        case 6: segA = 0;
                segB = 1;
                segC = 0;
                segD = 0;
                segE = 0;
                segF = 0;
                segG = 0;
                break;
         
        case 7: segA = 0;
                segB = 0;
                segC = 0;
                segD = 1;
                segE = 1;
                segF = 0;
                segG = 1;
                break;
                
        case 8: segA = 0;
                segB = 0;
                segC = 0;
                segD = 0;
                segE = 0;
                segF = 0;
                segG = 0;
                break;
        
        case 9: segA = 0;
                segB = 0;
                segC = 0;
                segD = 0;
                segE = 1;
                segF = 0;
                segG = 0;
                break;
    }
}
void display_cc(char dig){
    
    switch(dig){
        case 0: segA = 1;
                segB = 1;
                segC = 1;
                segD = 1;
                segE = 1;
                segF = 1;
                segG = 0;
                break;
                
        case 1: segA = 0;
                segB = 1;
                segC = 1;
                segD = 0;
                segE = 0;
                segF = 0;
                segG = 0;
                break;
         
        case 2: segA = 1;
                segB = 1;
                segC = 0;
                segD = 1;
                segE = 1;
                segF = 0;
                segG = 1;
                break;
                
        case 3: segA = 1;
                segB = 1;
                segC = 1;
                segD = 1;
                segE = 0;
                segF = 0;
                segG = 1;
                break;
        
        case 4: segA = 0;
                segB = 1;
                segC = 1;
                segD = 0;
                segE = 0;
                segF = 1;
                segG = 1;
                break;
                
        case 5: segA = 1;
                segB = 0;
                segC = 1;
                segD = 1;
                segE = 0;
                segF = 1;
                segG = 1;
                break;
                
        case 6: segA = 1;
                segB = 0;
                segC = 1;
                segD = 1;
                segE = 1;
                segF = 1;
                segG = 1;
                break;
         
        case 7: segA = 1;
                segB = 1;
                segC = 1;
                segD = 0;
                segE = 0;
                segF = 1;
                segG = 0;
                break;
                
        case 8: segA = 1;
                segB = 1;
                segC = 1;
                segD = 1;
                segE = 1;
                segF = 1;
                segG = 1;
                break;
        
        case 9: segA = 1;
                segB = 1;
                segC = 1;
                segD = 1;
                segE = 0;
                segF = 1;
                segG = 1;
                break;
    }
}
