#include "Pc.hpp"

Pc::Pc(string minombrepc, string mimodelo, string miprocesador, string miualmace, string miram, float miprecio){
	setNombrepc(minombrepc);
	setModelo(mimodelo);
	setProcesador(miprocesador);
	setUalmace(miualmace);
	setRam(miram);
	setPrecio(miprecio);
}

/*Pc::Pc(string minombrepc, string mimodelo, string miprocesador, string miualmace, string miram, float miprecio){
	nombrepc = minombrepc;
	modelo = mimodelo;
	procesador = miprocesador;
	ualmace = miualmace;
	ram = miram;
	precio = miprecio;
}

Pc::Pc(){}*/

void Pc::setNombrepc(string Npc){
    nombrepc = Npc;
}

void Pc::setModelo(string mo){
	modelo = mo;
}

void Pc::setProcesador(string pro){
	procesador = pro;
}

void Pc::setUalmace(string ual){
	ualmace = ual;
}

void Pc::setRam(string ra){
	ram = ra;
}


void Pc::setPrecio(float pre){
	precio = pre;
}

string Pc::getNombrepc(){
    return nombrepc;
}

string Pc::getModelo(){
	return modelo;
}

string Pc::getRam(){
	return ram;
}

float Pc::getPrecio(){
	return precio;
}
