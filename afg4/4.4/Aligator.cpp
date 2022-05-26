//
// Created by jsteeg on 4/14/21.
//

#include <iostream>
#include "Aligator.h"

Aligator::Aligator(int _age, bool _hasFeet, int _numberOfTeeth): Reptile(_age, _hasFeet) {
    numberOfTeeth = _numberOfTeeth;
    printf("Aligator");
}

Aligator::~Aligator() {
    printf("Aligator");
}

int Aligator::getNumberOfTeeth() const {
    return Aligator::numberOfTeeth;
}

void Aligator::setNumberOfTeeth(int _numberOfTeeth) {
    Aligator::numberOfTeeth = _numberOfTeeth;
}