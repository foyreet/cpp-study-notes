#include <iostream>

int main() {
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0;
    int v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of" << '\n';
    std::cout << v1 << '\n';
    std::cout << " and " << '\n';
    std::cout << v2 << '\n';
    std::cout << " is " << '\n';
    std::cout << v1 + v2 << std::endl;
    return 0;
}
