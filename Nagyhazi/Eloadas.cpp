#include "Eloadas.h"



void Eloadas::kiir() {
	cout << name;
}

void Eloadas::kiir_adat() {
	if (jelenlet) cout << "Van jelenlet	";
	else cout << "Nincs jelenlet	";
}
Eloadas::Eloadas(int jelenlet, string name)
{
	this->jelenlet = jelenlet;
	this->name = name + " eloadas	" ;
}


Eloadas::~Eloadas()
{
}
