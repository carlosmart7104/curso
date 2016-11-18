#include "estudiante.h"
Estudiante::Estudiante(string n, int e, int s) : Persona(n,e){
	this->type = "Estudiante";
	this->semestre = s;
}
int Estudiante::getSemestre(){
	return semestre;
}