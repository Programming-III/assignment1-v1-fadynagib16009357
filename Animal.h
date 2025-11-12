#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here 

#include <iostream>
#include <string>
using namespace std;
class animal{
    private:
    string name;
    int age;
    bool ishungry;
    public:
    animal();
    animal(string n,int a,bool ishug);
    
    ~animal();

    void display();
    void feed();    };


#endif
