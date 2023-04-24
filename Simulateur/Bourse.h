#ifndef BOURSE_H_INCLUDED
#define BOURSE_H_INCLUDED
#include "Date.h"
using namespace std ;

class Bourse {
    private:
    date aujourdhui;
    public:
    Bourse(){};
    Bourse(date ajd):aujourdhui(ajd){};
    ~Bourse(){};
    date getdateaujourdhui() const{return aujourdhui;}
};


#endif // BOURSE_H_INCLUDED
