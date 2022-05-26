//
// Created by jsteeg on 4/14/21.
//

#ifndef AFG4_ANIMAL_H
#define AFG4_ANIMAL_H


class Animal {
    int age;
public:
    void setAge(int age);
    int getAge() const;
    Animal(int _age);
    ~Animal();
};


#endif //AFG4_ANIMAL_H
