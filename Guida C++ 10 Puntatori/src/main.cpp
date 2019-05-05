#include <iostream>

int main() {
	int a = 0; { // stack: {a}
		int b = a + 1;{ // stack: {b} {a}
			int c = b + 1;// stack: {c} {b} {a}
		}  // stack: {b} {a}
	}// stack: {a}

	int * p;
	p = new int;
	delete p;

	int * p; // inserimento di p nello stack
	p = new int; // allocazione di una variabile di tipo intero nello heap

	system("pause");
	return 0;
}

