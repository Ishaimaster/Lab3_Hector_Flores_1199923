#pragma once
#include "Poligonos.h"

 class Pentagono
{
	public:

		Poligonos pentagono;
		double PerimetroP(double lado);
		double AreaP(double lado, double apotema);
		double getLado();
		double getApo();
		void setLado(double newlado);
		void setApo(double newapo);
};

