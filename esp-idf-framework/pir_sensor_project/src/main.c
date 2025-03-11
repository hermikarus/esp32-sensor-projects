#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define PIR_PIN GPIO_NUM_15  // PIR Sensörünün bağlandığı GPIO pini

void app_main(void) {
    gpio_set_direction(PIR_PIN, GPIO_MODE_INPUT);

    printf("PIR Sensor Testi Basliyor...\n");

    while (1) {
        int motionState = gpio_get_level(PIR_PIN);

        if (motionState == 1) {
            printf("Hareket Var!\n");
        } else {
            printf("Hareket Yok...\n");
        }

        vTaskDelay(pdMS_TO_TICKS(1000));  // 1 saniye bekle
    }
}
