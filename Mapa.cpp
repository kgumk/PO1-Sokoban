#include "Mapa.h"

bool Mapa::Rozwiazane()
{
	for (int i = 0; i < linie.size(); i++)
		if (find(linie[i].begin(), linie[i].end(), '$') != linie[i].end())
			return false;
	return true;
}
