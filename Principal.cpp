/**  
 @brief muestra las funciones 
 name: Natalia Rodriguez
 date: 22/09/16
*/

#include "Tienda.h"
#include "BombaCentrifuga.h"
#include "BombaDiafragma.h"
#include "BombaPiston.h"
#include "TanqueEsferico.h"
#include "TanquePresion.h"

#include <conio.h>
#include <iostream>
#pragma GCC diagnostic ignored "-Wwrite-strings"

using namespace std;

int main(int argc, char * argv[] )
{
   Tienda laTienda;
   int opcion = 0;
   int salida = 3;
   do
   {
      system("CLS");
      cout<<"¡ - B I E N V E N I D O   A   L A   F E R R T E R I A - !"<<endl;
      cout<<"- D I S T R I B U I D O R A   S A N A P A J U -"<<endl;
      cout<<endl<<endl;
      cout<<"INGRESO COMO:"<<endl;
      cout<<"1. Administrador"<<endl;
      cout<<"2. Cliente"<<endl;
      cout<<"3. Salir"<<endl;
      cout<<"Escoge tu opcion:";
      cin>>opcion;
      switch(opcion)
      {
         case 1:
            {
               laTienda.menuAdministrador();
            } break;
         case 2:
            {
               laTienda.menuCliente();
            } break;
      }
   }while (opcion!=salida);
   
   return EXIT_SUCCESS;
}
 
