#pragma once
#include "Poligonos.h"

 class Decagono
{
	public:

	Poligonos decagono;
	double Perimetro(double lado);
	double Area(double lado, double apotema);
	double getLado();
	double getApo();
	void setLado(double newlado);
	void setApo(double newapo);
};

