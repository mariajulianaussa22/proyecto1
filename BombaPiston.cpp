#include "BombaPiston.h" 
#include <iostream>

using namespace std;

void BombaPiston::setLongitudPiston(float longitudPiston)
{
	this->longitudPiston = longitudPiston;
}

float BombaPiston::getLongitudPiston()
{
	return this->longitudPiston;
}

void BombaPiston::setDiametro(float diametro)
{
	this->diametro = diametro;
}

float BombaPiston::getDiametro()
{
	return this->diametro;
}

void BombaPiston::setNumeroCilindros(int numeroCilindros)
{
	this->numeroCilindros = numeroCilindros;
}

int BombaPiston::getNumeroCilindros()
{
	return this->numeroCilindros;
}

void BombaPiston::imprimir()
{
	cout<<"Codigo: "<<this->getCodigo()<<endl;
	cout<<"Nombre: "<<this->getNombre()<<endl;
	cout<<"Fabricante: "<<this->getFabricante()<<endl;
	cout<<"Peso: "<<this->getPeso()<<endl;
	cout<<"Costo: "<<this->getCosto()<<endl;
	cout<<"Presion de Succion: "<<this->getPresionSuccion()<<endl;
	cout<<"Presion de Descarga: "<<this->getPresionDescarga()<<endl;
	cout<<"Medida de Flujo: "<<this->getMedidaFlujo()<<endl;
	cout<<"Longitud de Piston: "<<this->getLongitudPiston()<<endl;
	cout<<"Diametro: "<<this->getDiametro()<<endl;
	cout<<"Numero de Cilindros: "<<this->getNumeroCilindros()<<endl;
	if (this->getVendido())
	{
		cout<<"Vendido: "<<"Si"<<endl;
	}
	else
	{
		cout<<"Vendido: "<<"No"<<endl;
	}
}
