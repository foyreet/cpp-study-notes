#include <iostream>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time time;
    std::cout << "Введите часы " << '\n';
    std::cin >> time.hours;
    std::cout << "Введите минуты " << '\n';
    std::cin >> time.minutes;
    std::cout << "Введите секунды " << '\n';
    std::cin >> time.seconds;
    std::cout << "Всего секунд " << '\n';
    long totalsecs = time.hours * 3600 + time.minutes*60 + time.seconds;
    std::cout << totalsecs;
    return 0;
}
