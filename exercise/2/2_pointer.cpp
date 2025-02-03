#include <iostream>

int main() {
    int x = 5;
    int *p = &x;
    std::cout << "p " << p << std::endl;
    std::cout << "*p " << *p << std::endl;
    
    int *p1 = nullptr;
    std::cout << "nullptr= " << *p1 << std::endl;
    return 0;
}
