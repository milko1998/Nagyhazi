#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include "Targy.h"
#include "Orarend.h"
#include "Eloadas.h"
#include "Gyakorlat.h"
#include "Labor.h"

using namespace std;
void beolvas(ifstream &File)
{
	File.open("input.txt");
	string nev;
	int eloadas, jelenlet, gyakorlat, kiszh, labor, beugro;
	do
	{
		File >> nev >> eloadas >> jelenlet >> gyakorlat >> kiszh >> labor >> beugro;
		cout << nev << eloadas << jelenlet << gyakorlat << kiszh << labor << beugro;
	} while (File >> nev >> eloadas >> jelenlet >> gyakorlat >> kiszh >> labor >> beugro);
	
	
	
	File.close();

}
int main(void) {
	ifstream File;
	
	beolvas(File);
	getchar();
	return 0;
}