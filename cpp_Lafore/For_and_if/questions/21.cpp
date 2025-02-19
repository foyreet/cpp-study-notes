#include <iostream>

int main() {
    char ch = ' ';
    std::cin >> ch;
    switch (ch) {
    case 'y':
        std::cout << "YES" << std::endl;
        break;
    case 'n':
        std::cout << "NO" << std::endl;
        break;
    default:
        std::cout << "Unknown" << std::endl;
    }
    return 0;
}
