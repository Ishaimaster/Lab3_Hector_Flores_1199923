#include "Heptagono.h"

double Heptagono::Perimetro(double lado)
{
	double perimetro = lado * 7;
	return perimetro;
}

double Heptagono::Area(double lado, double apo)
{
	double area = (Perimetro(lado) * apo) / 2;
	return area;
}

double Heptagono::getLado()
{
	return heptagono.lado;
}

double Heptagono::getApo()
{
	return heptagono.lado2;
}

void Heptagono::setLado(double newlado)
{
	heptagono.lado = newlado;

}

void Heptagono::setApo(double newapo)
{
	heptagono.lado2 = newapo;

}

