#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here

#include <iostream>
#include <string>
using namespace std;
class Reptile : public Animal{
    private : bool isvenomous;
    public :Reptile();
    Reptile(bool is){
    isvenomous=vs;
    }
    ~Reptile();
   
};







#endif
