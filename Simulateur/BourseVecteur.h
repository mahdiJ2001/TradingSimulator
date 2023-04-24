#include "Bourse.h"
#include <vector>
#include "PrixJournalier.h"


class BourseVecteur: public Bourse{
    private:
        vector<PrixJournalier> historique;
    public:
        BourseVecteur(vector<PrixJournalier> h):historique(h){};
        vector<string> getActionsDisponiblesParDate(date d);
        vector<PrixJournalier> getPrixJournaliersParDate(date d);
};
//for(voiture v:voitures) loop sur les elements
vector<string> BourseVecteur::getActionsDisponiblesParDate(date d){   //size <=  eliminer les doublons utiliser le set insert condition de recherche : date inferieur date aujourdhui et inferieur date max dans le jeu de donnees sinon on retourne un tab vide

vector<string> actions ;
int i=0,j=0;

for(i=0;i<historique.size();i++){
    if(historique.at(i).getdate()==d ){
        actions.push_back(historique.at(i).getaction());
        }
}
return actions ;
}



vector<PrixJournalier> BourseVecteur::getPrixJournaliersParDate(date d){

vector<PrixJournalier> pjd;
int i=0;
for(i=0;i<historique.size();i++){
    if(historique.at(i).getdate()==d )
        pjd.push_back(historique.at(i));
}
return pjd ;
}




