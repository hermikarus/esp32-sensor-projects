#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define PIR_PIN GPIO_NUM_15  // GPIO pin where the PIR sensor is connected

void app_main(void) {
    gpio_set_direction(PIR_PIN, GPIO_MODE_INPUT);

    printf("Starting PIR Sensor Test...\n");

    while (1) {
        int motionState = gpio_get_level(PIR_PIN);

        if (motionState == 1) {
            printf("Motion detected!\n");
        } else {
            printf("No motion detected!\n");
        }

        vTaskDelay(pdMS_TO_TICKS(1000));  // Wait 1 second before checking again
    }
}
