//
// Created by jsteeg on 4/14/21.
//

#include "Dog.h"
#include <iostream>

Dog::Dog(int _age, double _hairLength, double _kilos): Mammal(_age, _hairLength) {
    kilosFoodPerDay = _kilos;
    printf("Dog");
}

Dog::~Dog() {
    printf("Dog");
}

double Dog::getKilosFoodPerDay() const {
    return kilosFoodPerDay;
}

void Dog::setKilosFoodPerDay(double _kilos) {
    Dog::kilosFoodPerDay = _kilos;
}
