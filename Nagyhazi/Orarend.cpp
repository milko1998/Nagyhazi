#include "Orarend.h"
#include "Targy.h"


Orarend::Orarend() 

{
	orak = new std::list<Targy*> ;
}

Orarend::~Orarend()
{
	delete orak;
}

void Orarend::setmaxora(int n)
{
	maxora = n;
}

void Orarend::setkozosora(int n)
{
	kozosora = n;
}

bool Orarend::permutalas()
{
 return std::next_permutation(orak->begin(), orak->end(), &Compare::osszehasonlit);
}

void Orarend::feltolt()
{
	int i;
	int currsize = orak->size();
	if (maxora * 5 > currsize)
	{
		for (i = 0; i < (maxora * 5) - currsize ; i++)
			orak->push_back(new Lyukasora());
	}
}

bool Orarend::checkifvalid(int kozos_orak)
{
	int i = 1;
	list < Targy*>::iterator it;
	for (it = orak->begin(); it != orak->end(); it++)
	{
		string currname;
		string prevname = currname;
		currname = (*it)->getName();
		if (currname == prevname) i++;
		else i = 1;
		if (i >= kozos_orak) return false;
	}
	return true;
}


void Orarend::kiiras()
{
	list < Targy*>::iterator it;
	for (it = orak->begin(); it != orak->end(); it++)
	{
		(*it)->kiir();
		
	}
	cout << endl;

	for (it = orak->begin(); it != orak->end(); it++)
	(*it)->kiir_adat();
}


void Orarend::beolvas(ifstream &file)
{
	int i;
	string nev;
	int eloadas, jelenlet, gyakorlat, kiszh, labor, beugro;
	
	file.open("input.txt");

	while (file >> nev >> eloadas >> jelenlet >> gyakorlat >> kiszh >> labor >> beugro)
	{
		for (i = 0; i < eloadas; i++)
		{
			orak->push_back(new Eloadas(jelenlet, nev));
		}

		for (i = 0; i < gyakorlat; i++)
		{
			orak->push_back(new Gyakorlat(kiszh, nev));
		}

		for (i = 0; i < labor; i++)
		{
			orak->push_back(new Labor(beugro, nev));
		}
		
		 
	}
	
 	file.close();
}



void Orarend::algoritmus()
{
	std::list <list< Targy * >> *joorarendek = new std::list<list<Targy*>>;
	std::list <list< Targy * >>::iterator it;
	list < Targy*>::iterator it2;
	feltolt();
	orak->sort(&Compare::osszehasonlit);
	while (permutalas())
	{
		if (checkifvalid(kozosora))
		{
			joorarendek->push_back(*orak);
		}

		
	}
	
	for (it=joorarendek->begin();it!=joorarendek->end();it++)
	{
		for (it2 = it->begin(); it2 != it->end(); it2++)
		{
			(*it2)->kiir();

		}
		cout << endl;

		for (it2 = it->begin(); it2 != it->end(); it2++)
			(*it2)->kiir_adat();
	}
}
