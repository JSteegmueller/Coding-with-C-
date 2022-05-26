//
// Created by jsteeg on 4/14/21.
//

#ifndef AFG4_CAT_H
#define AFG4_CAT_H
#include "Mammal.h"
class Cat: public Mammal {
    char* eyeColor;

public:
    char* getEyeColor() const;
    void setEyeColor(char* _eyeColor);
    Cat(int _age, double _hairLength, char* eyeColor);
    ~Cat();

};



#endif //AFG4_CAT_H
