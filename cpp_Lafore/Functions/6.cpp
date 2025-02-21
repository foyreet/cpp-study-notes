#include <iostream>

struct Time{
    int hours;
    int minutes;
    int seconds;
};

inline long time_to_secs(Time time);
Time secs_to_time(long seconds);

int main() {
    Time time1, time2, sum_time;
    std::cout << "введите кол-во часов, минут, секунд для time1 " << std::endl;
    std::cin >> time1.hours >> time1.minutes >> time1.seconds;
    std::cout << "введите кол-во часов, минут, секунд для time2 " << std::endl;
    std::cin >> time2.hours >> time2.minutes >> time2.seconds;
    sum_time.hours = time1.hours + time2.hours;
    sum_time.minutes = time1.minutes + time2.minutes;
    sum_time.seconds = time1.seconds + time2.seconds;
    long total_seconds = time_to_secs(sum_time);
    sum_time = secs_to_time(total_seconds);
    std::cout << "После сложения 2-ух времён " << std::endl;
    std::cout << sum_time.hours << ':' << sum_time.minutes << ':' << sum_time.seconds;
    return 0;
}

inline long time_to_secs(Time sum_time) {
    long total_seconds = sum_time.hours * 3600 + sum_time.minutes * 60 + sum_time.seconds;    return total_seconds; 
}

Time secs_to_time(long seconds) {
    Time sum_time;
    sum_time.hours = seconds / 3600;
    sum_time.minutes = (seconds - sum_time.hours * 3600) / 60;
    sum_time.seconds = seconds - sum_time.hours * 3600 - sum_time.minutes * 60;
    return sum_time;
}
