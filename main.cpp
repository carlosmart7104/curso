#include <iostream>
// Incluimos las cabeceras de las clases a usar
#include "persona.h"
#include "empleado.h"
#include "estudiante.h"

using namespace std;

// Herencia, Encapsulación, Puntero This y Polimorfismo
int main(int argc, char const *argv[])
{
	//Herencia 
	cout << endl << "Este es un ejemplo de Herencia de clases en C++" << endl
	<< "donde las clases Empleado y Estudiante heredan los metodos y atributos" << endl
	<< "de la clase Persona, agregando o modificando sus propios atributos y metodos." << endl << endl;

	// Instancia de la clase simple "Persona"
	Persona p1("Carlos", 22);
	cout << "Nombre: " << p1.getName() << endl
	<< "Tipo: " << p1.getType() << endl << endl;

	// Instancia de la clase "Empleado" que hereda de la clase base "Persona"
	Empleado p2("Daniel", 16);
	cout << "Nombre: " << p2.getName() << endl
	<< "Tipo: " << p2.getType() << endl << endl;

	// Instancia de la clase "Estudiante" que hereda de la clase base "Persona"
	Estudiante p3("Eduardo", 27, 5);
	cout << "Nombre: " << p3.getName() << endl
	<< "Tipo: " << p3.getType() << endl 
	<< "Semestre: " << p3.getSemestre() << endl << endl;

	// Polimorfismo
	cout << endl << "Por medio del Polimorfismo podemos acceder a objetos " << endl
	<< "desde una de sus clases base" << endl
	<< "Esto permite acceder solamente a las funciones miembro y atributos " << endl
	<< "del objeto definidos en dicha clase base." << endl << endl;
	
	// Se crea una instancia  de "Empleado" dentro de una variable de la clase Persona
	// Esto es posible ya que en "Empleado" hay clases suficientes para llenar los datos de "Persona"
	// Y resulta muy util a la hora de acceder a diversos objetos dese una sola estructura o funcion
	Persona* p4 = new Estudiante("Alejandro", 20, 9); 
	cout << "Nombre: " << p4->getName() << endl
	<< "Tipo: " << p4->getType() << endl << endl;

	// A cambio no es posible acceder a metodos o atributos de la clase que hereda
	// En este caso por ejemplo, no podemos hacer uso de la funcion "getSemestre", de la clase "Estudiante"
	// a pesar de haber creado el objeto por medio de su constructor

	//Por lo tanto la siguiente linea de codigo, arrojaria un error de compilacion
	//indicando que el metodo "getSemestre" no existe en la clase "Persona" 
	//cout << "Semestre: " << p4->getSemestre() << endl;

	return 0;
}