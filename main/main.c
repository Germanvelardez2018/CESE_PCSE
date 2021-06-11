#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"




#define LED_INTERNO	GPIO_NUM_2

void app_main(void)
{

    gpio_set_direction(LED_INTERNO, GPIO_MODE_OUTPUT);
    int level = 0;
    while (true) {
        gpio_set_level(LED_INTERNO, level);
        level = !level;
        vTaskDelay(300 / portTICK_PERIOD_MS);
    }
}

