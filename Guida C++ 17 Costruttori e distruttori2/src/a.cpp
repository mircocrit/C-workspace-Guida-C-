#include "a.h"

A::A(){
	m = 0;
	ptr = new int;
}

A::~A(){
	delete ptr;
}
