#include <iostream>
#include <iomanip>
int main() {
    for (int i = 1; i <= 20; i+=2) {
        for (int j = 1; j <= i; j++) {
            std::cout << 'X';
        }
        std::cout << '\n';
    }
    return 0;
}
