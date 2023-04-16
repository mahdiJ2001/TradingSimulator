#include <iostream>
#include "PrixJournalier.h"
#include "Bourse.h"
using namespace std;

int main()
{
    date d(0,0,0);
    PrixJournalier pj(d,"ATP",22);
    cin>>pj ;
    cout<<pj;

    return 0 ;
}
