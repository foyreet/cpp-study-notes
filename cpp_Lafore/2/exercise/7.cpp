#include <iostream>

int main() {
    int gradus_Celsia = 0;
    std::cout << "Введите температуру в градусах по цельсию" << std::endl;
    std::cin >> gradus_Celsia;
    int gradus_Farengeight = gradus_Celsia * (static_cast<double>(9)/5) + 32;
    std::cout << gradus_Farengeight << std::endl;
    return 0;
}
