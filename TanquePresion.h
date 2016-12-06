/**
 @class TanquePresion
 @brief La clase Tanque de Presion almacena la información particular de un Tanque de Presion y hereda información general de la clase Tanque
 */

#include "Tanque.h"

using namespace std;

#ifndef _TANQUEPRESION_H_
#define _TANQUEPRESION_H_

class TanquePresion : public Tanque //clase punto la cual tiene dos variables que son las coordenadas en el plano 
{
	private:
		float altura;
	public:
		TanquePresion () {}
		void setAltura (float altura);
		float getAltura ();
		void imprimir();
};

#endif
