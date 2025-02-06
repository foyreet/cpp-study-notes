#include <iostream>

int main() {
    std::cout << "Введите сумму в долларах" << std::endl;
    int sum_money = 0;
    std::cin >> sum_money;
    // Объявление констант
    const double STERLING = 1.487;
    const double FRANK = 0.172;
    const double GERMAN = 0.584;
    const double YEN = 0.00955;
    std::cout << "Вывод долларов в стерлингах " << sum_money / STERLING << std::endl;
    std::cout << "Вывод долларов в франках " << sum_money / FRANK << std::endl;
    std::cout << "Вывод долларов в немецких марках " 
        << sum_money / GERMAN << std::endl;
    std::cout << "Вывод долларов в йенах " 
        << sum_money / YEN << std::endl;
    return 0;
}
