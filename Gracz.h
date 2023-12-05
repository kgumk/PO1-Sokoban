#pragma once

enum Decyzja { L, G, P, D };

class Gracz
{
	public:
		virtual Decyzja Decyzja(Mapa *mapa) = 0;
};

class GraczZKonsoli : public Gracz
{
public:
	::Decyzja Decyzja(Mapa* mapa);
};
