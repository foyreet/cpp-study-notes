#include <iostream>
int main() {
    const int n = 20;
    for (int i = 1; i <= n; i+=2) {
        int spaces = n - i;
        for (int s = 1; s <= spaces; s++) {
            std::cout << ' ';
        }
        for (int j = 1; j <= i; j++) {
            std::cout << 'X';
        }
        std::cout << '\n';
    }
    return 0;
}
