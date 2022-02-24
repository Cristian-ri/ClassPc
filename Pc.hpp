#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

//Prototipo de la clase.
class Pc{
	public:
		
		//Constructor
		Pc(string, string, string, string, string, float);
		
		// Funciones Miembros
		void setNombrepc(string);
		void setModelo(string);
		void setProcesador(string);
		void setUalmace(string);
		void setRam(string ra);
		void setTgrafica(string);
		void setPrecio(float);
		string getNombrepc();
		string getModelo();
		string getRam();
		float getPrecio();
		
	private:
		//Miembros de datos.
		string nombrepc, modelo, procesador;
		string ualmace, ram, tgrafica;
		float precio;		
};