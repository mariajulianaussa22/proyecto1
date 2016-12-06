#include "Tienda.h" 

using namespace std;

Tienda::Tienda()
{
	int cantidadBombasCentrifugas = 0;
	int cantidadBombasDiafragma = 0;
	int cantidadBombasPiston = 0;
	int cantidadTanquesEsfericos = 0;
	int cantidadTanquesPresion = 0;
}

void Tienda::menuAdministrador()
{
	int opcion = 0;
	int salida = 3;
	do
	{
		system("CLS");
		cout<<"¡ - B I E N V E N I D O   A   L A   F E R R T E R I A - !"<<endl;
		cout<<"- D I S T R I B U I D O R A   S A N A P A J U -"<<endl;
		cout<<endl<<endl;
		cout<<"Que desea hacer?"<<endl;
		cout<<"1. Administrar Bombas"<<endl;
		cout<<"2. Administrar Tanques"<<endl;
		cout<<"3. Volver al Inicio"<<endl;
		cout<<"Escoge tu opcion:";
		cin>>opcion;
		switch(opcion)
		{
			case 1: // Administracion de la Bombas
			{
				menuAdministrarBombas();
			} break;
			case 2: // Administracion de los Tanques
			{
				menuAdministrarTanques();
			} break;
		}
	} while (opcion!=salida);
}

void Tienda::menuCliente()
{
	int opcion = 0;
	int salida = 3;
	do
	{
		system("CLS");
		cout<<"¡ - B I E N V E N I D O   A   L A   F E R R T E R I A - !"<<endl;
		cout<<"- D I S T R I B U I D O R A   S A N A P A J U -"<<endl;
		cout<<endl<<endl;
		cout<<"Que desea hacer?"<<endl;
		cout<<"1. Listar Productos"<<endl;
		cout<<"2. Comprar Productos"<<endl;
		cout<<"3. Volver al Inicio"<<endl;
		cout<<"Escoge tu opcion:";
		cin>>opcion;
		switch(opcion)
		{
			case 1: // Muestra en pantalla todos los productos de la tienda
			{
				cout<<"BOMBAS CENTRIFUGAS"<<endl;
				for (int i=0; i<cantidadBombasCentrifugas; i++)
				{
					listaBombasCentrifugas[i].imprimir();
					cout<<endl;
				}
				cout<<endl;
				cout<<"BOMBAS DE DIAFRAGMA"<<endl;
				for (int i=0; i<cantidadBombasDiafragma; i++)
				{
					listaBombasDiafragma[i].imprimir();
					cout<<endl;
				}
				cout<<endl;
				cout<<"BOMBAS DE PISTON"<<endl;
				for (int i=0; i<cantidadBombasPiston; i++)
				{
					listaBombasPiston[i].imprimir();
					cout<<endl;
				}
				cout<<endl;
				cout<<"TANQUES ESFERICOS"<<endl;
				for (int i=0; i<cantidadTanquesEsfericos; i++)
				{
					listaTanquesEsfericos[i].imprimir();
					cout<<endl;
				}
				cout<<endl;
				cout<<"TANQUES DE PRESION"<<endl;
				for (int i=0; i<cantidadTanquesPresion; i++)
				{
					listaTanquesPresion[i].imprimir();
					cout<<endl;
				}
				getch();
			} break;
			case 2: // Realiza la compra de un producto de la tienda
			{
				int opcionCompra = 0;
				int codigo = 0;
				int respuesta = 0;
				bool encontrado = false;
				cout<<"Que desea comprar?"<<endl;
				cout<<"1. Bombas Centrifugas"<<endl;
				cout<<"2. Bombas de Diafragma"<<endl;
				cout<<"3. Bombas de Piston"<<endl;
				cout<<"4. Tanques Esfericos"<<endl;
				cout<<"5. Tanques de Presion"<<endl;
				cout<<"Escoge tu opcion:";
				cin>>opcionCompra;
				switch(opcionCompra)
				{
					case 1: // Compra de una Bomba Centrifuga
					{
						cout<<"Codigo de la Bomba:";
						cin>>codigo;
						// Busqueda del codigo de la Bomba Centrifuga
						for (int i=0; i<cantidadBombasCentrifugas; i++)
						{
							if(listaBombasCentrifugas[i].getCodigo() == codigo)
							{
								listaBombasCentrifugas[i].imprimir();
								cout<<"Desea Comprarla?"<<endl;
								cout<<"1. Si"<<endl;
								cout<<"2. No"<<endl;
								cout<<"Escoge tu opcion:";
								cin>>respuesta;
								if (respuesta == 1)
								{
									listaBombasCentrifugas[i].setVendido(true);
									cout<<"Bomba vendida...";
									getch();
								}
								encontrado = true;
							}
						}
						if (!encontrado)
						{
							cout<<"Bomba no encontrada..."<<endl;
							getch();
						}
					} break;
					case 2: // Compra de una Bomba de Diafragma
					{
						cout<<"Codigo de la Bomba:";
						cin>>codigo;
						// Busqueda del codigo de la Bomba de Diafragma
						for (int i=0; i<cantidadBombasDiafragma; i++)
						{
							if(listaBombasDiafragma[i].getCodigo() == codigo)
							{
								listaBombasDiafragma[i].imprimir();
								cout<<"Desea Comprarla?"<<endl;
								cout<<"1. Si"<<endl;
								cout<<"2. No"<<endl;
								cout<<"Escoge tu opcion:";
								cin>>respuesta;
								if (respuesta == 1)
								{
									listaBombasDiafragma[i].setVendido(true);
									cout<<"Bomba vendida...";
									getch();
								}
								encontrado = true;
							}
						}
						if (!encontrado)
						{
							cout<<"Bomba no encontrada..."<<endl;
							getch();
						}
					} break;
					case 3: // Compra de una Bomba de Piston
					{
						cout<<"Codigo de la Bomba:";
						cin>>codigo;
						// Busqueda del codigo de la bomba de piston
						for (int i=0; i<cantidadBombasPiston; i++)
						{
							if(listaBombasPiston[i].getCodigo() == codigo)
							{
								listaBombasPiston[i].imprimir();
								cout<<"Desea Comprarla?"<<endl;
								cout<<"1. Si"<<endl;
								cout<<"2. No"<<endl;
								cout<<"Escoge tu opcion:";
								cin>>respuesta;
								if (respuesta == 1)
								{
									listaBombasCentrifugas[i].setVendido(true);
									cout<<"Bomba vendida...";
									getch();
								}
								encontrado = true;
							}
						}
						if (!encontrado)
						{
							cout<<"Bomba no encontrada..."<<endl;
							getch();
						}
					} break;
					case 4: // Compra de un Tanque Esferico
					{
						cout<<"Codigo del Tanque:";
						cin>>codigo;
						// Busqueda del codigo del Tanque Esferico
						for (int i=0; i<cantidadTanquesEsfericos; i++)
						{
							if(listaTanquesEsfericos[i].getCodigo() == codigo)
							{
								listaTanquesEsfericos[i].imprimir();
								cout<<"Desea Comprarlo?"<<endl;
								cout<<"1. Si"<<endl;
								cout<<"2. No"<<endl;
								cout<<"Escoge tu opcion:";
								cin>>respuesta;
								if (respuesta == 1)
								{
									listaBombasCentrifugas[i].setVendido(true);
									cout<<"Tanque vendido...";
									getch();
								}
								encontrado = true;
							}
						}
						if (!encontrado)
						{
							cout<<"Tanque no encontrado..."<<endl;
							getch();
						}
					} break;
					case 5: // Compra de un Tanque de Presion
					{
						cout<<"Codigo del Tanque:";
						cin>>codigo;
						// Busqueda del codigo del Tanque de Presion
						for (int i=0; i<cantidadTanquesPresion; i++)
						{
							if(listaTanquesPresion[i].getCodigo() == codigo)
							{
								listaTanquesPresion[i].imprimir();
								cout<<"Desea Comprarlo?"<<endl;
								cout<<"1. Si"<<endl;
								cout<<"2. No"<<endl;
								cout<<"Escoge tu opcion:";
								cin>>respuesta;
								if (respuesta == 1)
								{
									listaBombasCentrifugas[i].setVendido(true);
									cout<<"Tanque vendido...";
									getch();
								}
								encontrado = true;
							}
						}
						if (!encontrado)
						{
							cout<<"Tanque no encontrado..."<<endl;
							getch();
						}
					} break;
				}
				getch();
			} break;
		}
	} while (opcion!=salida);
}

