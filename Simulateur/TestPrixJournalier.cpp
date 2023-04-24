#include<iostream>
#include "PrixJournalier.h"
using namespace std ;

int main() {

PrixJournalier pj1;

cout<<"######TEST OPERATEURS >> et <<####### "<<endl ;
cout<<"Entrer un prix journalier au format date;action;prix :"<<endl;
cin>>pj1;
cout<<endl;
cout<<"Voici votre prix journalier : "<<endl;
cout<<pj1;


return 0 ;
}
