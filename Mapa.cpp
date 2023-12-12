#include "Mapa.h"

Pozycja Pozycja::Przesun(Decyzja decyzja)
{
	Pozycja wynik = *this;
	switch (decyzja)
	{
		case L: wynik.y--; break;
		case G: wynik.x--; break;
		case P: wynik.y++; break;
		case D: wynik.x++; break;
	}
	return wynik;
}

Mapa::Mapa(vector<string> linie) : linie(linie)
{
	for (size_t i = 0; i < linie.size(); i++)
		for (size_t j = 0; j < linie[i].size(); j++)
			if (linie[i][j] == '@' || linie[i][j] == '+')
			{
				pozycjaAgenta.x = i;
				pozycjaAgenta.y = j;
				return;
			}
}

bool Mapa::Rozwiazane()
{
	for (int i = 0; i < linie.size(); i++)
		if (find(linie[i].begin(), linie[i].end(), '$') != linie[i].end())
			return false;
	return true;
}

void Mapa::Ruch(Decyzja decyzja)
{
	Pozycja poz = pozycjaAgenta.Przesun(decyzja);
	char stanWPoz = Stan(poz);
	char stanAgent = Stan(pozycjaAgenta);
	if (stanWPoz == ' ' || stanWPoz == '.')
		Przesun(pozycjaAgenta, poz);
	else if (stanWPoz == '$' || stanWPoz == '*')
	{
		Pozycja poz2 = poz.Przesun(decyzja);
		char stanWPoz2 = Stan(poz2);
		if (stanWPoz2 == ' ' || stanWPoz2 == '.')
		{
			Przesun(poz, poz2);
			Przesun(pozycjaAgenta, poz);
		}
	}
}

void Mapa::Przesun(Pozycja start, Pozycja cel)
{
	char stanWStart = Stan(start);
	char stanWCel = Stan(cel);
	bool toAgent = stanWStart == '@' || stanWStart == '+';
	if (toAgent)
	{
		Ustaw(cel, stanWCel == '.' ? '+' : '@');
		Ustaw(start, stanWStart == '@' ? ' ' : '.');
		pozycjaAgenta = cel;
	}
	else
	{
		Ustaw(cel, stanWCel == '.' ? '*' : '$');
		Ustaw(start, stanWStart == '$' ? ' ' : '.');
	}
}
