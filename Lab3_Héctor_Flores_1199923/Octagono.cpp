#include "Octagono.h"

double Octagono::Perimetro(double lado)
{
	double perimetro = lado * 8;
	return perimetro;
}

double Octagono::Area(double lado, double apo)
{
	double area = (Perimetro(lado) * apo) / 2;
	return area;
}

double Octagono::getLado()
{
	return octagono.lado;
}

double Octagono::getApo()
{
	return octagono.lado2;
}

void Octagono::setLado(double newlado)
{
	octagono.lado = newlado;

}

void Octagono::setApo(double newapo)
{
	octagono.lado2 = newapo;

}