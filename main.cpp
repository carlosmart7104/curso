#define __test__ 1 // Igual a 1 para testear, igual a 0 para compilar version probada
#include <iostream> // Esta libreria contiene los stream cin y cout para entrada y salida de datos

using namespace std;

float a,b; // Dos variables de punto flotante (decimales)

#if __test__ == 1 // Comprobamos si esta en modo test
void test(); // Declaramos el prototipo de la funcion test, no recibe argumentos, no retorna nada
#endif // Cerramos el bloque condicional

float resta(float x, float y); // Prototipo de la funcion resta, recibe dos flotantes como argumentos y retorna un flotante

int main(int argc, char const *argv[])
{
	#if __test__ == 1 // Comprobamos si esta en modo test
	test(); // Ejecutamos la funcion test
	#else // Si no esta en modo test...
	cout << "\nDame dos numeros para restar, pueden ser decimales" << endl
	<< "\n\tDame el primer numero: "; cin >> a;
	cout << "\tDame el segundo numero: "; cin >> b;
	cout << "\tEl resultado de la resta es: " << resta(a,b) << endl;
	#endif // Cerramos el bloque condicional
	return 0;
}

float resta(float x, float y)
{ // Definimos el funcionamiento de "resta"
	return x - y; // Retornamos el valor de x menos y
}

#if __test__ == 1 // Comprobamos si esta en modo test
void test()
{ // Definimos el funcionamiento de "test"
	cout << "Testing...\nFuncion resta: ";
	if (resta(10,8) == 2)
	{
		cout << "OK";
	} else {
		cout << "WARN";
	}
}
#endif // Cerramos el bloque condicional