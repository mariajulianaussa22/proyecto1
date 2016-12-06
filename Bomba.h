/**
 @class Bomba
 @brief La clase Bomba almacena la infomación general de una Bomba además hereda información de la clase Equipo
*/
 
#include "Equipo.h"

using namespace std;

#ifndef _BOMBA_H_
#define _BOMBA_H_

class Bomba : public Equipo
{
    private:
        float presionSuccion;
        float presionDescarga;
        float medidaFlujo;
    public:
        Bomba () { }
        void setPresionSuccion(float presionSuccion);
        float getPresionSuccion();
        void setPresionDescarga(float presionDescarga);
        float getPresionDescarga();
        void setMedidaFlujo(float medidaFlujo);
        float getMedidaFlujo();
};

#endif
