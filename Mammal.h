#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

//define mammal class here

class Mammal : public Animal{
    private :
string furcolor;

Mammal();
Mammal(string fc){
furcolor = fc;
}};





#endif
