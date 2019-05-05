#include <iostream>

void swap(int a, int b){
	int tmp = a;
	a = b;
	b = tmp;
}

void swapPointer(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void swapReference(int& a, int& b){
	int tmp = a;
	a = b;
	b = tmp;
}

int main(){
	int x = 1;
	int y = 2;

	swap(x, y);

	std::cout << "x: " << x ;
	std::cout << "y: " << y <<std::endl;

	swapPointer(&x, &y);
	std::cout << "x: " << x;
	std::cout << "y: " << y <<std::endl;

	swapReference(x, y);
	std::cout << "x: " << x;
	std::cout << "y: " << y <<std::endl;

	system("pause");
	return 0;
}
