#include <iostream>

int main() {
	int a = 1;
	int& ref_a = a;
	int b = 2; ref_a = b; // Errore: non possiamo cambiare il riferimento dopo la dichiarazione!
	int& r; // Errore: una variabile reference deve essere inizializzata!

	//variabili reference nulle

	// inizializzazione di una variabile reference a partire da un puntatore valido
	int *p = new int;
	*p = 2;
	int& ref_p = *p;
	// inizializzazione di una variabile reference con un puntatore nullo
	int *np = nullptr;
	int& ref_np = *np;
	std::cout << ref_np << std::endl; // errore di segmentazione!

	system("pause");
	return 0;
}

