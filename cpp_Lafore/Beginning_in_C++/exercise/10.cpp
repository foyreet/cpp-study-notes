#include <iostream>

int main() {
    int funt = 0;
    int shil = 0;
    int pens = 0;
    std::cout << "Введите кол-во фунтов: " << std::endl;
    std::cin >> funt;
    std::cout << "Введите кол-во шиллингов: " << std::endl;
    std::cin >> shil;
    std::cout << "Введите кол-во пенсов: " << std::endl;
    std::cin >> pens;
    int sum_money = funt * 240 + shil * 12 + pens;
    int intermediate_result = sum_money / 2.4;
    int new_funt = intermediate_result / 100;
    int new_pens = intermediate_result % 100;
    char funt_ch = static_cast<char>(74);
    std::cout << "Десятичных фунтов: " << funt_ch << new_funt << '.' << new_pens << std::endl;
    return 0;
}
