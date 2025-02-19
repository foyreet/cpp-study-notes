#include <iostream>

void circarea(float radius);

int main() {
    std::cout << "Введите значение радиуса: " << std::endl;
    float radius;
    std::cin >> radius;
    circarea(radius);
    return 0;
}

void circarea(float radius) {
    const float PI = 3.14159F;
    float area = PI * radius * radius;
    std::cout << "Площадь круга равна " << area << std::endl;
}
