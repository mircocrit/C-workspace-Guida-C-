#include <iostream>

class A {
	public:
		A();
		~A();
		A(const A& other);
	private:
		int m;
		int *ptr;
};
