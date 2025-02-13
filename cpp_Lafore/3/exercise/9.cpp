#include <iostream>

int main() {
    int guests = 0;
    std::cout << "Введите число гостей: " << std::endl;
    std::cin >> guests;
    int places = 0;
    std::cout << "Введите число мест: " << std::endl;
    std::cin >> places;
    int multiple = 1;
    for (int i = guests; i >= (guests - places + 1); i--) {
        multiple *= i;
    }
    std::cout << multiple;
    return 0;
}
