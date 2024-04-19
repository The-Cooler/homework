#include<iostream>
#include<cstring>
using namespace std;

struct student
{
	int number;
	char name[8];
	bool sex;
	struct
	{
		int year;
		int month;
		int day;
	}birthday;
};

int main()
{
	student stu;
	stu.number = 2023010316;
	strcpy(stu.name, "卢俊洋");
	stu.sex = 0;
	stu.birthday.year = 2003;
	stu.birthday.month = 07;
	stu.birthday.day = 25;
	cout << "输出学生信息为:" << endl;
	cout << stu.number << " " << stu.name << " ";
	cout << stu.sex << " " << stu.birthday.year << ".";
	cout << stu.birthday.month << ".";
	cout << stu.birthday.day;
}
