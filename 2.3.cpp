#include <iostream>
using namespace std;

double max(double a, double b) { return a > b ? a : b; };
int max(int a, int b) { return a > b ? a : b; };
float max(float a, float b) { return a > b ? a : b; };

int main() {
	cout << "��������������\n";
	int a, b;
	cin >> a >> b;
	cout << "max(a, b)=" << max(a, b) << endl;
	cout << "����������ʵ��\n";
	float a1, b1;
	cin >> a1 >> b1;
	cout << "max(a1, b1)=" << max(a1, b1) << endl;
	cout << "����������˫��������\n";
	double a2, b2;
	cin >> a2 >> b2;
	cout << "max(a2, b2)=" << max(a2, b2) << endl;
	return 0;
}