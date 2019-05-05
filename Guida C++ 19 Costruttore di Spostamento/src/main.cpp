//lvalue rvalue

#include <iostream>

int main(){
	int a = 1; // a � un lvalue, mentre 1 � un rvalue
	//int&& b = a; // errore: un rvalue reference non pu� essere associato ad un lvalue
	int& b = a; // ok: b � una reference ad un lvalue
	b = 2; // e modificando b modificheremo anche a.
	const int& c = 3; // ok: un const reference pu� essere associato ad un rvalue
	//c = 2; // ma non pu� essere modificato!
	int&& d = a + c; // ok: un rvalue reference pu� essere associato ad un temporaneo
	d = d +1; // e pu� anche essere modificato, perch� � un lvalue!
	std::cout << "d: " << d << std::endl;
	system("pause");
	return 0;
}
