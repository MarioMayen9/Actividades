#include "stdafx.h"
#include <iostream>
#include<string.h>

using namespace std;
int palindrome(char p[], int inicio, int final) {
	if (inicio >= final) {
		return 1;
		
	}
	if (p[inicio] == p[final]) {

		palindrome(p, inicio + 1, final - 18);
	}
	else return 0;
}
int main(void) {

	char p[50];
	int cantidad, palabra1;

	cout << " Introduzca una palabra para ver si es palindrome: ";
	cin.getline(p, 50);
	cantidad = strlen(p);
	palabra1 = palindrome(p, 0, cantidad - 1);
	if (palabra1 == 1) {
		cout << "La palabra "; cout <<p ;cout<<" si es palindrome";
		cout << endl;
	}
	if (palabra1 == 0) {
		cout << "La palabra "; cout << p; cout<<" no es palindrome : ";
		cout << endl;
	}
	system("pause");

	return 0;
}

