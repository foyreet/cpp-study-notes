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
    return 0;
}
