#include <iostream>

class Mammal {
public:
	Mammal() { std::cout << "Mammel����\n"; }
	~Mammal() { std::cout << "Mammel����\n"; }
};

class Dog : public Mammal{
public:
	Dog() { std::cout << "Dog����\n"; }
	~Dog() { std::cout << "Dog����\n"; }
};

int main() {
	Dog d0g;
	return 0;
}