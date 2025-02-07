#include <iostream>

int main() {
    double decpounds = 0;
    std::cout << "Введите число десятичных фунтов: " << std::endl;
    std::cin >> decpounds;
    char ch = static_cast<char>(74);
    int pounds = 0;// сумма фунтов старых
    int shil = 0;
    int pens = 0;
    int pr_result = 0;
    pr_result = decpounds * 240;
    pounds = pr_result / 240;
    shil = (pr_result - (pounds * 240)) / 12;
    pens = pr_result - (pounds * 240 + shil * 12);
    std::cout << ch << pounds << '.' << shil << '.' << pens << std::endl;
    return 0;
}   
