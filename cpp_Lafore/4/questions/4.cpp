#include <iostream>

int main() {
    struct time {
        int hrs;
        int mins;
        int sees;
    };

    time time2;
    time2.hrs = 11;
    std::cout << time2.hrs << std::endl;

    time time1 = {11, 10, 59};
    std::cout << time1.hrs << std::endl;
    std::cout << time1.mins << std::endl;
    std::cout << time1.sees << std::endl;
    return 0;
}
