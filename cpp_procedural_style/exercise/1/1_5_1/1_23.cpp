#include <iostream>
#include "1_20.h"

int main() {
    int cnt = 0;
    Sales_item total;
    if (std::cin >> total) {
        Sales_item trans;
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                cnt++;
            }
            std::cout << cnt << std::endl;
        }
    }
    return 0;
}
