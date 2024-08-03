#include "driver/gpio.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "gecl-motion-sensor-manager.h"

#define PIR_PIN 13
static const char *TAG = "PIR_TEST";

void app_main(void) {
    init_motion_sensor_manager();

    while (true) {
        vTaskDelay(pdMS_TO_TICKS(100));  // Delay to allow other tasks to run
    }
}