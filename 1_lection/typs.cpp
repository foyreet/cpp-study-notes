// extern
#include <iostream>
void static_int() {
    static int count;
    /* переменная будет выделяться не на стеке,
     а будет выделяться в глобальной области памяти
     (там же где глобальные переменные)

     С точки зрения памяти это глобальная переменная;
     С точки зрения области видимости это локальная переменная
     */
    std::cout << ++count << '\n';
}

int main() {
    static_int();
    static_int();
    static_int();
}
