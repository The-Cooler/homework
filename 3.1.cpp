#include <iostream>
struct W {
	int x, y;
	W(int a, int b) :x(a), y(b){}
};

class Rectangle {
	W p1, p2;
public:
	double len() { return (abs(p1.x - p2.x) + abs(p1.y - p2.y)) * 2; }
	double area() { return abs(p1.x - p2.x) * abs(p1.y - p2.y); }
	Rectangle(W a, W b) : p1(a), p2(b){}
};

int main() {
	W a(1, 5), b(5, 1);
	Rectangle r(a, b);
	std::cout << "area=" << r.area() << std::endl;
	std::cout << "len=" << r.len() << std::endl;
	return 0;
}