#pragma once

#include "Mapa.h"
#include "Gracz.h"

class Menedzer
{
	Mapa mapa;
	GeneratorMap *gm;
	Wizualizator *wizualizator;
	Gracz *gracz;
public:
	Menedzer(GeneratorMap *gm, Gracz *gracz, Wizualizator *wizualizator);
	void Run();
	bool Koniec();
};

