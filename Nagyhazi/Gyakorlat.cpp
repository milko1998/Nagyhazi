#include "Gyakorlat.h"



void Gyakorlat::kiir()
{
	cout << name  ;
	if (kiszh) cout << "	Van kiszh	" ;
	else cout << "	Nincs kisz	" ;
}

void Gyakorlat::kiir_adat() {
	if (kiszh) cout << "Van kiszh	";
	else cout << "Nincs kiszh	";
}
Gyakorlat::Gyakorlat(int kiszh,string name)
{
	this->kiszh = kiszh;
	this->name = name + " gyakorlat	";
}


Gyakorlat::~Gyakorlat()
{
}
