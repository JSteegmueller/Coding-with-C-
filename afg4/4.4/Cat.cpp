//
// Created by jsteeg on 4/14/21.
//

#include "Cat.h"
#include "iostream"

Cat::Cat(int _age, double _hairLength, char* _eyeColor): Mammal(_age, _hairLength) {
    eyeColor = _eyeColor;
    printf("Cat");
}

Cat::~Cat() {
    printf("Cat");
}

char* Cat::getEyeColor() const{
    return eyeColor;
}

void Cat::setEyeColor(char* _eyeColor) {
    Cat::eyeColor = _eyeColor;
}