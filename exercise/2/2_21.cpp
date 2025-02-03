#include <iostream>

int main() {
    int i = 0;
    double* dp = &i; // неверно они должны быть одного типа
    int *ip = i; // неверно нет & перед i
    int *p = &i; // верно
    return 0;
}
