#include <stdlib.h>
#include <iostream>
#include "Wizualizator.h"

void WizualizatorWKonsoli::Pokaz(Mapa* mapa)
{
	system("cls");
	for (int i = 0; i < mapa->IleLinii(); i++)
		std::cout << mapa->Linia(i) << std::endl;
}
