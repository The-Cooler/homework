#include<iostream>

int main() {
	char ch;
	std::cin >> ch;
	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') std::cout << (int)ch;
	else std::cout << ch;
	return 0;
}