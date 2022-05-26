#include <iostream>
#include "RollerSkates.h"

void RollerSkates::changeOwner(string _newOwner) {
    owner = _newOwner;
}

void RollerSkates::changeColor(string _newColor) {
    color = _newColor;
}

void RollerSkates::changeSize(int _newSize) {
    size = _newSize;
}

void RollerSkates::rollAround(int _speed) {
    printf("w")
    for (int i = 0; i < _speed; i++) {
        printf("e")
    }
}
