#include <iostream>

class Mammal {
public:
	Mammal() { std::cout << "Mammel构造\n"; }
	~Mammal() { std::cout << "Mammel析构\n"; }
};

class Dog : public Mammal{
public:
	Dog() { std::cout << "Dog构造\n"; }
	~Dog() { std::cout << "Dog析构\n"; }
};

int main() {
	Dog d0g;
	return 0;
}