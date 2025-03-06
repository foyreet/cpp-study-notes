#include <iostream>
#include <vector>
#include <utility>
//  std::swap — это шаблонная функция общего назначения, которая работает с любыми типами
//  Меняются указатели на данные, размер (size) и ёмкость (capacity).
//  Элементы не копируются, поэтому операция очень быстрая — имеет сложность O(1).
int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {5, 6, 7};

    std::cout << "До std::swap: " << std::endl;
    std::cout << "vec1: " << std::endl;
    for (int v : vec1) std::cout << v << " ";
    std::cout << '\n';
    
    std::cout << "vec2: " << std::endl;
    for (int v : vec2) std::cout << v << " ";

    std::swap(vec1, vec2);
    
    std::cout << '\n';
    std::cout << "После std::swap: " << '\n';
    std::cout << "vec1: " << std::endl;
    for (int v : vec1) std::cout << v << " ";
    std::cout << '\n';
    
    std::cout << "vec2: " << std::endl;
    for (int v : vec2) std::cout << v << " ";
}
