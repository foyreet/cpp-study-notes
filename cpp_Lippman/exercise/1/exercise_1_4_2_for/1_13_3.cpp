#include <iostream>

int main() {
    int x = 0;
    int y = 0;
    std::cin >> x >> y;
    for (int i = x; i <= y; ++i) {
        std::cout << i << std::endl;
    }
    return 0;
}
