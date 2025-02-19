#include <iostream>

int main() {
    enum speeds {obsolete = 78, single = 45, album = 33 };
    std::cout << obsolete << std::endl;
    std::cout << single << std::endl;
    std::cout << album << std::endl;
    return 0;
}
