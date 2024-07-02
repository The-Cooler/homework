#include <iostream>

class Animal {
public:
	virtual void sound() = 0;
};

class Cat :public Animal {
public:
	Cat(const char* s) : name(s) {}
	Cat() = default;
	void sound()override {
		std::cout << "is Cat\n";
	}
private:
	const char* name;
};

class Leopard :public Animal {
public:
	Leopard(const char* s) :name(s) {}
	Leopard() = default;
	void sound()override {
		std::cout << "is Leopard" << '\n';
	}
private:
	const char* name;
};


int main() {
	Cat c;
	c.sound();
	Leopard r;
	r.sound();
	return 0;
}