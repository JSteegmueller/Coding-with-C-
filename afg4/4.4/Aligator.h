//
// Created by jsteeg on 4/14/21.
//

#ifndef AFG4_ALIGATOR_H
#define AFG4_ALIGATOR_H

#include "Reptile.h"

class Aligator: public Reptile {
    int numberOfTeeth;

public:
    void setNumberOfTeeth(int _numberOfTeeth);
    int getNumberOfTeeth() const;
    Aligator(int _age, bool _hasFeet, int _numberOfTeeth);
    ~Aligator();
};

#endif //AFG4_ALIGATOR_H
