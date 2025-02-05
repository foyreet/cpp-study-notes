#include <iostream>

int main() {
    std::clog << "Код изменяющий значение указателя" << std::endl;
    int x = 5;
    int *p = &x;
    int y = 10;
    p = &y;
    std::cout << "p " << p << std::endl;
    std::clog << "Код изменения значения на которое указывает указатель" << std::endl;
    
    int a = 5;
    int *p_1 = &a;
    ++a;
    std::cout << "*p_1 " << *p_1 << std::endl;
    return 0;
}
