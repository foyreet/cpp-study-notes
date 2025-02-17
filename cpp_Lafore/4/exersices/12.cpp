#include <iostream>

struct Fraction {
    int numerator;
    int denominator;
};

int main() {
    Fraction fraction_1, fraction_2, fraction_sum, fraction_dif, fraction_mult,
             fraction_div;

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
    
    fraction_dif.numerator = fraction_1.numerator * fraction_2.denominator -
        fraction_1.denominator * fraction_2.numerator;
    fraction_dif.denominator = fraction_1.denominator * fraction_2.denominator;
    std::cout << "Разность 2-ух дробей " << std::endl;
    std::cout << fraction_dif.numerator << separator << fraction_dif.denominator << '\n';

    fraction_mult.numerator = fraction_1.numerator * fraction_2.numerator;
    fraction_mult.denominator = fraction_1.denominator * fraction_2.denominator;
    std::cout << "Произведение 2-ух дробей " << std::endl;
    std::cout << fraction_mult.numerator << separator << fraction_mult.denominator << '\n';

    fraction_div.numerator = fraction_1.numerator * fraction_2.denominator;
    fraction_div.denominator = fraction_1.denominator * fraction_2.numerator;
    std::cout << "Деление 2-ух дробей " << std::endl;
    std::cout << fraction_div.numerator << separator << fraction_div.denominator;
    return 0;
}
