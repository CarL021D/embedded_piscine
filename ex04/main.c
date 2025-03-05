#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>

int main() {

    int8_t count = 0;

    DDRB |= (1 << PB0) | (1 << PB1) | (1 << PB2) | (1 << PB4);

    while (1)
    {
        
        if (!(PIND & (1 << PD2))) {
            count++;
            _delay_ms(200);
        }
        if (!(PIND & (1 << PD4))) {
            count--;
            _delay_ms(200);
        }
        if (count > 15)
            count = 0;
        if (count < 0)
            count = 15;
        
            PORTB = 0;
        if (count & 1)
            PORTB |= (1 << PB0);
        if (count & 2)
            PORTB |= (1 << PB1);
        if (count & 4)
            PORTB |= (1 << PB2);
        if (count & 8)
            PORTB |= (1 << PB4);
    }
}