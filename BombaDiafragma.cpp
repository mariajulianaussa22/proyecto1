#include "BombaDiafragma.h" 
#include <iostream>
#include <cstring>

using namespace std;

void BombaDiafragma::setMaterialDiafragma(char materialDiafragma[50])
{
    strcpy(this->materialDiafragma, materialDiafragma);
}

char* BombaDiafragma::getMaterialDiafragma()
{
	return this->materialDiafragma;
}

void BombaDiafragma::imprimir()
{
	cout<<"Codigo: "<<this->getCodigo()<<endl;
	cout<<"Nombre: "<<this->getNombre()<<endl;
	cout<<"Fabricante: "<<this->getFabricante()<<endl;
	cout<<"Peso: "<<this->getPeso()<<endl;
	cout<<"Costo: "<<this->getCosto()<<endl;
	cout<<"Presion de Succion: "<<this->getPresionSuccion()<<endl;
	cout<<"Presion de Descarga: "<<this->getPresionDescarga()<<endl;
	cout<<"Medida de Flujo: "<<this->getMedidaFlujo()<<endl;
	cout<<"Material de Diafragma: "<<this->getMaterialDiafragma()<<endl;
	if (this->getVendido())
	{
		cout<<"Vendido: "<<"Si"<<endl;
	}
	else
	{
		cout<<"Vendido: "<<"No"<<endl;
	}
}
