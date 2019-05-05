#include <iostream>
using std::cout;
using std::endl;

enum asse : char {x = 'x', y = 'y'};

int main() {
	cout << "Enumeratore x: " << (char) x << endl; 		//x = 'x'
	char x = 'c';
	cout << "Variabile x: " << x << endl; 					//x = 'c'
	cout << "Enumeratore asse::x: " << (char) asse::x << endl; 		// x = 'x'
	//int x = 1; // errore di compilazione!!
	system("pause");
	return 0;
}
