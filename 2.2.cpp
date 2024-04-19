#include <iostream>
using namespace std;

using dd = double;
const dd PI = 3.141592653589793;

dd area(dd radius = 0);//Բ
dd area(dd a, dd b);//����
dd area(dd a, dd b, dd h);//����
dd area(dd a, dd b, dd c, int);//������

int main() {
	dd a, b, c, h;
	cout << "������Բ�ΰ뾶:\n";
	cin >> a;
	cout << "Բ�����Ϊ:" << area(a) << '\n';
	cout << "��������γ���:\n";
	cin >> a >> b; 
	cout << "���ε����Ϊ:" << area(a, b) << '\n';
	cout << "���������ε����µ׺͸�\n";
	cin >> a >> b >> h;
	cout << "�������Ϊ:" << area(a, b, h) << '\n';
	cout << "�����������ε�������\n";
	cin >> a >> b >> c;
	dd s = area(a, b, c, 0);
	if (s) cout << "���������Ϊ:" << s << '\n';
	else cout << "�޷�����������!";
	return 0;
}

dd area(dd radius) {
	return radius * radius * PI;
}

dd area(dd a, dd b) {
	return a * b;
}

dd area(dd a, dd b, dd h) {
	return (a + b) * h / 2;
}

dd area(dd a, dd b, dd c, int) {
	dd p = (a + b + c) / 2;
	if (p - a <= 0 || p - b <= 0 || p - c <= 0) return 0;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}