#include <stdio.h>
#include "arduino_pinmap.h"

int main(void)
{
    puts("Hello world!\n");
    uint32_t gpio_pin = ARDUINO_PIN_4;
    gpio_init(gpio_pin, GPIO_OUT);
    gpio_set(gpio_pin);
    return 0;
}
