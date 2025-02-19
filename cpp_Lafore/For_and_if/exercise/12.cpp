#include <iostream>

int main() {
    std::cout << "Введите первое число" << std::endl;
    int a;
    int b;
    int c;
    int d;
    char separator;
    std::cin >> a >> separator >> b;
    std::cout << "Введите второе число" << std::endl;
    std::cin >> c >> separator >> d;
    std::cout << "Вычисление суммы 2-ух дробей" << std::endl;
    int sum_num = a * d + c * b;
    int sum_den = b * d;
    std::cout << sum_num << separator << sum_den << std::endl;
    std::cout << "Вычисление разности 2-ух дробей" << std::endl;
    int dif_num = a * d - c * b;
    int dif_den = b * d;
    std::cout << dif_num << separator << dif_den << std::endl;
    std::cout << "Умножение 2-ух дробей" << std::endl;
    int mult_num = a * c;
    int mult_den = b * d;
    std::cout << mult_num << separator << mult_den << std::endl;
    std::cout << "Деление 2-ух дробей" << std::endl;
    int div_num = a * d;
    int div_den = b * c;
    std::cout << div_num << separator << div_den << std::endl;
    return 0;
}
