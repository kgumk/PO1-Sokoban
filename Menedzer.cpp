#include "Mapa.h"
#include "GeneratorMap.h"
#include "Wizualizator.h"
#include "Menedzer.h"

Menedzer::Menedzer(GeneratorMap *gm, Gracz *gracz, Wizualizator *wizualizator)
	: gm(gm), gracz(gracz), wizualizator(wizualizator)
{
}

void Menedzer::Run()
{
	mapa = gm->Generuj();
	while (!Koniec())
	{
		wizualizator->Pokaz(&mapa);
		Decyzja d = gracz->Decyzja(&mapa);
		mapa.Ruch(d);
	}
	wizualizator->Pokaz(&mapa);
}

bool Menedzer::Koniec()
{
	return mapa.Rozwiazane();
}
