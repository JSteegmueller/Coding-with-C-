//
// Created by jsteeg on 4/14/21.
//

#ifndef AFG4_PRINTER_H
#define AFG4_PRINTER_H
enum Mode {Color, SW};
class Printer {
    int colorStatus;
    int SWStatus;
    bool currentlyPrinting;
    bool isPoweredOn;
    Mode mode;
public:
    void powerOn();
    void print(string _s);
    void setModeColor();
    void setModeSW();
    void powerOff();
};
#endif //AFG4_PRINTER_H
