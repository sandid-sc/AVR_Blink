#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stddef.h>
#include <stdint.h>
#define LED_DDR DDRD
#define LED_PORT PORTD
#define LED_PIN PD2
int main(void)
{
	LED_DDR |= (1<<LED_PIN);
    while (1) 
    {
		_delay_ms(500);
		LED_PORT ^= (1<<LED_PIN);
    }
}

