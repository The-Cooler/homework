#include <iostream>
#include <cstring>
using namespace std;

struct student {
	char name[10];
	int num;
	char sex;
};

int main() {
	auto stu = new struct student;
	strcpy(stu->name, "卢俊洋");
	stu->num = 2023010316;
	stu->sex = 'M';
	cout << "姓名：" << stu->name << endl;
	cout << "学号：" << stu->num << endl;
	cout << "性别：" << stu->sex << endl;
	return 0;
}