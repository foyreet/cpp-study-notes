#include <iostream>

int main() {
    enum players { B1, B2, SS, B3, RF, CF, LF, P, C };
    players joe, tom;
    joe = LF;
    tom = P;
    std::cout << joe << std::endl;
    std::cout << tom << std::endl;
    return 0;
}
