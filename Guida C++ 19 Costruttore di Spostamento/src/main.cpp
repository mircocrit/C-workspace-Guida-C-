//lvalue rvalue

#include <iostream>

int main(){
	int a = 1; // a è un lvalue, mentre 1 è un rvalue
	//int&& b = a; // errore: un rvalue reference non può essere associato ad un lvalue
	int& b = a; // ok: b è una reference ad un lvalue
	b = 2; // e modificando b modificheremo anche a.
	const int& c = 3; // ok: un const reference può essere associato ad un rvalue
	//c = 2; // ma non può essere modificato!
	int&& d = a + c; // ok: un rvalue reference può essere associato ad un temporaneo
	d = d +1; // e può anche essere modificato, perchè è un lvalue!
	std::cout << "d: " << d << std::endl;
	system("pause");
	return 0;
}
