#include <iostream>
#include <iomanip>
int main() {
    int a = 0;
    std::cout << "Введите число:" << std::endl;
    std::cin >> a;
    for (int i = 1; i <= 200; i++) {
        std::cout << i * a;
        if (i % 10 == 0) {
            std::cout << '\n';
        }
    }
    return 0;
}
