#include <iostream>

int main() {
	/****
	int a = 1;
	int *ptr = &a; // si legge: "assegna a ptr l'indirizzo di a"
	int b = *ptr; // si legge: "assegna a b il valore puntato da ptr"
	std::cout << "a: " << a << std::endl; // 1
	std::cout << "b: " << b << std::endl; // 1
	std::cout << "*ptr: " << *ptr << std::endl; // 1

	//int a = 1;
	//int* ptr = &a; // dereferenziazione di una variabile
	int** ptr2ptr = &ptr; // dereferenziazione di un puntatore; Attenzione int** e int* sono tipi differenti

	//int** ptr2ptr = &(&a); // errore!
	***/

	int *a = new int;
	int b = **&a; // equivalente a 'int b = *a;'
	int c = 1; int d = *&c; // equivalente a 'int d = c;'

	int *e = new int;
	int **f = &e;
	int g = ***&f; // equivalente a int g = **f;

	system("pause");
	return 0;
}

