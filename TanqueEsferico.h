/**
 @class TanqueEsferico
 @brief La clase Tanque Esferico almacena la información particular de un Tanque Esferico y hereda información general de la clase Tanque
 */

#include "Tanque.h"

using namespace std;

#ifndef _TANQUEESFERICO_H_
#define _TANQUEESFERICO_H_

class TanqueEsferico : public Tanque //clase punto la cual tiene dos variables que son las coordenadas en el plano 
{
	public:
		TanqueEsferico () {}
		void imprimir();
};

#endif
