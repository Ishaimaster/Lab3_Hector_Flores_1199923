#include "Pentagono.h"


double Pentagono::PerimetroP(double lado)
{
	double perimetro = lado * 5;
	return perimetro;
}

double Pentagono::AreaP(double lado, double apo)
{
	double area = (PerimetroP(lado) * apo) / 2;
	return area;
}

double Pentagono::getLado()
{
	return pentagono.lado;
}

double Pentagono::getApo()
{
	return pentagono.lado2;
}

void Pentagono:: setLado(double newlado)
{
	pentagono.lado = newlado;

}

void Pentagono::setApo(double newapo)
{
	pentagono.lado2 = newapo;

}