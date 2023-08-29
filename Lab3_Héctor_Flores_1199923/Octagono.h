#pragma once
#include "Poligonos.h"

 class Octagono
{
	public:

		Poligonos octagono;
		double Perimetro(double lado);
		double Area(double lado, double apotema);
		double getLado();
		double getApo();
		void setLado(double newlado);
		void setApo(double newapo);



};

