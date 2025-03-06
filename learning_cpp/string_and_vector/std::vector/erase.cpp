#include <iostream>
#include <vector>

// erase используется для удаления элементов из вектора

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5, 6, 7};

    for (int v : vec1) std::cout << v << " ";
    std::cout << '\n';
    // Удаление 1-ого элемента по итератору

    vec1.erase(vec1.begin() + 2);
    for (int v : vec1) std::cout << v << " ";

    std::cout << '\n';

    // Удаление диапазона элементов
    // Удаляем эл-ты с 1 индекса по 3
    vec1.erase(vec1.begin() + 1, vec1.begin() + 4);

    for (int v : vec1) std::cout << v << " ";

}
