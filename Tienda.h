/**
 @class Tienda
 @brief La clase Tienda es la representacion de la Tienda y controla la información de los diferentes productos de la tienda
 */
 
#include "BombaCentrifuga.h"
#include "BombaDiafragma.h"
#include "BombaPiston.h"
#include "TanqueEsferico.h"
#include "TanquePresion.h"

#include <iostream>
#include <cstdlib>
#include <cstdio> 
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

#ifndef _TIENDA_H_
#define _TIENDA_H_

class Tienda
{
    private:
       int cantidadBombasCentrifugas;
       int cantidadBombasDiafragma;
       int cantidadBombasPiston;
       int cantidadTanquesEsfericos;
       int cantidadTanquesPresion;
       BombaCentrifuga listaBombasCentrifugas[50];
       BombaDiafragma listaBombasDiafragma[50];
       BombaPiston listaBombasPiston[50];
       TanqueEsferico listaTanquesEsfericos[50];
       TanquePresion listaTanquesPresion[50];
    public:
        Tienda ();
        void menuAdministrador();
        void menuCliente();
        void menuAdministrarBombas();
        void menuAdministrarTanques();
};

#endif
