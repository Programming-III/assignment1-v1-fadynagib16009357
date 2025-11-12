#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 



class enclosure{
    private:
    Animal *animal;
    int capacity;
    int currentCount;
    public:enclosure();
    enclosure(Animal* a,int c,int cc){
    animal=a;
    capacity=c;
    currentCount=cc;
    }
    ~enclosure();
    void addAnimal(Animal* a);
    void displayAnimals();
};





#endif
