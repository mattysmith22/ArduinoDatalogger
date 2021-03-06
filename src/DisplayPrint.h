#ifndef DISPLAYPRINT_H
#define DISPLAYPRINT_H

#include <Print.h>
#include "Adafruit_SSD1306.h"

class DisplayPrint : public Print {
    public:
    DisplayPrint(Adafruit_SSD1306 &disp);
    size_t write(uint8_t) override;
    size_t write(const uint8_t *buffer, size_t size) override;
private:
    Adafruit_SSD1306 &_display;
};

#endif