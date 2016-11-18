#pragma once
#ifndef __empleado_h__
#define __empleado_h__
#include <iostream>
using namespace std;
#include "persona.h"
class Empleado : public Persona {
public:
	Empleado(string n, int e);
};
#endif