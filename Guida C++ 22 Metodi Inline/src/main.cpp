#include <iostream>
#include "simplemath.h" // versione B
// rimuovere la ri-definizione del metodo produrrà un errore di compilazione


inline int SimpleMath::sum(int a, int b){
	return (a + b);
}

int main(){
	SimpleMath a;
	std::cout << a.sum(2, 3) << std::endl;
	system("pause");
	return 0;
}
