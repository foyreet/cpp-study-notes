#include <iostream>

int main() {
    const double CUBIC_FOOT = 7.841;
    std::cout << "Введите число галлонов" << std::endl;
    int count_gallons = 0;
    std::cin >> count_gallons;
    double result = 0;
    result = count_gallons / CUBIC_FOOT;
    std::cout << result << std::endl;
    return 0;
}
