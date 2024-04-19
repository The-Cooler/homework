#include <iostream>

class A {
	int x, y;
public:
	void intitx(int a, int b) { x = b, y = a; }
	void print() {
		std::cout << x << '-';
		std::cout << y << '=';
		std::cout << x - y;
	}
};

int main() {
	A x;
	x.intitx(400, 500);
	x.print();
	return 0;
}