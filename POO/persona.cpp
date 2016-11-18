#include "persona.h"
Persona::Persona(string n, int e){
	this->nombre = n;
	this->edad = e;
}
string Persona::getName(){
	return nombre;
}
string Persona::getType(){
	return type;
}