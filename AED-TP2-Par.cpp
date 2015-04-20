#include <iostream>

// Programa que determina si un numero es par o impar, Agustín Espíndola K1091, 20/04/15

int numero;
using namespace std;

int main() {
	cout<<"Ingrese un numero: ";
	cin>>numero;
	cout<<"\nResultado: ";
	cout<<numero % 2;
	cout<<"\n\nSi el resultado es 0, el numero es par.\nSi el resultado es 1, el numero es impar.";
}
