#include <iostream>

int main() {
    int limit = 0;
    int speed = 0;
    std::cin >> limit >> speed;
    if (limit == 55 && speed > 55) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
