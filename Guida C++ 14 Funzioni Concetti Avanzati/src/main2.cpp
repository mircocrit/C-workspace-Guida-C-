#include <iostream>

void test(bool x){
	if(x)
		std::cout << "Sorpresa!" << std::endl;
}


void test(std::string x){
	std::cout << x << std::endl;
}

int main(){
	test("Quale funzione verr� invocata?");
	system("pause");
	return 0;
}
