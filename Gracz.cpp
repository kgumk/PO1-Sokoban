#include <iostream>
#include "Gracz.h"
#include "Mapa.h"

#define WLEWO	37
#define WGORE	38
#define WPRAWO	39
#define WDOL	40

::Decyzja GraczZKonsoli::Decyzja(Mapa* mapa)
{
	int znak;
	do {
		znak = std::cin.get();
	} while (znak != WLEWO && znak != WGORE && znak != WPRAWO && znak != WDOL);
	return (::Decyzja)(znak-WLEWO);
}
