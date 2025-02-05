#include <iostream>

int main() {
    int currvalue = 0;
    int value = 0;
    if (std::cin >> currvalue) {
        int cnt = 1;
        while (std::cin >> value) {
            if (value == currvalue) {
               ++cnt; 
            } else {
                std::cout << currvalue << " " << cnt << std::endl;
                currvalue = value;
                cnt = 1;
            }
        }
        std::cout << currvalue << " " << cnt << std::endl;
    }
    return 0;
}   
