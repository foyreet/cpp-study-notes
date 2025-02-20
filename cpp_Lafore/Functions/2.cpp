#include <iostream>

double power(double n, int p);

int main() {
    std::cout << "Введите аргументы для функции power(double n, int p) " << '\n';
    double n = 0.0;
    int p = 2;
    std::cin >> n >> p;
    double result = power(n, p);
    std::cout << result << std::endl;
    return 0;
}

double power(double n, int p) {
    double result = 1.0;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}
