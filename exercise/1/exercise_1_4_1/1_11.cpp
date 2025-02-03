#include <iostream>

int main() {
    int x = 0;
    int y = 0;
    std::cin >> x >> y;
    while (x <= y) {
        std::cout << x << std::endl;
        ++x;
    }
    return 0;
}
