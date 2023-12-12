#include <conio.h>
#include <iostream>
#include "Gracz.h"
#include "Mapa.h"

#define PRZEDZNAK	224
#define WLEWO	75
#define WLEWO	75
#define WGORE	72
#define WPRAWO	77
#define WDOL	80

::Decyzja GraczZKonsoli::Decyzja(Mapa* mapa)
{
	int znak = 0, znakprzed;
	
	while (_kbhit())
		znak = _getch();

	do {
		znakprzed = znak;
		znak = _getch();// std::cin.get();
	} while (znakprzed != PRZEDZNAK || znak != WLEWO && znak != WGORE && znak != WPRAWO && znak != WDOL);
	
	switch (znak)
	{
		case WLEWO: return L;
		case WPRAWO: return P;
		case WGORE: return G;
		case WDOL: return D;
	}
}
