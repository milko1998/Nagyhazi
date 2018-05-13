#pragma once
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
class Targy
{
	friend class Labor;
	friend class Eloadas;
	friend class Gyakorlat;
	friend class Lyukasora;
private: 
	string name;
public:
	string getName();
	virtual void kiir();
	virtual void kiir_adat();
	Targy();
	~Targy();
};

