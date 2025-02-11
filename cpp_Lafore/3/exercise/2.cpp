#include <iostream>

int main() {

    int a = 0;
    std::cout << "Нажмите 2 для перевода из шкалы Цельсия в шкалу Фаренгейта,\n"
        "1 для перевода шкалы фаренгейта в шкалу Цельсия" << std::endl;
    std::cin >> a;
    // 1 - перевод из шкалы Цельсия в шкалу Фаренгейта
    // 2 - перевод из шкалы Фаренгейта в шкалу Цельсия
    switch(a) {
        case 1: {
            std::cout << "перевод из шкалы Фаренгейта в шкалу Цельсия" << std::endl;
            double Farengeith;
            std::cout << "Введите температуру по Фаренгейту" << std::endl;
            std::cin >> Farengeith;
            double Celsia = (Farengeith - 32) / (9.0/5.0);
            std::cout << Celsia << std::endl;
            break;
                }        
        case 2: {
            std::cout << "перевод из шкалы цельсия в шкалу Фаренгейта" << std::endl;
            double C;
            std::cout << "Введите температуру по Цельсию" << std::endl;
            std::cin >> C;
            double F = (9.0/5.0)*C + 32;
            std::cout << F << std::endl;
            break;
                }
        default:
            std::cout << "Ничего не выводи" << std::endl;
            break;
    }
    return 0;
}
