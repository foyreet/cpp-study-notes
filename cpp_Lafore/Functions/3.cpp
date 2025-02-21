#include <iostream>

void zeroSmaller(int&, int&);

int main() {
    std::cout << "Введите два значения аргумента для функции zeroSmaller" << '\n';
    int a, b;
    std::cin >> a >> b;
    zeroSmaller(a,b);
    std::cout << a << " " << b << std::endl;
    return 0;
}

void zeroSmaller(int& a, int& b) {
    if (a < b) {
        a = 0;
    } else {
        b = 0;
    }
}
