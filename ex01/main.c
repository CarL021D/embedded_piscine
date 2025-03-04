#include <avr/io.h>
#include <util/delay.h>

int main() {
    
    // 14.3.1
    DDRB |= (1<<PB0);
    PORTB |= (1<<PB0);

    while (1) {};
}