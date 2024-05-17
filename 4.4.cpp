#include <iostream>

class Dogs {
public:
	Dogs(double m) : mg(m) { ++cnt, cnt_mg += mg; }
	Dogs(){ ++cnt; }
	void input() {
		std::cout << "请输入小狗重量:";
		std::cin >> mg;
		cnt_mg += mg;
	}
	void print() {
		std::cout << "第" << cnt << "只" << "重量：" << mg << '\n';
		std::cout << "总数：" << cnt << '\n';
		std::cout << "总重量：" << cnt_mg << '\n';
	}
private:
	double mg;
	static size_t cnt;
	static double cnt_mg;
};

size_t Dogs::cnt = 0;
double Dogs::cnt_mg = 0;

int main() {
	Dogs dog1, dog2(3);
	dog1.input();
	dog2.print();
	return 0;
}
