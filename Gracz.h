#pragma once
#include "Mapa.h"

class Gracz
{
	public:
		virtual ::Decyzja Decyzja(Mapa *mapa) = 0;
};

class GraczZKonsoli : public Gracz
{
public:
	::Decyzja Decyzja(Mapa* mapa);
};
