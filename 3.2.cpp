#include <iostream>

class datatype {
	char ch;
	int a;
	float f;
public:
	datatype(char c, int x, float y):ch(c), a(x), f(y){}
	void out() { std::cout << ch << ' ' << a << ' ' << f; }
};

int main() {
	datatype a('a', 65, 3.14);
	a.out();
	return 0;
}