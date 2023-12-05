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
	GeneratorMapPlik gm("sakoban1.map");
	Gracz gracz;
	Wizualizator wizualizator;
	Menedzer mgr(&gm, gracz, wizualizator);
	mgr.Run();
}
