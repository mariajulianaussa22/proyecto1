/**
 @class Tanque
 @brief La clase Tanque almacena la información particular de un Tanque y hereda información general de la clase Equipo
 */

#include "Equipo.h"

using namespace std;

#ifndef _TANQUE_H_
#define _TANQUE_H_

class Tanque : public Equipo //clase punto la cual tiene dos variables que son las coordenadas en el plano 
{
    private:
        float volumen;
        float presion;
        float diametro;
    public:
        Tanque () { }
        void setVolumen(float volumen);
        float getVolumen();
        void setPresion(float presion);
        float getPresion();
        void setDiametro(float diametro);
        float getDiametro();
};

#endif

