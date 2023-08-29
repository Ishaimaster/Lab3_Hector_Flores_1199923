#include "Hexagono.h"

double Hexagono::Perimetro(double lado)
{
	double perimetro = lado * 6;
	return perimetro;
}

double Hexagono::Area(double lado, double apo)
{
	double area = (Perimetro(lado) * apo) / 2;
	return area;
}

double Hexagono::getLado()
{
	return hexagono.lado;
}

double Hexagono::getApo()
{
	return hexagono.lado2;
}

void Hexagono::setLado(double newlado)
{
	hexagono.lado = newlado;

}

void Hexagono::setApo(double newapo)
{
	hexagono.lado2 = newapo;

}