#include <iostream>

int main() {
    std::cout << "Введите 1-ый операнд, арифметическую операцию и 2-ой операнд" << std::endl;
    double op_1 = 0.0;
    double op_2 = 0.0;
    char ch;
    std::cin >> op_1 >> ch >> op_2;
    switch(ch) {
        case '+': {
            double addition = op_1 + op_2;
            std::cout << "Результат равен " << addition << std::endl;
            break;
                  }
        case '-': {
            double difference = op_1 - op_2;
            std::cout << "Результат равен " << difference << std::endl;
            break;
                  }
        case '*': {
            double multiple = op_1 * op_2;
            std::cout << "Результат равен " << multiple << std::endl;
            break;
                  }
        case '/': {
            double division = op_1 / op_2;
            std::cout << "Результат равен " << division << std::endl;
            break;
                  }
        default:
            std::cout << "Такой операции не существует" << std::endl;
    }   
    return 0;
}
