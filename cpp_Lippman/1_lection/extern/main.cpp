#include <iostream>
#include "globals.h"

int main() {
    std::cout << globalVar << '\n';
    globalVar = 200;
    std::cout << globalVar << '\n';
}