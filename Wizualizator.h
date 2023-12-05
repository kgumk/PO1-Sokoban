#pragma once
#include "Mapa.h"

class Wizualizator
{
public:
	virtual void Pokaz(Mapa *mapa) = 0;
};

class WizualizatorWKonsoli : public Wizualizator
{
public:
	void Pokaz(Mapa* mapa);
};

