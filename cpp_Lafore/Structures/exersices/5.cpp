#include <iostream>

struct Date {
    int month;
    int day;
    int year;
};

int main() {
    std::cout << "Введите день месяц и год" << std::endl;
    char sep_1;
    char sep_2;
    Date date;
    std::cin >> date.day >> sep_1 >> date.month >> sep_2 >> date.year;
    std::cout << date.day << sep_1 << date.month << sep_2 << date.year;
    return 0;
};
