#ifndef BLINKY_H
#define BLINKY_H

#include <Arduino.h>

#define LED_PIN 2

void setupBlinky()
{
    pinMode(LED_PIN, OUTPUT);
}

void setBlinky(bool on)
{
    digitalWrite(LED_PIN, on ? HIGH : LOW);
}

int getBlinky()
{
    return digitalRead(LED_PIN);
}

#endif // BLINKY_H
