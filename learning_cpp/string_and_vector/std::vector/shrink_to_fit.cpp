#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    vec.reserve(10);
    vec.push_back(10);
    vec.push_back(1);
    vec.push_back(12);
    vec.push_back(13);
    
    std::cout << "Размер vec: " << vec.size() << std::endl;
    std::cout << "capacity до shrink_to_fit: " << vec.capacity() << std::endl;

    vec.shrink_to_fit();

    std::cout << "capacity после shrink_to_fit: " << vec.capacity() << std::endl;

    std::cout << "Максимальное число эл-тов к-рое может содержать вектор: " 
	<< vec.max_size() << std::endl;
}
