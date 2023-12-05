#pragma once

#include "Mapa.h"

class GeneratorMap
{
public:
	virtual Mapa Generuj() = 0;
};

class GeneratorMapPlik : public GeneratorMap
{
	vector<Mapa> mapy;
	int indeks;
public:
	GeneratorMapPlik(string nazwaPliku);
	Mapa Generuj();

	class BladZakresu {};
};
