//
// Created by jsteeg on 4/14/21.
//
#include <iostream>
#include "Printer.h"

void Printer::powerOff() {
    isPoweredOn = false;
}

void Printer::powerOn() {
    isPoweredOn = true;
}

void Printer::print(int _s) {
    currentlyPrinting = true;
    printf(s);
    currentlyPrinting = false;
}

void Printer::setModeColor() {
    mode = Color;
}

void Printer::setModeSW() {
    mode = SW;
}

