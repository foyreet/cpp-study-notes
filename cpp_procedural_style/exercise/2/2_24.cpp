#include <iostream>

int main() {
    int i = 42;
    void *p = &i; // void может принимать любые типы
    long *lp = &i; // тут разные типы
}
