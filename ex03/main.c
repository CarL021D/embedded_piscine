#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>

int main() {
    
    DDRB |= (1 << PB0);

    while (1)
    {
        if (!(PIND & (1 << PD2))) {
            PORTB ^= (1 << PB0);
            _delay_ms(200);
        }
    };
}