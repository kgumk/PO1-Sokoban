#include <fstream>
#include "GeneratorMap.h"

GeneratorMapPlik::GeneratorMapPlik(string nazwaPliku)
{
	ifstream plik(nazwaPliku);
	vector<string> linie;
	while (!plik.eof())
	{
		string linia;
		getline(plik, linia);
		if (linia.size() != 0)
			linie.push_back(linia);
		else
			if (linie.size() > 0)
			{
				mapy.push_back(Mapa(linie));
				linie.clear();
			}
	}
}

Mapa GeneratorMapPlik::Generuj() {
	if (indeks >= mapy.size())
		throw BladZakresu();
	return mapy[indeks++];
}
