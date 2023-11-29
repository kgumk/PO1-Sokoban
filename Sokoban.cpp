// Sokoban.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "GeneratorMap.h"
#include "Mapa.h"
#include "Gracz.h"
#include "Wizualizator.h"
#include "Menedzer.h"


int main()
{
	GeneratorMap gm;
	Mapa mapa = gm.Generuj();
	Gracz gracz;
	Menedzer mgr(mapa, gracz);
	Wizualizator wizualizator(mapa);
}

int main()
{
	GeneratorMap gm;
	Gracz gracz;
	Wizualizator wizualizator;
	Menedzer mgr(gm, gracz, wizualizator);
	mgr.Run();
}
