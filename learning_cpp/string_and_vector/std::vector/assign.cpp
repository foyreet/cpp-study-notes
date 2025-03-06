#include <iostream>
#include <vector>

// метод assign() используется для замены содержимого вектора новыми элементами

int main() {

    // Заполнение вектора одинаковыми элементами
    std::vector<int> vec1 = {1, 2, 3};
    vec1.assign(4, 6);

    for (int v : vec1) std::cout << v << " ";
    // Вывод: 6 6 6 6
    std::cout << '\n'; 

    // Замена содержимого на элементы из другого диапазона вектора

    std::vector<int> vec2 = {3, 4, 5};	
    vec2.assign(vec1.begin(), vec1.end());

    for (int v : vec2) std::cout << v << " ";
    // Вывод 6 6 6 6

    std::cout << '\n';

    // Заменa содержимого на элементы из списка инициализации

    vec1.assign({1, 2, 3, 4, 5});

    for (int v : vec1) std::cout << v << " ";
}
