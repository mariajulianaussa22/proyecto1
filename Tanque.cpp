#include "Tanque.h" 
#include <iostream>

using namespace std;

void Tanque::setVolumen(float volumen)
{
	this->volumen = volumen;
}

float Tanque::getVolumen()
{
	return this->volumen;
}

void Tanque::setPresion(float presion)
{
	this->presion = presion;
}

float Tanque::getPresion()
{
	return this->presion;
}

void Tanque::setDiametro(float diametro)
{
	this->diametro = diametro;
}

float Tanque::getDiametro()
{
	return this->diametro;
}
