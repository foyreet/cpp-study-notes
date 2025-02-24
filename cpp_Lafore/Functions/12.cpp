#include <iostream>

struct Fraction{
    int numerator;
    int denominator;
};

void cin_fraction(Fraction& fraction);
void cout_fraction(Fraction& fraction);
Fraction fadd(Fraction& fraction_1, Fraction& fraction_2);
Fraction fsub(Fraction& fraction_1, Fraction& fraction_2);
Fraction fmul(Fraction& fraction_1, Fraction& fraction_2);
Fraction fdiv(Fraction& fraction_1, Fraction& fraction_2);
char separator = '/';
int main() {
    Fraction fraction_1, fraction_2, fraction_sum, fraction_dif, fraction_mult, 
	     fraction_div;
    cin_fraction(fraction_1);
    cin_fraction(fraction_2);
    std::cout << "Сложение дробей: " << std::endl;
    fraction_sum = fadd(fraction_1, fraction_2);
    cout_fraction(fraction_sum);
    std::cout << "Вычитание дробей: " << std::endl;
    fraction_dif = fsub(fraction_1, fraction_2);
    cout_fraction(fraction_dif);
    std::cout << "Умножение дробей: " << std::endl;
    fraction_mult = fmul(fraction_1, fraction_2);
    cout_fraction(fraction_mult);
    std::cout << "Деление дробей: " << std::endl;
    fraction_div = fdiv(fraction_1, fraction_2);
    cout_fraction(fraction_div);
    return 0;
}

void cin_fraction(Fraction& fraction) {
    std::cout << "Введите дробь: " << std::endl;
    std::cin >> fraction.numerator >> separator >> fraction.denominator;
}

void cout_fraction(Fraction& fraction) {
    std::cout << fraction.numerator << separator << fraction.denominator << std::endl;
}

Fraction fadd(Fraction& fraction_1, Fraction& fraction_2) {
    Fraction fraction_sum;
    fraction_sum.numerator = fraction_1.numerator * fraction_2.denominator + 
        fraction_1.denominator * fraction_2.numerator;
    fraction_sum.denominator = fraction_1.denominator * fraction_2.denominator;
    return fraction_sum;    
}

Fraction fsub(Fraction& fraction_1, Fraction& fraction_2) {
    Fraction fraction_dif;
    fraction_dif.numerator = fraction_1.numerator * fraction_2.denominator -
        fraction_1.denominator * fraction_2.numerator;
    fraction_dif.denominator = fraction_1.denominator * fraction_2.denominator;
    return fraction_dif;
}

Fraction fmul(Fraction& fraction_1, Fraction& fraction_2) {
    Fraction fraction_mult;
    fraction_mult.numerator = fraction_1.numerator * fraction_2.numerator;
    fraction_mult.denominator = fraction_1.denominator * fraction_2.denominator;
    return fraction_mult;
}

Fraction fdiv(Fraction& fraction_1, Fraction& fraction_2) {
    Fraction fraction_div;
    fraction_div.numerator = fraction_1.numerator * fraction_2.denominator;
    fraction_div.denominator = fraction_1.denominator * fraction_2.numerator;
    return fraction_div; 
}



