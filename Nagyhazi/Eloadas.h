#pragma once
#include "Targy.h"
class Eloadas :
	
	public Targy
	
{
private: bool jelenlet;
public:
	void kiir();
	void kiir_adat();
	Eloadas(int jelenlet, string name);
	~Eloadas();
	
};

