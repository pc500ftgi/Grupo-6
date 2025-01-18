
#include "pico/stdlib.h"
#include "ler_tecla.h"

void teclado_init() {
    gpio_init(ROW1); gpio_set_dir(ROW1, GPIO_IN);
    gpio_init(ROW2); gpio_set_dir(ROW2, GPIO_IN);
    gpio_init(ROW3); gpio_set_dir(ROW3, GPIO_IN);
    gpio_init(ROW4); gpio_set_dir(ROW4, GPIO_IN);
    gpio_init(COL1); gpio_set_dir(COL1, GPIO_OUT);
    gpio_init(COL2); gpio_set_dir(COL2, GPIO_OUT);
    gpio_init(COL3); gpio_set_dir(COL3, GPIO_OUT);
    gpio_init(COL4); gpio_set_dir(COL4, GPIO_OUT);
}