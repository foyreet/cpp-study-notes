#include <iostream>

void swap(int& a, int& b);

int main() {
    int a, b;
    std::cin >> a >> b;
    swap(a, b);
    return 0;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << a << ' ' << b << '\n';
}
