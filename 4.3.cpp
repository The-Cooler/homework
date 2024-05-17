#include<iostream>

class Students {
public:
	Students(const char* n, size_t i, int a, const char* s, double c) :
		name(n), id(i), age(a), sex(s), cj(c) {
		++cnt, cnt_cj += cj;
	}
	Students():Students("1", 1, 1, "1", 60.5) {}
	static void print() {
		std::cout << "总人数：" << cnt << std::endl;
		std::cout << "总成绩：" << cnt_cj << std::endl;
	}
private:
	const char* name;
	size_t id;
	int age;
	const char* sex;
	double cj;
	static size_t cnt;
	static double cnt_cj;
};

size_t Students::cnt = 0;
double Students::cnt_cj = 0;

int main() {
	Students stu[10], my("卢俊洋", 2023010316, 20, "男", 90);
	Students::print();
	return 0;
}