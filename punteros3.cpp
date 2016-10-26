#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	struct Persona{
		int edad;
		string nombre;
		Persona(){
			edad = 10;
			nombre = "Default";
		}
		Persona(string n, int ed = 22){
			nombre = n;
			edad = ed;
		}
	};
	Persona persona1("Daniel"), *p;
	p = &persona1;
	cout << " punteros a structs" << endl
	<< " persona1.nombre: " << persona1.nombre << endl
	<< " p->nombre: " << p->nombre;
	return 0;
}