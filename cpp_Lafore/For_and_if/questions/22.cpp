#include <iostream>

int main() {
    int ticket = 0;
    int speed = 0;
    std::cin >> speed;
    if (speed > 55) {
        ticket = 1;
    } else {
        ticket = 0;
    }
    std::cout << ticket << std::endl;
    return 0;
}
