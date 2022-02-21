#include <string>
using std::string;

//Prototipo de la clase.
class Pc{
	public:
		
		//Constructor
		Pc(string, string, string, string, string, float)
		
		// Funciones Miembros
		void setNombrepc(string Npc);
		void setModelo(string mo);
		void setProcesador(string pro);
		void setUalmace(string ual);
		void setRam(string ra);
		void setTgrafica(string grafica);
		void setPrecio(float pre);
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