#include "Equipo.h" 
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

void Equipo::setCodigo(int codigo)
{
	this->codigo = codigo;
}

int Equipo::getCodigo()
{
	return this->codigo;
}

void Equipo::setNombre(char nombre[50])
{
    strcpy(this->nombre, nombre);
}

char* Equipo::getNombre()
{
    return this->nombre;
}

void Equipo::setFabricante(char fabricante[50])
{
    strcpy(this->fabricante, fabricante);
}

char* Equipo::getFabricante()
{
    return this->fabricante;
}

void Equipo::setPeso(float peso)
{
    this->peso = peso;
}

float Equipo::getPeso()
{
    return this->peso;
}

void Equipo::setCosto(float costo)
{
    this->costo = costo;
}

float Equipo::getCosto()
{
    return this->costo;
}

void Equipo::setVendido(bool vendido)
{
	this->vendido = vendido;
}

bool Equipo::getVendido()
{
	return this->vendido;
}
