/*Practica de POO, clases*/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

class Pc{
	public:
		
		//Constructor
		Pc(string minombrepc, string mimodelo, string miprocesador, string miualmace, string miram, float miprecio){
			setNombrepc(minombrepc);
			setModelo(mimodelo);
			setProcesador(miprocesador);
			setUalmace(miualmace);
			setRam(miram);
			setPrecio(miprecio);
		}
		
		Pc(){
		};
		
		// Funciones Miembros
		void setNombrepc(string Npc){
			nombrepc = Npc;
		}
		
		void setModelo(string mo){
			modelo = mo;
		}
		
		void setProcesador(string pro){
			procesador = pro;
		}
		
		void setUalmace(string ual){
			ualmace = ual;
		}
		
		void setRam(string ra){
			ram = ra;
		}
		
		void setTgrafica(string grafica){
			tgrafica = grafica;
		}
		
		void setPrecio(float pre){
			precio = pre;
		}
		
		string getNombrepc(){
			return nombrepc;
		}
		
		string getModelo(){
			return modelo;
		}
		
		string getRam(){
			return ram;
		}
		
		float getPrecio(){
			return precio;
		}
		
	private:
		//Miembros de datos.
		string nombrepc, modelo, procesador;
		string ualmace, ram, tgrafica;
		float precio;
	
	
};

int main()
{
	Pc Pc1, Pc2("Dell Latitude 3340","Desconocido","IntelCore i5 4210U","500 GB HDD","8 GB",11999.99);
	cout<<"Objeto 1 sin uso del Constructor \n"<<endl;
	Pc1.setNombrepc("Ideapad 110");
	Pc1.setModelo("80UD");
	Pc1.setPrecio(11500);
	Pc1.setProcesador("IntelCore i3 6100U");
	Pc1.setRam("4 GB");
	Pc1.setTgrafica("Graficos integrados procesador");
	Pc1.setUalmace("1 Terabyte HDD");
	cout<<"Nombre de la Computadora: "<<Pc1.getNombrepc()<<endl;
	cout<<"Modelo: "<<Pc1.getModelo()<<endl;
	cout<<"Ram instalada: "<<Pc1.getRam()<<endl;
	cout<<"Precio: Lps "<<Pc1.getPrecio()<<"\n"<<endl;
	cout<<"Informacion modificada objeto 1 \n"<<endl;
	Pc1.setPrecio(9999.99);
	cout<<"Oferta de verano: Lps "<<Pc1.getPrecio()<<"\n"<<endl;
	cout<<"Objeto 2 con uso del Constructor \n"<<endl;
	cout<<Pc2.getNombrepc()<<endl;
	cout<<Pc2.getModelo()<<endl;
	cout<<Pc2.getRam()<<endl;
	Pc2.setPrecio(11998.99);
	cout<<Pc2.getPrecio()<<"\n"<<endl;
	cout<<"Oferta de Verano: "<<endl;
	Pc2.setPrecio(10998.99);
	cout<<Pc2.getNombrepc()<<" ****A tan solo**** "<<Pc2.getPrecio()<<"\n"<<endl;
	
	
	
	system("PAUSE");
	return 0;
}
