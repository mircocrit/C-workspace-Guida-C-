#include "a.h"


A::A(){
	m = 0;
	ptr = new int;
}

A::~A(){
	delete ptr;
}

A::A(const A& other){
	m = other.m;
	// shallow copy
	// ptr = other.ptr;
	// deep copy
	ptr = new int;
	if (other.ptr != nullptr)
		*ptr = *(other.ptr);
}

