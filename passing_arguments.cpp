#include <iostream>

// Передача аргументов по значению
int modify_values(int a) {
    return a;
}
// Передача аргументов по ссылке
int modify_reference(int& a) {
    a = 6;
}

int main() {
    int a = 2;
    std::cout << "Передача аргументов по значению" << '\n';
    modify_values(a);
    std::cout << "a = " << a << '\n';
    std::cout << "Передача аргументов по ссылке" << '\n';
    modify_reference(a);
    std::cout << "a = " << a << '\n';
}
