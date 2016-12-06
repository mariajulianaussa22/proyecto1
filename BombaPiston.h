/**
 @class BombaPiston
 @brief La clase Bomba de Piston almacena la informaci�n particular de una Bomba de Piston y hereda informaci�n general de la clase Bomba
 */

#include "Bomba.h"

using namespace std;

#ifndef _BOMBAPISTON_H_
#define _BOMBAPISTON_H_

class BombaPiston : public Bomba //clase punto la cual tiene dos variables que son las coordenadas en el plano 
{
	private:
		float longitudPiston;
		float diametro;
		int numeroCilindros;
	public:
		BombaPiston () {}
		void setLongitudPiston(float longitudPiston);
		float getLongitudPiston();
		void setDiametro(float diametro);
		float getDiametro();
		void setNumeroCilindros(int numeroCilindros);
		int getNumeroCilindros();
		void imprimir();
};
 
#endif
