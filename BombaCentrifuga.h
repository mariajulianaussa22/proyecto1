/**
 @class BombaCentrifuga
 @brief La clase Bomba Centrifuga almacena la información particular de una Bomba Centrífuga y hereda información general de la clase Bomba
 */

#include "Bomba.h"

using namespace std;

#ifndef _BOMBACENTRIFUGA_H_
#define _BOMBACENTRIFUGA_H_

class BombaCentrifuga : public Bomba //clase punto la cual tiene dos variables que son las coordenadas en el plano 
{
	private:
		float diametroImpulsor;
		int numeroHojas;
		char ejeRotacion[50];
	public:
		BombaCentrifuga () {}
		void setDiametroImpulsor (float diametroImpulsor);
		float getDiametroImpulsor ();
		void setNumeroHojas (int numeroHojas);
		int getNumeroHojas ();
		void setEjeRotacion (char ejeRotacion[50]);
		char* getEjeRotacion();
		void imprimir();
};
 
#endif
