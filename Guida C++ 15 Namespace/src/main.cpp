#include <iostream>
#include <bitset>

namespace Hex {
	int base = 16;
	void printNumber(int value) {
		std::cout << std::hex << value << std::dec << std::endl;
	}
}

namespace Bin {
	int base = 2;
	void printNumber(int value) {
		std::cout << std::bitset<32>(value) << std::endl;
	}
}

int main() {
	int a = 123546;
	Hex::printNumber(a);
	Bin::printNumber(a);
	std::cout << Hex::base << std::endl;
	std::cout << Bin::base << std::endl;


	/*using namespace Hex;
	printNumber(a);*/
	using namespace Bin;
	printNumber(a);

	system("pause");
	return 0;
}
