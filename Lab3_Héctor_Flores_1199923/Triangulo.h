#pragma once
#include "Poligonos.h"
#include<cmath>

 class Triangulo
{
	public:

	Poligonos triangulo;

	double Perimetro(double perimetro);;
	double Area(double lado, double altura);
	double getLado();
	void setLado(double nuevoLado);
	double getAltura();
	void setAltura(double nuevoLado);
	
}
 ;

 
