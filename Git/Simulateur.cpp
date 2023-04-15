#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    date datestr("12/07/2005");
	cout<<"etant  donne la date : 12/07/2005 "<<endl;
	cout<<"on obtient la date : "<<endl;
	cout<<datestr<<endl;

    date dateerr("00/34/2001");
    cout<<"etant  donne la date : 00/34/2001 "<<endl;
	cout<<"on obtient la date"<<endl;
	cout<<dateerr<<endl;

	date d(0,4,2011);
	cout<<"etant  donne la date : "<<endl;
	cout<<d<<endl;
	cout<<"on obtient la date : "<<endl;
	cout<<d<<endl;

	date d1(15,0,2011);
	cout<<"etant  donne la date : "<<endl;
	cout<<d1<<endl;
	cout<<"on obtient la date : "<<endl;
	cout<<d1<<endl;

	date d2(1,5,2011);
	cout<<"etant  donne la date : "<<endl;
	cout<<d2<<endl;
	cout<<"on obtient la date : "<<endl;
	cout<<d2<<endl;

	date d3(1,5,2011);
	cout<<"etant  donne la date : "<<endl;
	cout<<d3<<endl;
	cout<<"apres avoir incremente"<<endl;
	cout<<"on obtient la date : "<<endl;
	d3.incrementerdate();
	cout<<d3<<endl;


	date d4(30,4,2011);
	cout<<"etant  donne la date : "<<endl;
	cout<<d4<<endl;
	cout<<"apres avoir incremente"<<endl;
	cout<<"on obtient la date : "<<endl;
	d4.incrementerdate();
	cout<<d4<<endl;

	date d5(31,12,2011);
	cout<<"etant  donne la date : "<<endl;
	cout<<d5<<endl;
	cout<<"apres avoir incremente"<<endl;
	cout<<"on obtient la date : "<<endl;
	d5.incrementerdate();
	cout<<d5<<endl;

	date d6(12,10,2005);
	date d7(12,10,2005);
	cout<<"etant  donne les dates : "<<endl;
    cout<<d6<<d7<<endl;
    cout<<"l'operateur == donne "<<endl ;
    cout<<(d6==d7)<<endl;

	date d8(10,10,2005);
	cout<<"etant  donne les dates : "<<endl;
    cout<<d6<<d8<<endl;
    cout<<"l'operateur == donne "<<endl ;
    cout<<(d6==d8)<<endl;

	return 0 ;

}
