#include "TanquePresion.h" 
#include <iostream>

using namespace std;

void TanquePresion::setAltura (float altura)
{
    this->altura = altura;
}

float TanquePresion::getAltura ()
{
	return this->altura;
}

void TanquePresion::imprimir()
{
	cout<<"Codigo: "<<this->getCodigo()<<endl;
	cout<<"Nombre: "<<this->getNombre()<<endl;
	cout<<"Fabricante: "<<this->getFabricante()<<endl;
	cout<<"Peso: "<<this->getPeso()<<endl;
	cout<<"Costo: "<<this->getCosto()<<endl;
	cout<<"Volumen: "<<this->getVolumen()<<endl;
	cout<<"Presion: "<<this->getPresion()<<endl;
	cout<<"Diametro: "<<this->getDiametro()<<endl;
	cout<<"Altura: "<<this->getAltura()<<endl;
	if (this->getVendido())
	{
		cout<<"Vendido: "<<"Si"<<endl;
	}
	else
	{
		cout<<"Vendido: "<<"No"<<endl;
	}
}
