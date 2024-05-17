#include <iostream>
#include <numbers>
#include <cmath>

const double PI = std::numbers::pi_v<double>;

class Point {
public:
	Point() = default;
	Point(double R, double T) : r(R), t(T){}
protected:
	double r, t;
};

class Round : public Point {
public:
	Round() = default;
	Round(double R, double T) : Point(R, T){}
	void coordinate() { std::cout << "x = " << r * cos(t) << ", y = " << r * sin(t) << '\n'; }
	void radius() { std::cout << "r = " << r << '\n'; }
	void area() { std::cout << "area = " << PI * r * r << '\n'; }
};

int main() {
	Round r(1, PI / 2);
	r.coordinate();
	r.area();
	r.radius();
	return 0;
}

