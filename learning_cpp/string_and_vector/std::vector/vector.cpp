#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4};
    std::vector<double> vec1 = {1.5, 2.3, 4.5, 5.6, 5.7, 4.5, 5.6};
    std::vector<int> vec2; 

    for (size_t i = 0; i < 30; i++) {
	vec2.push_back(i);
	std::cout << "Кол-во элементов вектора vec2: " << vec2.size()<< std::endl;
	std::cout << "Размер вектора vec2: " << vec2.capacity() << std::endl;
	std::cout << std::endl;
    }  

    std::cout << std::endl;

    vec1.push_back(5);
        for (int num : vec) {
	std::cout << num << " ";
    } 

    std::cout << '\n';

    std::cout << "Первый элемент: " << vec.front() << std::endl;
    std::cout << "Последний элемент: " << vec.back() << std::endl;
    std::cout << "Кол-во элементов в векторе: " << vec.size() << std::endl;
    std::cout << "Размер вектора vec: " << vec.capacity() << std::endl;
    std::cout << "Размер вектора vec1: " << vec1.capacity() << std::endl;
}
