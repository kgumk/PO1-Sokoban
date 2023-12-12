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
	GeneratorMapPlik gm("sokoban1.map");
	GraczZKonsoli gracz;
	WizualizatorWKonsoli wizualizator;
	Menedzer mgr(&gm, &gracz, &wizualizator);
	mgr.Run();
}

// kodowanie: http://www.sokobano.de/wiki/index.php?title=Level_format
// http://sokoban.dk/levels/levels-the-download-page/