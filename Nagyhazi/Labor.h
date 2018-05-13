#pragma once
#include "Targy.h"
class Labor :
	public Targy
{
private: bool beugro;
public:
	void kiir();
	void kiir_adat();
	Labor(int beugro, string name);
	~Labor();
};

