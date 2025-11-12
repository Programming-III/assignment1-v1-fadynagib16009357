#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here


class visitor{
    private:
string visitorName;
int ticketsBought;
public :
visitor();
visitor(string vN,string tB){
visitorName=vN;
ticketsBought=tB;
}
~visitor();
void displayInfo();
};




#endif
