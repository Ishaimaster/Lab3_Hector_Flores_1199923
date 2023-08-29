#include "Eneagono.h"

double Eneagono::Perimetro(double lado)
{
	double perimetro = lado * 9;
	return perimetro;
}

double Eneagono::Area(double lado, double apo)
{
	double area = (Perimetro(lado) * apo) / 2;
	return area;
}

double Eneagono::getLado()
{
	return eneagono.lado;
}

double Eneagono::getApo()
{
	return eneagono.lado2;
}

void Eneagono::setLado(double newlado)
{
	eneagono.lado = newlado;

}

void Eneagono::setApo(double newapo)
{
	eneagono.lado2 = newapo;

}

