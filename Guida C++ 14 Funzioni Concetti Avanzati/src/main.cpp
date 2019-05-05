/*#include <iostream>

int divisione(int dividendo, int divisore, int* resto = nullptr) {
	int risultato = dividendo / divisore;
	if (resto != nullptr) {
		*resto = dividendo % divisore;
	} return risultato;
}

int main() {
	int a = 10;
	int b = 3;
	int c = 0;
	int d = divisione(a, b, &c);
	std::cout << a << " / " << b << " = " << d << " col resto di " << c << std::endl;
	std::cout << a << " / " << b << " = " << divisione(a, b) << std::endl;
	system("pause");
	return 0;
}
*/
#include <iostream>

int divisione(int dividendo, int divisore, int* resto = nullptr){
	int risultato = dividendo / divisore;
		if (resto != nullptr) {
			*resto = dividendo % divisore;
		} return risultato;
}


float divisione(float dividendo, float divisore){
	return dividendo / divisore;
}

/*
int main(){
	std::cout << "divisione intera:" << divisione(10, 3) << std::endl; // ok: int e int
	std::cout << "divisione in virgola mobile: " << divisione(10.0f, 3.0f) << std::endl; // ok: float e float
	//int a = divisione(10.0f, 3); // errore: float e int
	//int b = divisione(10.0, 3.0); // errore: double e double
	system("pause");
	return 0;
}*/
