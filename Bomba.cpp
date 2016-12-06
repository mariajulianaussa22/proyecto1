#include "Bomba.h" 
#include <iostream>

using namespace std;

void Bomba::setPresionSuccion(float presionSuccion)
{
    this->presionSuccion = presionSuccion;
}

float Bomba::getPresionSuccion()
{
    return this->presionSuccion;
}

void Bomba::setPresionDescarga(float presionDescarga)
{
    this->presionDescarga = presionDescarga;
}

float Bomba::getPresionDescarga()
{
    return this->presionDescarga;
}

void Bomba::setMedidaFlujo(float medidaFlujo)
{
    this->medidaFlujo = medidaFlujo;
}

float Bomba::getMedidaFlujo()
{
    return this->medidaFlujo;
}
