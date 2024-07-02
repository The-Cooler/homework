#include <iostream>
#include <numbers>

const double PI = std::numbers::pi_v<double>;

class shape {
public:
	virtual double Area() = 0;
};

class Rectangle :public shape {
public:
	Rectangle(double a, double b): x(a), y(b){}
	Rectangle() = default;
	double Area()override {
		return x * y;
	}
private:
	double x, y;
};

class Circle :public shape {
public:
	Circle(double a):r(a){}
	Circle() = default;
	double Area()override {
		return PI * r * r;
	}
private:
	double r;
};


int main() {
	Rectangle c(1, 2);
	std::cout << "长方形面积:" << c.Area() << '\n';
	Circle r(1);
	std::cout << "圆面积:" << r.Area() << '\n';
	return 0;
}