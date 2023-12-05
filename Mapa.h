#pragma once
#include <string>
#include <vector>

using namespace std;

struct Pozycja {
	int x, y;
};

class Mapa
{
	vector<string> linie;
	Pozycja pozycjaAgenta;
public:
	Mapa(vector<string> linie) : linie(linie) {};
	int IleLinii() { return linie.size(); }
	string Linia(int i) { return linie[i]; }
	bool Rozwiazane();
	Pozycja PozycjaAgenta() { return pozycjaAgenta; }
};

