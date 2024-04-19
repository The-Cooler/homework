#include<iostream>

int main() {
	float sorce;
	while (std::cin >> sorce) {
		if (sorce < 60) std::cout << "E\n";
		else if (sorce < 70) std::cout << "D\n";
		else if (sorce < 80) std::cout << "C\n";
		else if (sorce < 90) std::cout << "B\n";
		else std::cout << "A\n";
	}
	return 0;
}