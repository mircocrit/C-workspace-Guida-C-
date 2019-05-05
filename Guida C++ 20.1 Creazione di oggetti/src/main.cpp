#include <iostream>

using namespace std;

class A {
	public: int m;
	int *ptr;
};

A globalVar;

int main() {
	A localVar1;
	A localVar2 = A();
	cout << "localVar1.m ha un valore indeterminato: " << localVar1.m << endl;
	cout << "localVar2.m è zero: " << localVar2.m << endl;
	delete globalVar.ptr; // ok
	cout << "Deallocazione di globalVar.ptr" << endl;
	delete localVar2.ptr; // ok
	cout << "Deallocazione di localVar2.ptr" << endl;
	//delete localVar1.ptr; // errore di segmentazione!
	//cout << "questa stringa non verrà stampata!" << endl;
	system("pause");
	return 0;
}
