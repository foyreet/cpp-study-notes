#include <iostream>
#include <vector>
/* std::vector<T, Allocator>::swap обменивает внутренние данные векторов
 * Не вызывает никаких операций перемещения, копирования или подкачки отдельных элементов
 * Меняет местами указатели на данные:
	•vec1 начинает указывать на массив vec2 и наоборот.
   Обменивает метаинформацию:
	•size (размер) и capacity (ёмкость) тоже меняются.
    Не копирует элементы:
	Поэтому скорость O(1), т. к. меняются только указатели и поля.
 * */
int main() {
    std::vector<int> vec1 = {1, 2};
    std::vector<int> vec2 = {4, 5, 6};

    std::cout << "До swap: " << std::endl;
    std::cout << "vec1: " << std::endl;
    for (int num : vec1) std::cout << num << " ";
    std::cout << '\n';
    std::cout << "vec2: " << std::endl;
    for (int num : vec2) std::cout << num << " ";

    vec1.swap(vec2);

    std::cout << '\n';
    std::cout << "После swap: " << std::endl;

    std::cout << "vec1: " << std::endl;
    for (int num : vec1) std::cout << num << " ";

    std::cout << '\n';
    std::cout << "vec2: " << std::endl;
    for (int num : vec2) std::cout << num << " ";


}
