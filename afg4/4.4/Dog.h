//
// Created by jsteeg on 4/14/21.
//

#ifndef AFG4_DOG_H
#define AFG4_DOG_H
#include "Mammal.h"

class Dog: public Mammal {
    double kilosFoodPerDay;

public:
    void setKilosFoodPerDay(double _kilos);
    double getKilosFoodPerDay() const;
    Dog(int _age, double _hairLength, double _kilos);
    ~Dog();
};


#endif //AFG4_DOG_H
