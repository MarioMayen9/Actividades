#include "stdafx.h"
#include<iostream>

using namespace std;
struct complejo {
	int real, imaginaria;
} num1, num2, num3, num4;
int resultadoR, resultadoI;
void pedirDatos();
void multiplicar();
void mostrar();

int main() {
	pedirDatos();
	multiplicar();
	mostrar();
	system("pause");
	return 0;
}

void pedirDatos() {
	cout << "Digite el primer numero complejo: " << endl;
	cout << "Parte Real: "; cin >> num1.real;
	cout << "Parte Imaginaria: "; cin >> num2.imaginaria;

	cout << "\nDigite el segundo numero complejo: " << endl;
	cout << "Parte Real: "; cin >> num3.real;
	cout << "Parte Imaginaria: "; cin >> num4.imaginaria;
}

void multiplicar() { 
	resultadoR = ((num1.real*num3.real) - (num2.imaginaria*num4.imaginaria));
	resultadoI = ((num1.real*num4.imaginaria) + (num2.imaginaria*num3.real));
}
void mostrar() {
	cout << "Mostrando resultado: ";
	cout << resultadoR;
	if (resultadoI>0) {
		cout << "+";  cout << resultadoI; cout << "i";
		cout << endl;
	}
	else {
		cout << resultadoI; cout << "i";
		cout << endl;
	}
}



