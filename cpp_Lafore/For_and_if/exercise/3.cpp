#include <iostream>

int main() {
    char ch;
    const int n = 6;
    std::cout << "Введите число: " << std::endl;
    for (int i = 0; i < n; i++) {
        ch = std::cin.get(); // считает 1 символ
    }
    std::cout << ch << std::endl;
    return 0;
    
}
