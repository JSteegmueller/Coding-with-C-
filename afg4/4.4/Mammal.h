//
// Created by jsteeg on 4/14/21.
//

#ifndef AFG4_MAMMAL_H
#define AFG4_MAMMAL_H
#include "Animal.h"

class Mammal: public Animal {
    double hairLength;

public:
    void setHairLength(double _hairLength);
    double getHairLength() const;
    Mammal(int _age, double _hairLength);
    ~Mammal();
};


#endif //AFG4_MAMMAL_H
