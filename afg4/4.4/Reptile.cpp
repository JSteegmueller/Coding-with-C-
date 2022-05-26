//
// Created by jsteeg on 4/14/21.
//
#include <iostream>
#include "Reptile.h"

Reptile::Reptile(int _age, bool _hasFeet): Animal(_age) {
    hasFeet = _hasFeet;
    printf("Reptile");
}

Reptile::~Reptile() {
    printf("Reptile");
}

bool Reptile::getHasFeet() const {
    return hasFeet;
}

void Reptile::setHasFeet(bool _hasFeet) {
    Reptile::hasFeet = _hasFeet;
}
