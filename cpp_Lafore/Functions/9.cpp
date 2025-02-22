#include <iostream>

struct Time{
    int hours;
    int minutes;
    int seconds;
};

void swap(Time& time_1, Time& time_2);

int main() {
    Time time_1, time_2;
    char sep = ' ';
    std::cout << "Введите время в формате h:m:s " << std::endl;
    std::cout << "time_1: " << '\n';
    std::cin >> time_1.hours >> sep >> time_1.minutes >> sep >> time_1.seconds;

    std::cout << "Введите время в формате h:m:s " << std::endl;
    std::cout << "time_2: " << '\n';
    std::cin >> time_2.hours >> sep >> time_2.minutes >> sep >> time_2.seconds;
    swap(time_1, time_2);
    return 0;
}

void swap(Time& time_1, Time& time_2) {
    Time temp;
    temp.hours = time_1.hours;
    time_1.hours = time_2.hours;
    time_2.hours = temp.hours;

    temp.minutes = time_1.minutes;
    time_1.minutes = time_2.minutes;
    time_2.minutes = temp.minutes;

    temp.seconds = time_1.seconds;
    time_1.seconds = time_2.seconds;
    time_2.seconds = temp.seconds;

    std::cout << "После смены мест: " << std::endl;
    std::cout << time_1.hours << ':' << time_1.minutes << ':' << time_1.seconds << '\n';
    std::cout << time_2.hours << ':' << time_2.minutes << ':' << time_2.seconds << '\n';
}
