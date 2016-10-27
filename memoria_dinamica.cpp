#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	class Persona{
	private:
		string nombre;
	public:
		int edad;
		string diTuNombre(){
			return nombre;
		};
		void tuNombreEs(string nom){
			nombre = nom;
		};
	} *personas;
	cout << "Numero de personas a agregar: ";
	cin >> n;
	personas = new Persona[n];
	for (int i = 0; i < n; ++i)
	{
		string s;
		cout << "Nueva persona: \n Nombre: ";
		cin >> s;
		personas[i].setNombre(s); // set
		cout << " Edad: ";
		cin >> personas[i].edad;
		cout << endl;
	}
	for (int i = 0; i < n; ++i)
	{
		cout << "Persona #" << i << ": " << endl
		<< " Nombre: " << personas[i].getNombre() << endl // get
		<< " Edad: " << personas[i].edad << endl << endl;
	}
	delete[] personas;
	return 0;
}