#pragma once
#include "Targy.h"
class Gyakorlat :
	public Targy
{
private: bool kiszh;
public:
	void kiir();
	void kiir_adat();
	Gyakorlat(int kiszh, string name);
	~Gyakorlat();
};

