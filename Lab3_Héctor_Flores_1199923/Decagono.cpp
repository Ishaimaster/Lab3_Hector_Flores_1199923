#include "Decagono.h"

double Decagono::Perimetro(double lado)
{
	double perimetro = lado * 10;
	return perimetro;
}

double Decagono::Area(double lado, double apo)
{
	double area = (Perimetro(lado) * apo) / 2;
	return area;
}

double Decagono::getLado()
{
	return decagono.lado;
}

double Decagono::getApo()
{
	return decagono.lado2;
}

void Decagono::setLado(double newlado)
{
	decagono.lado = newlado;

}

void Decagono::setApo(double newapo)
{
	decagono.lado2 = newapo;

}