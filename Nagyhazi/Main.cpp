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

int main(void) {
	ifstream file;
	Orarend kuki;
	int oraszam;
	int maxora;
	cout << "Hany ora lehet egy nap?" << endl;
	cin >> oraszam;
	getchar();
	cout << "Hany ugyanolyan ora lehet egymas utan?" << endl;
	cin >> maxora;
	kuki.setkozosora(maxora);
	kuki.setmaxora(oraszam);
	kuki.beolvas(file);
	kuki.algoritmus();
	getchar();
	getchar();
	return 0;
}