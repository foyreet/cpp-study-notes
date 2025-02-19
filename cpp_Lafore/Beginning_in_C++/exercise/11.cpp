#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::setiosflags(std::ios::left) << std::setw(10) <<
        "Фамилия " << std::setw(10) << "Имя " << std::setw(10) << "Адрес " 
        << std::setw(10) << "Город " << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
     std::cout << std::setiosflags(std::ios::left) << std::setw(10) <<           
           "Петров " << std::setw(10) << "Василий " << std::setw(10) << "Кленовая 16 " 
           << std::setw(10) << "Санкт-Петербург " << std::endl;
     return 0;
}
