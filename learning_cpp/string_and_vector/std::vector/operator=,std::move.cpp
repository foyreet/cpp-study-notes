#include <iostream>
#include <vector>

// operator= позволяет копировать данные из одного вектора в другой

//  После использования std::move объект считается “в перемещённом состоянии”, и его использование в других операциях может привести к неопределённому поведению.

//Объекты, на которые применяется std::move, не должны быть использованы после перемещения, за исключением разрушения.

//std::move позволяет избежать дорогих операций копирования, если вы работаете с большими объектами, например, с большими массивами, строками или контейнерами, где копирование могло бы быть очень затратным.

int main() {
    std::vector<int> vec1 = {2, 3, 4};
    std::vector<int> vec2 = {1, 3 , 5};

    std::cout << "До operator= " << std::endl;
    for (int v : vec1) std::cout << v << " ";
    std::cout << '\n';

    for (int v : vec2) std::cout << v << " ";
    std::cout << '\n';

    // Копирование
    vec2 = vec1;

    std::cout << "После Копирования " << std::endl;
    for (int v : vec1) std::cout << v << " ";
    std::cout << '\n';

    for (int v : vec2) std::cout << v << " ";
    std::cout << '\n';

    // Перемещение

    std::vector<int> vec3 = {2, 4 , 8};

    std::cout << "До std::move: " << std::endl;
    for (int v : vec1) std::cout << v << " ";
    std::cout << '\n';

    for (int v : vec3) std::cout << v << " ";
    std::cout << '\n';

    vec3 = std::move(vec1);


    std::cout << "После std::move: " << std::endl;
    for (int v : vec1) std::cout << v << " ";
    std::cout << '\n';

    for (int v : vec3) std::cout << v << " ";
    std::cout << '\n';


}
