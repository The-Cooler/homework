//三数相加模板
#include <iostream>

template<typename T>
T add(T a, T b, T c) {
    return a + b + c;
}

int main() {
    int a = 1, b = 2, c = 3;
    std::cout << add(a, b, c) << std::endl;
    return 0;
}