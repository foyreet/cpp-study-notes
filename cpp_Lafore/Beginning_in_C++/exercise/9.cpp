#include <iostream>
int main() {
    std::cout << "Введите первую дробь:" << std::endl;
    int numerator_1 = 0;
    int denominator_1 = 0;
    char separator = '\0';
    std::cin >> numerator_1 >> separator >> denominator_1;
    
    std::cout << "Введите вторую дробь:" << std::endl;
    int numerator_2 = 0;
    int denominator_2 = 0;
    std::cin >> numerator_2 >> separator >> denominator_2;

    int sum_numerator = numerator_1 * denominator_2 + denominator_1 * numerator_2;
    int sum_denominator = denominator_1 * denominator_2;
    std::cout << "Сумма равна " << sum_numerator << separator << sum_denominator;
    return 0;
}   
