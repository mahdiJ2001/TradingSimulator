#include <iostream>
#include "BourseVecteur.h"
#include <vector>
#include "PersistancePrixJournaliers.h"


int main(){

date d(4,1,2010);
PersistancePrixJournaliers extract ;
vector<PrixJournalier> historique,Pjd ;
vector<string> actions ;
historique=extract.lirePrixJournaliersDUnFichier("prices_simple.csv");
BourseVecteur bv(historique);
int i=0;

actions=bv.getActionsDisponiblesParDate(d);
cout<<"###Actions disponibles pour la date :"<<d<<"###"<<endl ;
cout<<"Nombre d'actions : "<<actions.size()<<endl ;
for(i=0;i<actions.size();i++)
    cout<<actions[i]<<endl;


Pjd=bv.getPrixJournaliersParDate(d);
cout<<"###PrixJournaliers pour la date :"<<d<<"###"<<endl;
cout<<"Nombre de prix journaliers : "<<Pjd.size()<<endl ;
for(i=0;i<Pjd.size();i++)
    cout<<Pjd[i]<<endl;













return 0 ;
}
