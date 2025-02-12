#include <iostream>

int main() {
    std::cout << "Введите начальный вклад: ";
    double deposit = 0.0;
    std::cin >> deposit;
    std::cout << "Введите число лет: ";
    int years = 0;
    std::cin >> years;
    std::cout << "Введите процентную ставку: ";
    double procent = 0.0;
    std::cin >> procent;
    // Вычисление 
    for (int i = 0; i < years; i++) {
        deposit  = deposit + (deposit * (procent / 100)); 
    }
    std::cout << "Через " << years << "лет " << "вы получите " << deposit << "доллара";
    return 0;
}
