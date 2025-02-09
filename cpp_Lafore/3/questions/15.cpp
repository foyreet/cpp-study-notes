#include <iostream>
// exit() - немедленно завершает программу
// exit(0) - нормальное завершение программы
// exit(1) - ошибка
int main() {
    int x = 0;
    std::cin >> x;
    if (x == 0) {
        std::cout << "Выход из программы" << std::endl;
        exit(0);
    }
    return 0;
}
