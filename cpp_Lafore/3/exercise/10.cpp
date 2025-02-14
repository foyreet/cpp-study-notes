#include <iostream>

int main() {
    double sum = 0;
    std::cout << "Введите сумму которую вы бы хотели получить" << std::endl;
    std::cin >> sum;
    double deposit = 0;
    std::cout << "Введите сумму начального вклада" << std::endl;
    std::cin >> deposit;
    double procent = 0.0;
    std::cout << "Введите процентную ставку" << std::endl;
    std::cin >> procent;
    int years = 0;
    while(sum - deposit >= 0) {
        deposit *= (1 + procent / 100);
        ++years;
    }
    std::cout <<"Через " <<  years << " лет вы получите " << sum << " доллара" << std::endl;
    return 0;
}
