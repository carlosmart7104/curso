#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x = 1, y = 2;
	int* p;
	p = &x;
	cout << " x = " << x << ", y su puntero es: "
	<< " &x = " << &x << endl
	<< " y = " << y << ", y su puntero es: "
	<< " &y = " << &y << endl
	<< " p = " << p << ", y el valor al que apunta es: "
	<< " *p = " << *p << endl << endl;
	p = &y;
	cout << " x = " << x << ", y su puntero es: "
	<< " &x = " << &x << endl
	<< " y = " << y << ", y su puntero es: "
	<< " &y = " << &y << endl
	<< " p = " << p << ", y el valor al que apunta es: "
	<< " *p = " << *p << endl << endl;
	return 0;
}