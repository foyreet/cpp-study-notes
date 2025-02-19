#include <iostream>

struct Sterling {
    int pounds;
    int shillings;
    int pence;
};

int main() {
    std::cout << "Введите значение денежной суммы в новых десятичных фунтах" << '\n';
    double decimal_pounds = 0.0;
    std::cin >> decimal_pounds;
    decimal_pounds *= 240;
    Sterling sterling;
    sterling.pounds = decimal_pounds / 240;
    sterling.shillings = (decimal_pounds - 240 * sterling.pounds) / 12;
    sterling.pence = decimal_pounds - sterling.pounds * 240 - sterling.shillings * 12;
    std::cout << "В старой денежной системе это " << std::endl;
    std::cout << 'J' << sterling.pounds << '.' << sterling.shillings << '.' 
        << sterling.pence;
    return 0;
}
