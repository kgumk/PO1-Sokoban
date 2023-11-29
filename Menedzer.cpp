#include "Menedzer.h"

void Menedzer::Run()
{
	while (!Koniec())
	{
		wizualizator.Pokaz();
		Decyzja d = gracz.Decyzja();
		Ruch(d);
	}
	wizualizator.Pokaz();
}

bool Menedzer::Koniec()
{

}

void Menedzer::Ruch(Decyzja decyzja)
{

}
