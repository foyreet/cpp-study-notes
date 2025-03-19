// Реализуй функцию void swapVoid(void* a, void* b, size_t size);, которая обменивает значения двух переменных любого типа, используя void*.

#include <iostream>
#include <cstring>

void swapVoid(void* a, void* b, size_t size) {
    void* temp = malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}

int main() {
    double a = 4.34;
    double b = 3.14;
    swapVoid(&a, &b, sizeof(double));
    std::cout << a << " " << b << '\n';
}
