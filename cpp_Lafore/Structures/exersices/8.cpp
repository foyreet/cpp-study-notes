#include <iostream>

struct Fraction {
    int numerator;
    int denominator;
};

int main() {
    Fraction fraction_1, fraction_2, fraction_sum;
    std::cout << "Введите 1-ую дробь" << std::endl;
    char separator;
    std::cin >> fraction_1.numerator >> separator >> fraction_1.denominator;
    std::cout << "Введите 2-ую дробь" << std::endl;
    std::cin >> fraction_2.numerator >> separator >> fraction_2.denominator;
    
    fraction_sum.numerator = fraction_1.numerator * fraction_2.denominator + 
        fraction_1.denominator * fraction_2.numerator;
    fraction_sum.denominator = fraction_1.denominator * fraction_2.denominator;

    std::cout << "Сумма двух дробей " << std::endl;
    std::cout << fraction_sum.numerator << separator << fraction_sum.denominator << '\n';
    return 0;
}
