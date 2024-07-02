#include <iostream>

class Point {
public:
	Point(int a, int b):x(a), y(b){}
	Point(Point& p) { *this = p; }
	Point() = default;
	Point& operator ++();
	Point operator ++(int);
	Point& operator --();
	Point operator --(int);
	int x, y;
};

std::ostream& operator << (std::ostream& os, const Point& p){
	std::cout << p.x << ' ' << p.y << '\n';
	return os;
}

Point& Point::operator ++ () {
	++x;
	++y;
	return *this;
}

Point Point::operator ++ (int) {
	Point p(*this);
	++*this;
	return p;
}

Point& Point::operator -- () {
	--x;
	--y;
	return *this;
}

Point Point::operator -- (int) {
	Point p(*this);
	--*this;
	return p;
}

int main() {
	Point p(2, 3);
	std::cout << "--p = " << --p;
	std::cout << "p-- = " << p--;
	std::cout << "++p = " << ++p;
	std::cout << "p++ = " << p++;
	return 0;
}