#include "Labor.h"



void Labor::kiir()
{
	cout << name;
}

void Labor::kiir_adat()
{
	if (beugro) cout << "Van beugro	";
	else cout << "Nincs beugro	";
}

Labor::Labor(int beugro, string name)
{
	this->beugro = beugro;
	this->name = name+" labor	";
}


Labor::~Labor()
{
}