int main_v1(int argc, char * argv[] )
{
    BombaCentrifuga laBombaCentrifuga;
    BombaDiafragma laBombaDiafragma;
    BombaPiston laBombaPiston;
    
    laBombaCentrifuga.setNombre("Bomba Centrifuga");
    laBombaCentrifuga.setFabricante("Fabricante de Bomba Centrifuga");
    laBombaCentrifuga.setPeso(1.5);
    laBombaCentrifuga.setCosto(15000);
    laBombaCentrifuga.setPresionSuccion(500);
    laBombaCentrifuga.setPresionDescarga(400);
    laBombaCentrifuga.setMedidaFlujo(300);
    laBombaCentrifuga.setDiametroImpulsor(200);
    laBombaCentrifuga.setNumeroHojas(6);
    laBombaCentrifuga.setEjeRotacion("Derecha");
    
    laBombaDiafragma.setNombre("Bomba de Diafragma");
    laBombaDiafragma.setFabricante("Fabricante de Bomba de Diafragma");
    laBombaDiafragma.setPeso(2.5);
    laBombaDiafragma.setCosto(25000);
    laBombaDiafragma.setPresionSuccion(400);
    laBombaDiafragma.setPresionDescarga(300);
    laBombaDiafragma.setMedidaFlujo(200);
    laBombaDiafragma.setMaterialDiafragma("Caucho");
    
    laBombaPiston.setNombre("Bomba de Piston");
    laBombaPiston.setFabricante("Fabricante de Bomba de Piston");
    laBombaPiston.setPeso(1.5);
    laBombaPiston.setCosto(15000);
    laBombaPiston.setPresionSuccion(500);
    laBombaPiston.setPresionDescarga(400);
    laBombaPiston.setMedidaFlujo(300);
    laBombaPiston.setLongitudPiston(200);
    laBombaPiston.setDiametro(100);
    laBombaPiston.setNumeroCilindros(4);

    cout<< "Nombre: " << laBombaCentrifuga.getNombre() << endl;
    cout<< "Fabricante: " << laBombaCentrifuga.getFabricante() << endl;
    cout<< "Peso: " << laBombaCentrifuga.getPeso() << endl;
    cout<< "Costo: " << laBombaCentrifuga.getCosto() << endl;
    cout<< "Presion de Succion: " << laBombaCentrifuga.getPresionSuccion() << endl;
    cout<< "Presion de Descarga: " << laBombaCentrifuga.getPresionDescarga() << endl;
    cout<< "Medida de Flujo: " << laBombaCentrifuga.getMedidaFlujo() << endl;
    cout<< "Diametro de Impulsor: " << laBombaCentrifuga.getDiametroImpulsor() << endl;
    cout<< "Numero de Hojas: " << laBombaCentrifuga.getNumeroHojas() << endl;
    cout<< "Eje de Rotacion: " << laBombaCentrifuga.getEjeRotacion() << endl;
    
    cout<< endl;
    
    cout<< "Nombre: " << laBombaDiafragma.getNombre() << endl;
    cout<< "Fabricante: " << laBombaDiafragma.getFabricante() << endl;
    cout<< "Peso: " << laBombaDiafragma.getPeso() << endl;
    cout<< "Costo: " << laBombaDiafragma.getCosto() << endl;
    cout<< "Presion de Succion: " << laBombaDiafragma.getPresionSuccion() << endl;
    cout<< "Presion de Descarga: " << laBombaDiafragma.getPresionDescarga() << endl;
    cout<< "Medida de Flujo: " << laBombaDiafragma.getMedidaFlujo() << endl;
    cout<< "Material del Diafragma: " << laBombaDiafragma.getMaterialDiafragma() << endl;

    cout<< endl;
    
    cout<< "Nombre: " << laBombaPiston.getNombre() << endl;
    cout<< "Fabricante: " << laBombaPiston.getFabricante() << endl;
    cout<< "Peso: " << laBombaPiston.getPeso() << endl;
    cout<< "Costo: " << laBombaPiston.getCosto() << endl;
    cout<< "Presion de Succion: " << laBombaPiston.getPresionSuccion() << endl;
    cout<< "Presion de Descarga: " << laBombaPiston.getPresionDescarga() << endl;
    cout<< "Medida de Flujo: " << laBombaPiston.getMedidaFlujo() << endl;
    cout<< "Longitud del Piston: " << laBombaPiston.getLongitudPiston() << endl;
    cout<< "Diametro: " << laBombaPiston.getDiametro() << endl;
    cout<< "Numero de Cilindros: " << laBombaPiston.getNumeroCilindros() << endl;

    cout<< endl;
    
   TanqueEsferico elTanqueEsferico;
   TanquePresion elTanquePresion;
    
   elTanqueEsferico.setNombre("Tanque Esferico");
   elTanqueEsferico.setFabricante("Fabricante de Tanque Esferico");
   elTanqueEsferico.setPeso(2.5);
   elTanqueEsferico.setCosto(30000);
   elTanqueEsferico.setVolumen(200);
   elTanqueEsferico.setPresion(100);
    elTanqueEsferico.setDiametro(3.5);
    
   elTanquePresion.setNombre("Tanque a Presion");
   elTanquePresion.setFabricante("Fabricante de Tanque a Presion");
   elTanquePresion.setPeso(3.5);
   elTanquePresion.setCosto(40000);
   elTanquePresion.setVolumen(300);
   elTanquePresion.setPresion(200);
    elTanquePresion.setDiametro(5.5);
    elTanquePresion.setAltura(6.5);

    cout<< "Nombre: " << elTanqueEsferico.getNombre() << endl;
    cout<< "Fabricante: " << elTanqueEsferico.getFabricante() << endl;
    cout<< "Peso: " << elTanqueEsferico.getPeso() << endl;
    cout<< "Costo: " << elTanqueEsferico.getCosto() << endl;
   cout<< "Volumen: " << elTanqueEsferico.getVolumen() << endl;
   cout<< "Presion: " << elTanqueEsferico.getPresion() << endl;
    cout<< "Diametro: " << elTanqueEsferico.getDiametro() << endl;

    cout<< endl;
    
    cout<< "Nombre: " << elTanquePresion.getNombre() << endl;
    cout<< "Fabricante: " << elTanquePresion.getFabricante() << endl;
    cout<< "Peso: " << elTanquePresion.getPeso() << endl;
    cout<< "Costo: " << elTanquePresion.getCosto() << endl;
   cout<< "Volumen: " << elTanquePresion.getVolumen() << endl;
   cout<< "Presion: " << elTanquePresion.getPresion() << endl;
    cout<< "Diametro: " << elTanquePresion.getDiametro() << endl;
    cout<< "Altura: " << elTanquePresion.getAltura() << endl;
    
    return EXIT_SUCCESS;
}

