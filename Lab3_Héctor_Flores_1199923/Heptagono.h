#pragma once
#include "Poligonos.h"
 class Heptagono
{
	public:

	Poligonos heptagono;
	double Perimetro(double lado);
	double Area(double lado, double apotema);
	double getLado();
	double getApo();
	void setLado(double newlado);
	void setApo(double newapo);

};

