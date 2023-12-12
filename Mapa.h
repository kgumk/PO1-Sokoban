#pragma once
#include <string>
#include <vector>

using namespace std;

enum Decyzja { L, G, P, D };

struct Pozycja {
	int x, y;

	Pozycja Przesun(Decyzja decyzja);
};

class Mapa
{
	vector<string> linie;
	Pozycja pozycjaAgenta;

public:
	Mapa() {}
	Mapa(vector<string> linie);

	size_t IleLinii() { return linie.size(); }
	string Linia(int i) { return linie[i]; }

	bool Rozwiazane();
	Pozycja PozycjaAgenta() { return pozycjaAgenta; }
	void Ruch(Decyzja decyzja);
	void Przesun(Pozycja start, Pozycja cel);
	char Stan(const Pozycja &poz) { return linie[poz.x][poz.y]; }

private:
	void Ustaw(const Pozycja& poz, char stan) { linie[poz.x][poz.y] = stan; }
};

