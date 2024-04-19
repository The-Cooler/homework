#include <iostream>

struct W {
	int x, y;
	
};
std::ostream& operator << (std::ostream& os, W p) { 
		os << '(' << p.x << ',' << p.y << ')';
		return os;
}
class Rect {
	
	int w, h;
	W p;
public:
	void move(int a, int b) { p.x = a, p.y = b; }
	void size(int a, int b) { w = a, h = b; }
	W where() {
		W q;
		q.x = p.x - w;
		q.y = p.y - h;
		return q;
	}
	int area() { return w * h; }
};

int main() {
	Rect r;
	r.move(100, 200);
	r.size(10, 20);
	std::cout << "右下角坐标:" << r.where() << std::endl;
	std::cout << "面积:" << r.area();
	return 0;
}