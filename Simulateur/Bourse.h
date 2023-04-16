#ifndef BOURSE_H_INCLUDED
#define BOURSE_H_INCLUDED
#include <vector>
#include "PrixJournalier.h"

class Bourse {

    private:
        string nom;
        vector<PrixJournalier> historique;
    public:
        Bourse(string n):nom(n){};
        PrixJournalier ChercherAction(string na,date& d );
        vector<PrixJournalier> ChercherHistoriqueAction(string na,date aujourdhui);
        vector<PrixJournalier> BourseAujourdhui(date aujourdhui);
};

PrixJournalier Bourse::ChercherAction(string na,date& d ){

PrixJournalier action ;
int i ;

while(i<historique.size()){
    if(historique.at(i).getdate()==d && historique.at(i).getaction()==na){
        action=historique.at(i);
        break ;
    }
    else
        i++;
}

return action;

}


vector<PrixJournalier> Bourse::ChercherHistoriqueAction(string na,date aujourdhui){

vector<PrixJournalier> ha;

for(int i=0;i<historique.size();i++){
    if(historique.at(i).getdate()<=aujourdhui && historique.at(i).getaction()==na){
        ha.push_back(historique.at(i));
    }
}
return ha ;
}


vector<PrixJournalier> Bourse::BourseAujourdhui(date aujourdhui){

int i=0;
vector<PrixJournalier> Baujourdhui;
    for(i=0;i<historique.size();i++){
        if(historique.at(i).getdate()==aujourdhui){
         Baujourdhui.push_back(historique.at(i));
        }
    }
    return Baujourdhui;
}









#endif // BOURSE_H_INCLUDED