void Tienda::menuAdministrarBombas()
{
	// Variables de Control
	int opcion = 0;
	int salida = 5;
	int opcionBomba = 0;
	// Datos generales de las bombas
	int codigo = 0;
	char nombre[50];
	char fabricante[50];
	float peso;
	float costo;
	float presionSuccion;
	float presionDescarga;
	float medidaFlujo;
	float diametroImpulsor;
	int numeroHojas;
	char ejeRotacion[50];
	char materialDiafragma[50];
	float longitudPiston;
	float diametro;
	int numeroCilindros;
	do
	{
		system("CLS");
		cout<<"¡ - B I E N V E N I D O   A   L A   F E R R T E R I A - !"<<endl;
		cout<<"- D I S T R I B U I D O R A   S A N A P A J U -"<<endl;
		cout<<endl<<endl;
		cout<<"Que desea hacer?"<<endl;
		cout<<"1. Agregar Bomba"<<endl;
		cout<<"2. Modificar Bomba"<<endl;
		cout<<"3. Eliminar Bomba"<<endl;
		cout<<"4. Listar Bombas"<<endl;
		cout<<"5. Volver a Administrador"<<endl;
		cout<<"Escoge tu opcion:";
		cin>>opcion;
		switch(opcion)
		{
			case 1: // Se agrega una bomba siempre al final de la lista
			{
				cout<<"Que tipo de Bomba es?"<<endl;
				cout<<"1. Bomba Centrifuga"<<endl;
				cout<<"2. Bomba de Diafragma"<<endl;
				cout<<"3. Bomba de Piston"<<endl;
				cout<<"Escoge tu opcion:"<<endl;
				cin>>opcionBomba;
				cout<<"Nombre de Bomba:";
				cin>>nombre;
				cout<<"Fabricante:";
				cin>>fabricante;
				cout<<"Peso Bomba:";
				cin>>peso;
				cout<<"Costo Bomba:";
				cin>>costo;
				cout<<"Presion de Succion:";
				cin>>presionSuccion;
				cout<<"Presion de Descarga:";
				cin>>presionDescarga;
				cout<<"Medida de Flujo:";
				cin>>medidaFlujo;
				switch(opcionBomba)
				{
					case 1: // Si la bomba es centrifuga
					{
						cout<<"Diametro del Impulsor:";
						cin>>diametroImpulsor;
						cout<<"Numero de Hojas:";
						cin>>numeroHojas;
						cout<<"Eje de Rotacion:";
						cin>>ejeRotacion;
						listaBombasCentrifugas[cantidadBombasCentrifugas].setCodigo(cantidadBombasCentrifugas);
						listaBombasCentrifugas[cantidadBombasCentrifugas].setNombre(nombre);
						listaBombasCentrifugas[cantidadBombasCentrifugas].setFabricante(fabricante);
						listaBombasCentrifugas[cantidadBombasCentrifugas].setPeso(peso);
						listaBombasCentrifugas[cantidadBombasCentrifugas].setCosto(costo);
						listaBombasCentrifugas[cantidadBombasCentrifugas].setPresionSuccion(presionSuccion);
						listaBombasCentrifugas[cantidadBombasCentrifugas].setPresionDescarga(presionDescarga);
						listaBombasCentrifugas[cantidadBombasCentrifugas].setMedidaFlujo(medidaFlujo);
						listaBombasCentrifugas[cantidadBombasCentrifugas].setDiametroImpulsor(diametroImpulsor);
						listaBombasCentrifugas[cantidadBombasCentrifugas].setNumeroHojas(numeroHojas);
						listaBombasCentrifugas[cantidadBombasCentrifugas].setEjeRotacion(ejeRotacion);
						listaBombasCentrifugas[cantidadBombasCentrifugas].setVendido(false);
						cantidadBombasCentrifugas++;
						cout<<"Bomba Centrifuga agregada correctamente..."<<endl;
						getch();
					} break;
					case 2: // Si la bomba es de diafragma
					{
						cout<<"Material del Diafragma:";
						cin>>materialDiafragma;
						listaBombasDiafragma[cantidadBombasDiafragma].setCodigo(cantidadBombasDiafragma);
						listaBombasDiafragma[cantidadBombasDiafragma].setNombre(nombre);
						listaBombasDiafragma[cantidadBombasDiafragma].setFabricante(fabricante);
						listaBombasDiafragma[cantidadBombasDiafragma].setPeso(peso);
						listaBombasDiafragma[cantidadBombasDiafragma].setCosto(costo);
						listaBombasDiafragma[cantidadBombasDiafragma].setPresionSuccion(presionSuccion);
						listaBombasDiafragma[cantidadBombasDiafragma].setPresionDescarga(presionDescarga);
						listaBombasDiafragma[cantidadBombasDiafragma].setMedidaFlujo(medidaFlujo);
						listaBombasDiafragma[cantidadBombasDiafragma].setMaterialDiafragma(materialDiafragma);
						listaBombasDiafragma[cantidadBombasDiafragma].setVendido(false);
						cantidadBombasDiafragma++;
						cout<<"Bomba de Diafragma agregada correctamente..."<<endl;
						getch();
					} break;
					case 3: // Si la bomba es de piston
					{
						cout<<"Longitud del Piston:";
						cin>>longitudPiston;
						cout<<"Diametro:";
						cin>>diametro;
						cout<<"Numero de Cilindros:";
						cin>>numeroCilindros;
						listaBombasPiston[cantidadBombasPiston].setCodigo(cantidadBombasPiston);
						listaBombasPiston[cantidadBombasPiston].setNombre(nombre);
						listaBombasPiston[cantidadBombasPiston].setFabricante(fabricante);
						listaBombasPiston[cantidadBombasPiston].setPeso(peso);
						listaBombasPiston[cantidadBombasPiston].setCosto(costo);
						listaBombasPiston[cantidadBombasPiston].setPresionSuccion(presionSuccion);
						listaBombasPiston[cantidadBombasPiston].setPresionDescarga(presionDescarga);
						listaBombasPiston[cantidadBombasPiston].setMedidaFlujo(medidaFlujo);
						listaBombasPiston[cantidadBombasPiston].setLongitudPiston(longitudPiston);
						listaBombasPiston[cantidadBombasPiston].setDiametro(diametro);
						listaBombasPiston[cantidadBombasPiston].setNumeroCilindros(numeroCilindros);
						listaBombasPiston[cantidadBombasPiston].setVendido(false);
						cantidadBombasPiston++;
						cout<<"Bomba de Piston agregada correctamente..."<<endl;
						getch();
					} break;
				}
			} break;
			case 2: // Modificar una bomba
			{
				cout<<"Que tipo de Bomba es?"<<endl;
				cout<<"1. Bomba Centrifuga"<<endl;
				cout<<"2. Bomba de Diafragma"<<endl;
				cout<<"3. Bomba de Piston"<<endl;
				cout<<"Escoge tu opcion:"<<endl;
				cin>>opcionBomba;
				cout<<"Codigo de la Bomba:";
				cin>>codigo;				
				switch(opcionBomba)
				{
					case 1: // Si es una bomba centrifuga
					{
						bool modificada = false; // Control si se encuentra o no la bomba
						for(int i=0; i<cantidadBombasCentrifugas; i++)
						{
							if (listaBombasCentrifugas[i].getCodigo() == codigo)
							{
								cout<<"Nombre de la Bomba:";
								cin>>nombre;
								cout<<"Fabricante:";
								cin>>fabricante;
								cout<<"Peso Bomba:";
								cin>>peso;
								cout<<"Costo Bomba:";
								cin>>costo;
								cout<<"Presion de Succion:";
								cin>>presionSuccion;
								cout<<"Presion de Descarga:";
								cin>>presionDescarga;
								cout<<"Medida de Flujo:";
								cin>>medidaFlujo;
								cout<<"Diametro del Impulsor:";
								cin>>diametroImpulsor;
								cout<<"Numero de Hojas:";
								cin>>numeroHojas;
								cout<<"Eje de Rotacion:";
								cin>>ejeRotacion;
								listaBombasCentrifugas[i].setNombre(nombre);
								listaBombasCentrifugas[i].setFabricante(fabricante);
								listaBombasCentrifugas[i].setPeso(peso);
								listaBombasCentrifugas[i].setCosto(costo);
								listaBombasCentrifugas[i].setPresionSuccion(presionSuccion);
								listaBombasCentrifugas[i].setPresionDescarga(presionDescarga);
								listaBombasCentrifugas[i].setMedidaFlujo(medidaFlujo);
								listaBombasCentrifugas[i].setDiametroImpulsor(diametroImpulsor);
								listaBombasCentrifugas[i].setNumeroHojas(numeroHojas);
								listaBombasCentrifugas[i].setEjeRotacion(ejeRotacion);
								modificada = true;
								cout<<"Bomba Centrifuga modificada correctamente..."<<endl;
								getch();
							}
						}
						if(!modificada) // Si la bomba no fue encontrada
						{
							cout<<"Bomba Centrifuga no encontrada..."<<endl;
							getch();
						}
					} break;
					case 2: // Si es una bomba de diafragma
					{
						bool modificada = false;
						for(int i=0; i<cantidadBombasDiafragma; i++)
						{
							if (listaBombasDiafragma[i].getCodigo() == codigo)
							{
								cout<<"Nombre de la Bomba:";
								cin>>nombre;
								cout<<"Fabricante:";
								cin>>fabricante;
								cout<<"Peso Bomba:";
								cin>>peso;
								cout<<"Costo Bomba:";
								cin>>costo;
								cout<<"Presion de Succion:";
								cin>>presionSuccion;
								cout<<"Presion de Descarga:";
								cin>>presionDescarga;
								cout<<"Medida de Flujo:";
								cin>>medidaFlujo;
								cout<<"Material del Diafragma:";
								cin>>materialDiafragma;
								listaBombasDiafragma[i].setNombre(nombre);
								listaBombasDiafragma[i].setFabricante(fabricante);
								listaBombasDiafragma[i].setPeso(peso);
								listaBombasDiafragma[i].setCosto(costo);
								listaBombasDiafragma[i].setPresionDescarga(presionDescarga);
								listaBombasDiafragma[i].setPresionSuccion(presionSuccion);
								listaBombasDiafragma[i].setMedidaFlujo(medidaFlujo);
								listaBombasDiafragma[i].setMaterialDiafragma(materialDiafragma);
								modificada = true;
								cout<<"Bomba de Diafragma modificada correctamente..."<<endl;
								getch();
							}
						}
						if(!modificada)
						{
							cout<<"Bomba de Diafragma no encontrada..."<<endl;
							getch();
						}
					} break;
					case 3: // Si es una bomba de piston
					{
						bool modificada = false;
						for(int i=0; i<cantidadBombasPiston; i++)
						{
							if (listaBombasPiston[i].getCodigo() == codigo)
							{
								cout<<"Nombre de la Bomba:";
								cin>>nombre;
								cout<<"Fabricante:";
								cin>>fabricante;
								cout<<"Peso Bomba:";
								cin>>peso;
								cout<<"Costo Bomba:";
								cin>>costo;
								cout<<"Presion de Succion:";
								cin>>presionSuccion;
								cout<<"Presion de Descarga:";
								cin>>presionDescarga;
								cout<<"Medida de Flujo:";
								cin>>medidaFlujo;
								cout<<"Longitud del Piston:";
								cin>>longitudPiston;
								cout<<"Diametro:";
								cin>>diametro;
								cout<<"Numero de Cilindros:";
								cin>>numeroCilindros;
								listaBombasPiston[i].setNombre(nombre);
								listaBombasPiston[i].setFabricante(fabricante);
								listaBombasPiston[i].setPeso(peso);
								listaBombasPiston[i].setCosto(costo);
								listaBombasPiston[i].setPresionSuccion(presionSuccion);
								listaBombasPiston[i].setPresionDescarga(presionDescarga);
								listaBombasPiston[i].setMedidaFlujo(medidaFlujo);
								listaBombasPiston[i].setLongitudPiston(longitudPiston);
								listaBombasPiston[i].setDiametro(diametro);
								listaBombasPiston[i].setNumeroCilindros(numeroCilindros);
								modificada = true;
								cout<<"Bomba de Piston modificada correctamente..."<<endl;
								getch();
							}
						}
						if(!modificada)
						{
							cout<<"Bomba de Piston no encontrada..."<<endl;
							getch();
						}
					} break;
				}
			} break;
			case 3: // Si se desea eliminar una bomba
			{
				cout<<"Que tipo de Bomba es?"<<endl;
				cout<<"1. Bomba Centrifuga"<<endl;
				cout<<"2. Bomba de Diafragma"<<endl;
				cout<<"3. Bomba de Piston"<<endl;
				cout<<"Escoge tu opcion:"<<endl;
				cin>>opcionBomba;
				cout<<"Codigo de la Bomba:";
				cin>>codigo;				
				switch(opcionBomba)
				{
					case 1: // Si es una bomba centrifuga
					{
						bool eliminada = false; // Control para conocer si se elimino o no la bomba
						for(int i=0; i<cantidadBombasCentrifugas; i++)
						{
							if (listaBombasCentrifugas[i].getCodigo() == codigo)
							{
								// Ciclo para desplazar los elementos una posicion anterior en el vector de bombas
								for (int j=i; j<cantidadBombasCentrifugas-1; j++)
								{
									// Se disminuye en 1 el codigo de la bomba para evitar duplicaciones
									listaBombasCentrifugas[j].setCodigo(listaBombasCentrifugas[j+1].getCodigo()-1);
									listaBombasCentrifugas[j].setNombre(listaBombasCentrifugas[j+1].getNombre());
									listaBombasCentrifugas[j].setFabricante(listaBombasCentrifugas[j+1].getFabricante());
									listaBombasCentrifugas[j].setPeso(listaBombasCentrifugas[j+1].getPeso());
									listaBombasCentrifugas[j].setCosto(listaBombasCentrifugas[j+1].getCosto());
									listaBombasCentrifugas[j].setPresionSuccion(listaBombasCentrifugas[j+1].getPresionSuccion());
									listaBombasCentrifugas[j].setPresionDescarga(listaBombasCentrifugas[j+1].getPresionDescarga());
									listaBombasCentrifugas[j].setMedidaFlujo(listaBombasCentrifugas[j+1].getMedidaFlujo());
									listaBombasCentrifugas[j].setDiametroImpulsor(listaBombasCentrifugas[j+1].getDiametroImpulsor());
									listaBombasCentrifugas[j].setNumeroHojas(listaBombasCentrifugas[j+1].getNumeroHojas());
									listaBombasCentrifugas[j].setEjeRotacion(listaBombasCentrifugas[j+1].getEjeRotacion());
									listaBombasCentrifugas[j].setVendido(listaBombasCentrifugas[j+1].getVendido());
								}
								eliminada = true;
								cout<<"Bomba Centrifuga eliminada correctamente..."<<endl;
								getch();
							}
						}
						if(!eliminada)
						{
							cout<<"Bomba Centrifuga no encontrada..."<<endl;
							getch();
						}
					} break;
					case 2: // Si es una bomba de diafragma
					{
						bool eliminada = false;
						for(int i=0; i<cantidadBombasDiafragma; i++)
						{
							if (listaBombasDiafragma[i].getCodigo() == codigo)
							{
								for (int j=i; j<cantidadBombasDiafragma-1; j++)
								{
									listaBombasDiafragma[j].setCodigo(listaBombasDiafragma[j+1].getCodigo()-1);
									listaBombasDiafragma[j].setNombre(listaBombasDiafragma[j+1].getNombre());
									listaBombasDiafragma[j].setFabricante(listaBombasDiafragma[j+1].getFabricante());
									listaBombasDiafragma[j].setPeso(listaBombasDiafragma[j+1].getPeso());
									listaBombasDiafragma[j].setCosto(listaBombasDiafragma[j+1].getCosto());
									listaBombasDiafragma[j].setPresionDescarga(listaBombasDiafragma[j+1].getPresionDescarga());
									listaBombasDiafragma[j].setPresionSuccion(listaBombasDiafragma[j+1].getPresionSuccion());
									listaBombasDiafragma[j].setMedidaFlujo(listaBombasDiafragma[j+1].getMedidaFlujo());
									listaBombasDiafragma[j].setMaterialDiafragma(listaBombasDiafragma[j+1].getMaterialDiafragma());
									listaBombasDiafragma[j].setVendido(listaBombasDiafragma[j+1].getVendido());
								}
								eliminada = true;
								cout<<"Bomba de Diafragma eliminada correctamente..."<<endl;
								getch();
							}
						}
						if(!eliminada)
						{
							cout<<"Bomba de Diafragma no encontrada..."<<endl;
							getch();
						}
					} break;
					case 3: // Si es una bomba de piston
					{
						bool eliminada = false;
						for(int i=0; i<cantidadBombasPiston; i++)
						{
							if (listaBombasPiston[i].getCodigo() == codigo)
							{
								for (int j=i; j<cantidadBombasPiston-1; j++)
								{
									listaBombasPiston[j].setCodigo(listaBombasPiston[j+1].getCodigo()-1);
									listaBombasPiston[j].setNombre(listaBombasPiston[j+1].getNombre());
									listaBombasPiston[j].setFabricante(listaBombasPiston[j+1].getFabricante());
									listaBombasPiston[j].setPeso(listaBombasPiston[j+1].getPeso());
									listaBombasPiston[j].setCosto(listaBombasPiston[j+1].getCosto());
									listaBombasPiston[j].setPresionSuccion(listaBombasPiston[j+1].getPresionSuccion());
									listaBombasPiston[j].setPresionDescarga(listaBombasPiston[j+1].getPresionDescarga());
									listaBombasPiston[j].setMedidaFlujo(listaBombasPiston[j+1].getMedidaFlujo());
									listaBombasPiston[j].setLongitudPiston(listaBombasPiston[j+1].getLongitudPiston());
									listaBombasPiston[j].setDiametro(listaBombasPiston[j+1].getDiametro());
									listaBombasPiston[j].setNumeroCilindros(listaBombasPiston[j+1].getNumeroCilindros());
									listaBombasPiston[j].setVendido(listaBombasPiston[j+1].getVendido());
								}
								eliminada = true;
								cout<<"Bomba de Piston eliminada correctamente..."<<endl;
								getch();
							}
						}
						if(!eliminada)
						{
							cout<<"Bomba de Piston no encontrada..."<<endl;
							getch();
						}
					} break;
				}
			} break;
			case 4: // Muestra las bombas existentes en la tienda
			{
				cout<<"BOMBAS CENTRIFUGAS"<<endl;
				for (int i=0; i<cantidadBombasCentrifugas; i++)
				{
					listaBombasCentrifugas[i].imprimir();
					cout<<endl;
				}
				cout<<"BOMBAS DE DIAFRAGMA"<<endl;
				for (int i=0; i<cantidadBombasDiafragma; i++)
				{
					listaBombasDiafragma[i].imprimir();
					cout<<endl;
				}
				cout<<"BOMBAS DE PISTON"<<endl;
				for (int i=0; i<cantidadBombasPiston; i++)
				{
					listaBombasPiston[i].imprimir();
					cout<<endl;
				}
				getch();
			} break;
		}
	}while (opcion!=salida);
}

