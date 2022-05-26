//
// Created by jsteeg on 4/14/21.
//

#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Aligator.h"

int main() {
    Cat *cat0 = new Cat(11, 2, "Black");
    Cat *cat1 = new Cat(11, 5.5, "Blue");
    Dog *dog = new Dog(11, 11, 0.5);
    Aligator *aligator0 = new Aligator(11, true, 1);
    Aligator *aligator1 = new Aligator(12, true, 2);
    Aligator *aligator2 = new Aligator(13, true, 3);


    Animal *pointer[] = {cat0, cat1, dog, aligator0, aligator1, aligator2};
    printf("\n");
    for (int i = 0; i < 6; i++) {
        int age = pointer[i]->getAge();
        printf("%i \n", age);
    }

    delete cat0;
    delete cat1;
    delete dog;
    delete aligator0;
    delete aligator1;
    delete aligator2;
    return 0;
}

