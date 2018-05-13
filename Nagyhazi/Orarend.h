#pragma once
#include <list>
#include <fstream>
#include <iostream>
#include "Eloadas.h"
#include "Gyakorlat.h"
#include "Labor.h"
#include "Subject.h"
#include "Targy.h"
#include "Compare.h"
#include "Lyukasora.h"
#include <algorithm>

class Orarend
{
private:
	int maxora;
	int kozosora;
	list <Targy*> *orak;
	bool permutalas();
	void feltolt();
	bool checkifvalid(int kozos_orak);
public:
	Orarend();
	~Orarend();
	void setmaxora(int n);
	void setkozosora(int n);
	void kiiras();
	void beolvas(ifstream &File);
	void algoritmus();
};

