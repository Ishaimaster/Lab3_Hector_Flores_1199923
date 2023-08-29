#include "Cuadrilatero.h"


double Cuadrilatero::PerimetroC(double lado) 
{
	double perimetro = (lado * 4);
	return perimetro;
}
double Cuadrilatero:: AreaC(double lado)
{ 
	double area = (lado * lado);
	return area;
}
double Cuadrilatero::getLadoC() 
{
	return Cuadrilatero.lado;
}
void Cuadrilatero::setLadoC(double newlado)
{

	Cuadrilatero.lado =  newlado;

}