void Tienda::menuAdministrarTanques()
{
	int opcion = 0;
	int salida = 5;
	int opcionTanque = 0;
	int codigo = 0;
	char nombre[50];
	char fabricante[50];
	float peso;
	float costo;
	float volumen;
	float presion;
	float diametro;
	float altura;
	do
	{
		system("CLS");
		cout<<"¡ - B I E N V E N I D O   A   L A   F E R R T E R I A - !"<<endl;
		cout<<"- D I S T R I B U I D O R A   S A N A P A J U -"<<endl;
		cout<<endl<<endl;
		cout<<"Que desea hacer?"<<endl;
		cout<<"1. Agregar Tanque"<<endl;
		cout<<"2. Modificar Tanque"<<endl;
		cout<<"3. Eliminar Tanque"<<endl;
		cout<<"4. Listar Tanques"<<endl;
		cout<<"5. Volver a Administrador"<<endl;
		cout<<"Escoge tu opcion:";
		cin>>opcion;
		switch(opcion)
		{
			case 1: // Agrega un Tanque
			{
				cout<<"Que tipo de Tanque es?"<<endl;
				cout<<"1. Tanque Esferico"<<endl;
				cout<<"2. Tanque de Presion"<<endl;
				cout<<"Escoge tu opcion:"<<endl;
				cin>>opcionTanque;
				cout<<"Nombre del Tanque:";
				cin>>nombre;
				cout<<"Fabricante:";
				cin>>fabricante;
				cout<<"Peso Tanque:";
				cin>>peso;
				cout<<"Costo Tanque:";
				cin>>costo;
				cout<<"Volumen del Tanque:";
				cin>>volumen;
				cout<<"Presion del Tanque:";
				cin>>presion;
				cout<<"Diametro del Tanque:";
				cin>>diametro;
				switch(opcionTanque)
				{
					case 1: // Agrega un Tanque Esferico
					{
						listaTanquesEsfericos[cantidadTanquesEsfericos].setCodigo(cantidadTanquesEsfericos);
						listaTanquesEsfericos[cantidadTanquesEsfericos].setNombre(nombre);
						listaTanquesEsfericos[cantidadTanquesEsfericos].setFabricante(fabricante);
						listaTanquesEsfericos[cantidadTanquesEsfericos].setPeso(peso);
						listaTanquesEsfericos[cantidadTanquesEsfericos].setCosto(costo);
						listaTanquesEsfericos[cantidadTanquesEsfericos].setVolumen(volumen);
						listaTanquesEsfericos[cantidadTanquesEsfericos].setPresion(presion);
						listaTanquesEsfericos[cantidadTanquesEsfericos].setDiametro(diametro);
						listaTanquesEsfericos[cantidadTanquesEsfericos].setVendido(false);
						cantidadTanquesEsfericos++;
						cout<<"Tanque Esferico agregado correctamente..."<<endl;
						getch();
					} break;
					case 2: // Agrega un Tanque de Presion
					{
						cout<<"Altura del Tanque:";
						cin>>altura;
						listaTanquesPresion[cantidadTanquesPresion].setCodigo(cantidadTanquesPresion);
						listaTanquesPresion[cantidadTanquesPresion].setNombre(nombre);
						listaTanquesPresion[cantidadTanquesPresion].setFabricante(fabricante);
						listaTanquesPresion[cantidadTanquesPresion].setPeso(peso);
						listaTanquesPresion[cantidadTanquesPresion].setCosto(costo);
						listaTanquesPresion[cantidadTanquesPresion].setVolumen(volumen);
						listaTanquesPresion[cantidadTanquesPresion].setPresion(presion);
						listaTanquesPresion[cantidadTanquesPresion].setDiametro(diametro);
						listaTanquesPresion[cantidadTanquesPresion].setAltura(altura);
						listaTanquesPresion[cantidadTanquesPresion].setVendido(false);
						cantidadTanquesPresion++;
						cout<<"Tanque a Presion agregado correctamente..."<<endl;
						getch();
					} break;
				}
			} break;
			case 2: // Modificar un Tanque
			{
				cout<<"Que tipo de Tanque es?"<<endl;
				cout<<"1. Tanque Esferico"<<endl;
				cout<<"2. Tanque de Presion"<<endl;
				cout<<"Escoge tu opcion:"<<endl;
				cin>>opcionTanque;
				cout<<"Codigo del Tanque:";
				cin>>codigo;				
				switch(opcionTanque)
				{
					case 1: // Modifica un Tanque Esferico
					{
						bool modificado = false;
						for(int i=0; i<cantidadTanquesEsfericos; i++)
						{
							if (listaTanquesEsfericos[i].getCodigo() == codigo)
							{
								cout<<"Nombre del Tanque:";
								cin>>nombre;
								cout<<"Fabricante:";
								cin>>fabricante;
								cout<<"Peso Tanque:";
								cin>>peso;
								cout<<"Costo Tanque:";
								cin>>costo;
								cout<<"Volumen del Tanque:";
								cin>>volumen;
								cout<<"Presion del Tanque:";
								cin>>presion;
								cout<<"Diametro del Tanque:";
								cin>>diametro;
								listaTanquesEsfericos[i].setNombre(nombre);
								listaTanquesEsfericos[i].setFabricante(fabricante);
								listaTanquesEsfericos[i].setPeso(peso);
								listaTanquesEsfericos[i].setCosto(costo);
								listaTanquesEsfericos[i].setVolumen(volumen);
								listaTanquesEsfericos[i].setPresion(presion);
								listaTanquesEsfericos[i].setDiametro(diametro);
								listaTanquesEsfericos[i].setVendido(false);
								modificado = true;
								cout<<"Tanque Esferico modificado correctamente..."<<endl;
								getch();
							}
						}
						if(!modificado)
						{
							cout<<"Tanque Esferico no encontrado..."<<endl;
							getch();
						}
					} break;
					case 2: // Modifica un Tanque de Presion
					{
						bool modificado = false;
						for(int i=0; i<cantidadTanquesPresion; i++)
						{
							if (listaTanquesPresion[i].getCodigo() == codigo)
							{
								cout<<"Nombre del Tanque:";
								cin>>nombre;
								cout<<"Fabricante:";
								cin>>fabricante;
								cout<<"Peso Tanque:";
								cin>>peso;
								cout<<"Costo Tanque:";
								cin>>costo;
								cout<<"Volumen del Tanque:";
								cin>>volumen;
								cout<<"Presion del Tanque:";
								cin>>presion;
								cout<<"Diametro del Tanque:";
								cin>>diametro;
								cout<<"Altura del Tanque:";
								cin>>altura;
								listaTanquesPresion[i].setNombre(nombre);
								listaTanquesPresion[i].setFabricante(fabricante);
								listaTanquesPresion[i].setPeso(peso);
								listaTanquesPresion[i].setCosto(costo);
								listaTanquesPresion[i].setVolumen(volumen);
								listaTanquesPresion[i].setPresion(presion);
								listaTanquesPresion[i].setDiametro(diametro);
								listaTanquesPresion[i].setAltura(altura);
								modificado = true;
								cout<<"Tanque de Presion modificado correctamente..."<<endl;
								getch();
							}
						}
						if(!modificado)
						{
							cout<<"Tanque de Presion no encontrada..."<<endl;
							getch();
						}
					} break;
				}
			} break;
			case 3: // Eliminar un Tanque
			{
				cout<<"Que tipo de Tanque es?"<<endl;
				cout<<"1. Tanque Esferico"<<endl;
				cout<<"2. Tanque de Presion"<<endl;
				cout<<"Escoge tu opcion:"<<endl;
				cin>>opcionTanque;
				cout<<"Codigo del Tanque:";
				cin>>codigo;				
				switch(opcionTanque)
				{
					case 1: // Elimina un Tanque Esferico
					{
						bool eliminado = false;
						for(int i=0; i<cantidadTanquesEsfericos; i++)
						{
							if (listaTanquesEsfericos[i].getCodigo() == codigo)
							{
								for (int j=i; j<cantidadTanquesEsfericos-1; j++)
								{
									listaTanquesEsfericos[j].setCodigo(listaTanquesEsfericos[j+1].getCodigo()-1);
									listaTanquesEsfericos[j].setNombre(listaTanquesEsfericos[j+1].getNombre());
									listaTanquesEsfericos[j].setFabricante(listaTanquesEsfericos[j+1].getFabricante());
									listaTanquesEsfericos[j].setPeso(listaTanquesEsfericos[j+1].getPeso());
									listaTanquesEsfericos[j].setCosto(listaTanquesEsfericos[j+1].getCosto());
									listaTanquesEsfericos[j].setVolumen(listaTanquesEsfericos[j+1].getVolumen());
									listaTanquesEsfericos[j].setPresion(listaTanquesEsfericos[j+1].getPresion());
									listaTanquesEsfericos[j].setDiametro(listaTanquesEsfericos[j+1].getDiametro());
									listaTanquesEsfericos[j].setVendido(listaTanquesEsfericos[j+1].getVendido());
								}
								eliminado = true;
								cout<<"Tanque Esferico eliminado correctamente..."<<endl;
								getch();
							}
						}
						if(!eliminado)
						{
							cout<<"Tanque Esferico no encontrado..."<<endl;
							getch();
						}
					} break;
					case 2: // Elimina un Tanque de Presion
					{
						bool eliminado = false;
						for(int i=0; i<cantidadTanquesPresion; i++)
						{
							if (listaTanquesPresion[i].getCodigo() == codigo)
							{
								for (int j=i; j<cantidadTanquesPresion-1; j++)
								{
									listaTanquesPresion[j].setCodigo(listaTanquesPresion[j+1].getCodigo()-1);
									listaTanquesPresion[j].setNombre(listaTanquesPresion[j+1].getNombre());
									listaTanquesPresion[j].setFabricante(listaTanquesPresion[j+1].getFabricante());
									listaTanquesPresion[j].setPeso(listaTanquesPresion[j+1].getPeso());
									listaTanquesPresion[j].setCosto(listaTanquesPresion[j+1].getCosto());
									listaTanquesPresion[j].setVolumen(listaTanquesPresion[j+1].getVolumen());
									listaTanquesPresion[j].setPresion(listaTanquesPresion[j+1].getPresion());
									listaTanquesPresion[j].setDiametro(listaTanquesPresion[j+1].getDiametro());
									listaTanquesPresion[j].setAltura(listaTanquesPresion[j+1].getAltura());
									listaTanquesPresion[j].setVendido(listaTanquesPresion[j+1].getVendido());
								}
								eliminado = true;
								cout<<"Tanque de Presion eliminado correctamente..."<<endl;
								getch();
							}
						}
						if(!eliminado)
						{
							cout<<"Tanque de Presion no encontrado..."<<endl;
							getch();
						}
					} break;
				}
			} break;
			case 4: // Muestra en pantalla todos los tanques
			{
				cout<<"TANQUES ESFERICOS"<<endl;
				for (int i=0; i<cantidadTanquesEsfericos; i++)
				{
					listaTanquesEsfericos[i].imprimir();
					cout<<endl;
				}
				cout<<"TANQUES DE PRESION"<<endl;
				for (int i=0; i<cantidadTanquesPresion; i++)
				{
					listaTanquesPresion[i].imprimir();
					cout<<endl;
				}
				getch();
			}
		}
	}while (opcion!=salida);
}
