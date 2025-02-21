#include <iostream>

struct Distance{
    int feet;
    float inches;
};

Distance max_arguments(Distance d1, Distance d2);
void engldisp(Distance d);
int main() {
    Distance d1, d2, d3;
    std::cout << "Введите кол-во футов и дюймов для d1 " << std::endl;
    std::cin >> d1.feet >> d1.inches;
    std::cout << "Введите кол-во футов и дюймов для d2 " << std::endl;
    std::cin >> d2.feet >> d2.inches;
    std::cout << "Наибольшее значение " << std::endl;
    d3 = max_arguments(d1, d2);
    engldisp(d3);
    return 0;
}

Distance max_arguments(Distance d1, Distance d2) {
    if (d1.feet > d2.feet) {
        return d1;
    } else {
        return d2;
    }
    if (d1.inches > d2.inches) {
        return d1;
    } else {
        return d2;
    }
}

void engldisp(Distance d) {
    std::cout << "Кол-во футов: " << d.feet << " Кол-во дюймов: " << d.inches;
}
