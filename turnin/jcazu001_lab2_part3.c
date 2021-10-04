/*	Author: jcazu001
 *  Partner(s) Name: 
 *	Lab Section: 22
 *	Assignment: Lab 2  Exercise 3
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */

#include <avr/io.h>
#ifdef _SIMULATE_
#include <simAVRHeader.h>
#endif	

int main(void) {
	DDRA = 0x00;// PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRC = 0xFF;
//	unsigned chcr tmpB = 0x00; // Temporary variable to hold the value of B
//	unsigned char tmpA = 0x00; // Temporary variable to hold the value of A
while(1) {

if (PORTA == 0x00)
{
PORTC = 0x04;
}

if (PORTA == 0x01 || PORTA == 0x02 || PORTA == 0x03 || PORTA == 0x04)
{
PORTC = 0x03; 
}

if (PORTA == 0x03 || PORTA == 0x05 || PORTA == 0x09 || PORTA == 0x0A || PORTA == 0x06 || PORTC == 0x0C)
{
PORTC = 0x02;
}

if (PORTA == 0x07 || PORTA == 0x0E || PORTA == 0x0B || PORTA == 0x0D)
{
PORTC = 0x01;
}

if (PORTA == 0x0F)
{
PORTC = 0x80;
}
}
														 												 					return 0;		 																	 					
}
				 											

