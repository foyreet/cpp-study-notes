#include <iostream>
#include "1_20.h"

int main() {
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn()) {
        std::cout << item1 + item2 << std::endl;   
    }
    return 0;
}
