#include "stdafx.h"
#include <iostream>



using namespace std;
void MatrizCero(int matriz[5][5]);
void mostrarMatriz(int matriz[5][5]);
void llenarMatriz(int matriz[5][5]);
int main()
{
	int matriz[5][5];


	
	MatrizCero(matriz);
	mostrarMatriz(matriz);
	llenarMatriz(matriz);
	mostrarMatriz(matriz);

	system("pause");
    return 0;
}

void MatrizCero(int matriz[5][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			matriz[i][j] = 0;
		}
	}
}



void mostrarMatriz(int matriz[5][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << matriz[i][j] << "  ";
		}
		cout << endl;
	}


}
void llenarMatriz(int matriz[5][5]) {
	for (int i = 1; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			cout << "Digite un numero:";
			cin >> matriz[i][j];
			cout << endl;
		}


	}
}
