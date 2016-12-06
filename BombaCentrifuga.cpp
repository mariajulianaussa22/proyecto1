#include "BombaCentrifuga.h" 
#include <iostream>
#include <cstring>

using namespace std;

void BombaCentrifuga::setDiametroImpulsor (float diametroImpulsor)
{
    this->diametroImpulsor = diametroImpulsor;
}

float BombaCentrifuga::getDiametroImpulsor ()
{
	return this->diametroImpulsor;
}

void BombaCentrifuga::setNumeroHojas (int numeroHojas)
{
	this->numeroHojas = numeroHojas;
}

int BombaCentrifuga::getNumeroHojas ()
{
	return this->numeroHojas;
}

void BombaCentrifuga::setEjeRotacion (char ejeRotacion[50])
{
	strcpy(this->ejeRotacion, ejeRotacion);
}

char* BombaCentrifuga::getEjeRotacion()
{
	return this->ejeRotacion;
}

void BombaCentrifuga::imprimir()
{
	cout<<"Codigo: "<<this->getCodigo()<<endl;
	cout<<"Nombre: "<<this->getNombre()<<endl;
	cout<<"Fabricante: "<<this->getFabricante()<<endl;
	cout<<"Peso: "<<this->getPeso()<<endl;
	cout<<"Costo: "<<this->getCosto()<<endl;
	cout<<"Presion de Succion: "<<this->getPresionSuccion()<<endl;
	cout<<"Presion de Descarga: "<<this->getPresionDescarga()<<endl;
	cout<<"Medida de Flujo: "<<this->getMedidaFlujo()<<endl;
	cout<<"Diametro del Impulsor: "<<this->getDiametroImpulsor()<<endl;
	cout<<"Numero de Hojas: "<<this->getNumeroHojas()<<endl;
	cout<<"Eje de Rotacion: "<<this->getEjeRotacion()<<endl;
	if (this->getVendido())
	{
		cout<<"Vendido: "<<"Si"<<endl;
	}
	else
	{
		cout<<"Vendido: "<<"No"<<endl;
	}
}
