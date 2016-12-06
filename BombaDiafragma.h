/**
 @class BombaDiafragma
 @brief La clase Bomba de Diafragma almacena la información particular de una Bomba de Diafragma y hereda información general de la clase Bomba
 */

#include "Bomba.h"

using namespace std;

#ifndef _BOMBADIAFRAGMA_H_
#define _BOMBADIAFRAGMA_H_

class BombaDiafragma : public Bomba //clase punto la cual tiene dos variables que son las coordenadas en el plano 
{
	private:
		char materialDiafragma[50];
	public:
		BombaDiafragma () {}
		void setMaterialDiafragma(char materialDiafragma[50]);
		char* getMaterialDiafragma();
		void imprimir();
};

#endif
