#include "Triangulo.h"
#include "Poligonos.h"

double Triangulo::Perimetro(double perimetro)
{
     perimetro = triangulo.lado * 3;
    return perimetro;
}

double Triangulo::Area(double lado, double altura)
{
    double area = (lado * altura) / 2;
    return area;
}
double Triangulo::getLado()
{
    return triangulo.lado;
}

void Triangulo::setLado(double nuevoLado)
{
    triangulo.lado = nuevoLado;
}

double Triangulo::getAltura()
{
    return triangulo.lado2;
}

void Triangulo::setAltura(double nuevoLado)
{
    triangulo.lado2 = nuevoLado;
}