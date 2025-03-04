#include <avr/io.h>
#include <util/delay.h>

#include <avr/io.h>
#include <util/delay.h>

int main() {
    
    DDRB = (1<<0);

    while (1)
    {
        if (( PIND & (1 << PD4 ) ))
            PORTB &= ~( 1 << PB1 );
        else
            PORTB = ( 1 << PB1 );
    };
}