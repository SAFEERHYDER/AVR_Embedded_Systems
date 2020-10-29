/*
 * Hello_World.c
 *
 * Created: 10/27/2020 4:14:45 PM
 * Author : DR SAFEER HYDER
 */ 

#include <avr/io.h>


int main(void)
{
	unsigned char z ; // counter variable
	DDRB = 0xFF;   // configure as output port
	
    /* Replace with your application code */
    for(z=0; z<=255; z++)
	PORTB = z;
	return 0;
}

