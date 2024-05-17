#include <iostream>

class Base {
public:
	void f() const {
		std::cout << "is const function\n";
	}
	void f1() {
		std::cout << "is not const function\n";
	}
};

int main() {
	Base base1;
	base1.f1();
	Base const base2;
	base2.f();
	return 0;
}