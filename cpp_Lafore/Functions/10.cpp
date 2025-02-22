#include <iostream>

// int n = 0; // 1 - ый вариант с глобальной переменной

void function_call();

int main() {
    function_call();
    function_call();
    function_call();
    function_call();
    function_call();
    function_call();
    function_call();
    function_call();
    function_call();
    function_call();
    function_call();
    function_call();
    return 0;    
}

void function_call() {
    static int n = 0;
    n++;
    std::cout << "Функция вызвалась " << n << " раз" << std::endl;

}
