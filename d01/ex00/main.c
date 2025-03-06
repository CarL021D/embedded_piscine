#include <avr/io.h>
#include <stdint.h>

int main() {
    
    DDRB |= (1 << PB1);

    while (1) {

        PORTB ^= (1 << PB1);
        for (volatile uint32_t i = 700000; i; --i) {}
    }
}