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
	strcpy(stu->name, "¬����");
	stu->num = 2023010316;
	stu->sex = 'M';
	cout << "������" << stu->name << endl;
	cout << "ѧ�ţ�" << stu->num << endl;
	cout << "�Ա�" << stu->sex << endl;
	return 0;
}