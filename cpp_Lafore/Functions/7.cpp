#include <iostream>

double power(double n, int p);

double power(char n, int p);

double power(int n, int p);

double power(long n, int p);

double power(float n, int p);

int main() {
    std::cout << "Введите аргументы для функции power() " << '\n';
    char n;
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

double power(char n, int p) {
    int digit = n - '0';
    double result = 1.0;
    for (int i = 0; i < p; i++) {
        result *= digit;
    }
    return result;
}

double power(long n, int p) {
    double result = 1.0;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}


double power(float n, int p) {
    double result = 1.0;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}


double power(int n, int p) {
    double result = 1.0;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}
