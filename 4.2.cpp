#include <iostream>

class Base {
public:
	static int cnt;
	Base() { ++cnt; }

};

int Base::cnt = 0;

int main() {
	Base base[5];
	std::cout << "cnt = " << Base::cnt;
	return 0;
}