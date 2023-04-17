#ifndef BOURSE_H_INCLUDED
#define BOURSE_H_INCLUDED
#include "Date.h"


class Bourse {
    private:
    date aujourdhui;
    public:
    Bourse(date ajd):aujourdhui(ajd){};
    date getdateaujourdhui() const{return aujourdhui;}
};


#endif // BOURSE_H_INCLUDED
