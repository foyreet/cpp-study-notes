#include <iostream>
#include <vector>
// clear() - удаляет все элементы из вектора
// Не изменяет capacity
int main() {
    std::vector<int> vec1 = {1, 2, 3, 4};

    std::cout << "capacity до clear(): " << std::endl;
    std::cout << vec1.capacity() << std::endl;

    vec1.clear();

    std::cout << "После clear() элементы в векторе: " << std::endl;
    for (int v : vec1) std::cout << v << " ";
    std::cout << '\n';

    std::cout << "capacity после clear(): " << std::endl;
    std::cout << vec1.capacity() << std::endl;

}
