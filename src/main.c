#include "devices.h"
#include "utils.h"

int main(void) {
    // Initialize devices
    led_init();
    display_init();

    // Use printf
    printf("Hello, DTEK-V! Time: %u ms\n", get_time_ms());

    // Control LEDs
    led_set(0x3FF); // All on
    sleep_ms(1000);
    led_set(0x000); // All off

    // Read switches
    unsigned int sw = switch_read();
    printf("Switch state: 0x%x\n", sw);

    // Display number
    display_number(0x123456);

    // Dump registers for debugging
    reg_dump_all();

    return 0;
}
