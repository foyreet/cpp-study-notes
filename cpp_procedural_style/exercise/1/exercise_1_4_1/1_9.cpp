#include <iostream>

int main() {
    int x = 50;
    int sum = 0;
    while (x <= 100) {
        sum += x;
        ++x;
    }
    std::cout << sum << std::endl;
    return 0;
}
