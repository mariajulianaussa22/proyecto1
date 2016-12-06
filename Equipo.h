/**
 @class Equipo
 @brief La clase Equipo describe las caracteristicas de un equipo
 */
#ifndef _EQUIPO_H_
#define _EQUIPO_H_

class Equipo
{
    private:
    	int codigo;
        char nombre[50];
        char fabricante[50];
        float peso;
        float costo;
		bool vendido;
    public:
        Equipo () {	}
        void setCodigo(int codigo);
        int getCodigo();
        void setNombre(char nombre[50]);
        char* getNombre();
        void setFabricante(char fabricante[50]);
        char* getFabricante();
        void setPeso(float peso);
        float getPeso();
        void setCosto(float costo);
        float getCosto();
		  void setVendido(bool vendido);
		  bool getVendido();
};

#endif 

