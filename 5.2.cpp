#include <iostream>
#include <numbers>

const double PI = std::numbers::pi_v<double>;

class Round {
public:
	Round() = default;
	Round(double R) : r(R){}
	virtual double area() { return PI * r * r; }
protected:
	double r;
};

class Cylinder : public Round {
public:
	Cylinder(Round r, double H) : Round(r), h(H){}
	Cylinder() = default;
	Cylinder(double r, double H) : Round(r), h(H){}
	double area() override { return PI * 2 * r * h 
		+ 2 * Round::area(); }
	double volume() { return Round::area() * h; }
private:
	double h;
};

int main() {
	Round r(1);
	std::cout << "Բ�����" << r.area() << '\n';
	Cylinder cy(r, 1);
	std::cout << "Բ�������" << cy.area() << '\n';
	std::cout << "Բ�������" << cy.volume() << '\n';
	return 0;
}