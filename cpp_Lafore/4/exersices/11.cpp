#include <iostream>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    std::cout << "Введите 1-ое время в формате h:m:s " << std::endl;
    char sep;
    Time time_1, time_2, time_sum;
    std::cin >> time_1.hours >> sep >> time_1.minutes >> sep 
        >> time_1.seconds;
    long total_sec_1 = time_1.hours * 3600 + time_1.minutes * 60 + time_1.seconds;
    std::cout << "Введите 2-ое время в формате h:m:s " << std::endl;
    std::cin >> time_2.hours >> sep >> time_2.minutes >> sep 
        >> time_2.seconds;
    long total_sec_2 = time_2.hours * 3600 + time_2.minutes * 60 + time_2.seconds;
    long total = total_sec_1 + total_sec_2;
     time_sum.hours = total / 3600;
     time_sum.minutes = (total - time_sum.hours * 3600) / 60;
     time_sum.seconds = total - time_sum.hours * 3600 - time_sum.minutes * 60;
    std::cout << "Сумма 1-ого и 2-ого времени " << std::endl;
    std::cout << time_sum.hours << sep << time_sum.minutes << sep << time_sum.seconds;
    return 0;
}
