#include "simplemath.h"

// Definizione di funzione inline
/*
inline int sum(int a, int b) {
	return a + b;
}

int main() { //l'invocazione di una funzione inline non è differente da quella di una funzione ordinaria
	sum(2, 3);
	return 0;
}
*/


// B - Definizione alternativa di classe con metodo inline //

inline int SimpleMath::sum(int a, int b){
	return (a + b);
}
