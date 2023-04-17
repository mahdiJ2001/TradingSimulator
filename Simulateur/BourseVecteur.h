#ifndef BOURSE_H_INCLUDED
#define BOURSE_H_INCLUDED
#include <vector>
#include "PrixJournalier.h"
#include "Bourse.h"

class BourseVecteur: public Bourse {      //for(voiture v:voitures) loop sur les elements
    private:
        vector<PrixJournalier> historique;
    public:
        BourseVecteur(vector<PrixJournalier> h):historique(h){};
        vector<string> getActionsDisponiblesParDate(date d);
        vector<PrixJournalier> getPrixJournaliersParDate(date d);
};

vector<string> getActionsDisponiblesParDate(date d){   //size <=  eliminer les doublons utiliser le set insert condition de recherche : date inferieur date aujourdhui et inferieur date max dans le jeu de donnees sinon on retourne un tab vide

vector<string> actions ;
int i=0;

while(historique.at(i).getdate()<=d || i<historique.size() ){
    if(historique.at(i).getdate()==d )
        actions.push_back(historique.at(i).getaction());
    i++;
}
return actions ;
}



vector<PrixJournalier> getPrixJournaliersParDate(date d){

vector<PrixJournalier> pjd;
int i=0;
while(historique.at(i).getdate()<=d || i<historique.size() ){
    if(historique.at(i).getdate()==d )
        pjd.push_back(historique.at(i));
    i++;
}
return pjd ;
}



#endif // BOURSE_H_INCLUDED
