#include <iostream>

int main() {
    int age;
    std::cin >> age;
    if (age > 21) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
