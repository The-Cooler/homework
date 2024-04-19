#include <iostream>
using namespace std;

using dd = double;
const dd PI = 3.141592653589793;

dd area(dd radius = 0);//圆
dd area(dd a, dd b);//矩形
dd area(dd a, dd b, dd h);//梯形
dd area(dd a, dd b, dd c, int);//三角形

int main() {
	dd a, b, c, h;
	cout << "请输入圆形半径:\n";
	cin >> a;
	cout << "圆的面积为:" << area(a) << '\n';
	cout << "请输入矩形长宽:\n";
	cin >> a >> b; 
	cout << "矩形的面积为:" << area(a, b) << '\n';
	cout << "请输入梯形的上下底和高\n";
	cin >> a >> b >> h;
	cout << "梯形面积为:" << area(a, b, h) << '\n';
	cout << "请输入三角形的三条边\n";
	cin >> a >> b >> c;
	dd s = area(a, b, c, 0);
	if (s) cout << "三角形面积为:" << s << '\n';
	else cout << "无法构成三角形!";
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