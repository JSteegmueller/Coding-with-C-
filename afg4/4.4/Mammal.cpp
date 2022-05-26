//
// Created by jsteeg on 4/14/21.
//
#include <iostream>
#include "Mammal.h"

Mammal::Mammal(int _age, double _hairLength): Animal(_age) {
    hairLength = _hairLength;
    printf("Mammal");
}

Mammal::~Mammal() {
    printf("Mammal");
}

double Mammal::getHairLength() const {
    return hairLength;
}

void Mammal::setHairLength(double _hairLength) {
    Mammal::hairLength = _hairLength;
}
