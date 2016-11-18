#pragma once
#ifndef __estudiante_h__
#define __estudiante_h__
#include <iostream>
using namespace std;
#include "persona.h"
class Estudiante : public Persona {
public:
	Estudiante(string n, int e, int s);
	int getSemestre();
private:
	int semestre;
};
#endif