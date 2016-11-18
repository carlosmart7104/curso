#pragma once
#ifndef __persona_h__
#define __persona_h__
#include <iostream>
using namespace std;
class Persona {
public:
	Persona(string n, int e);
	string getName();
	string getType();
protected:
	int edad;
	string nombre;
	string type = "Persona";
};
#endif