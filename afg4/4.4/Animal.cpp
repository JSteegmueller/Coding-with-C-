//
// Created by jsteeg on 4/14/21.
//
#include <iostream>
#include "Animal.h"

Animal::Animal(int _age) {
    printf("Animal");
    age = _age;
}

Animal::~Animal() {
    printf("Animal");
}

int Animal::getAge() const {
    return age;
}

void Animal::setAge(int _age) {
    Animal::age = _age;
}
