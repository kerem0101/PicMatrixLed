/*
 * File:   newmain.c
 * Author: kerem
 *
 * Created on 08 Nisan 2021 Per?embe, 16:33
 */

// CONFIG
#pragma config FOSC = EXTRC     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config CP = OFF         // FLASH Program Memory Code Protection bits (Code protection off)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low Voltage In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EE Memory Code Protection (Code Protection off)
#pragma config WRT = ON         // FLASH Program Memory Write Enable (Unprotected program memory may be written to by EECON control)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>

#define _XTAL_FREQ 4000000

int col[] = {0x01, 0x02, 0x04, 0x08, 0x10};
int row[] = {0x03, 0x3A, 0x3B, 0x3A, 0x03};

void main(void) {

    TRISB = 0;
    TRISC = 0;

    while (1) {

        for (int i = 0; i < 5; i++) {

            PORTC = col[i];
            PORTB = row[i];
            __delay_ms(10);
        }
    }
    return;
}
