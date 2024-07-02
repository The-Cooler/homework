#include <iostream>

class Student {
public:
	Student(const char* s, double a, double b, double c):
		name(s), score1(a), score2(b), score3(c) {
		++cnt;
	}
	Student() { ++cnt; };
	Student& operator + (Student&);
	void ave();
private:
	static int cnt;
	const char* name;
	double score1, score2, score3;
};

int Student::cnt = 0;

Student& Student::operator + (Student& stu) {
	stu.score1 += score1;
	stu.score2 += score2;
	stu.score3 += score3;
	return stu;
}

void Student::ave() {
	std::cout << "第一科平均分:" << score1 / cnt << '\n';
	std::cout << "第二科平均分:" << score2 / cnt << '\n';
	std::cout << "第三科平均分:" << score3 / cnt << '\n';
}

int main() {
	Student stu1("cao", 1, 2, 3), stu2("1", 1, 1, 1);
	auto s = stu1 + stu2;
	s.ave();
	return 0;
}