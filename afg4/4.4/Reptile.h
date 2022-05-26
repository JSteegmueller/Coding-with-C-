//
// Created by jsteeg on 4/14/21.
//

#ifndef AFG4_REPTILE_H
#define AFG4_REPTILE_H
#include "Animal.h"

class Reptile: public Animal {
    bool hasFeet;

public:
    void setHasFeet(bool _hasFeet);
    bool getHasFeet() const;
    Reptile(int _age, bool _hasFeet);
    ~Reptile();
};

#endif //AFG4_REPTILE_H
