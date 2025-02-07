#include <iostream>
#include <iomanip>

int main() {
    long pop1 = 8425785, pop2 = 47, pop3 = 9761;
    std::cout << std::setw(9) << std::left << "Город " << std::setw(12) 
    << std::right << "Население" << std::endl
    << std::setw(9) << std::left << "Москва" 
    << std::setfill('.') << std::setw(12) << std::right << pop1 << std::endl
    << std::setw(9) << std::left << "Киров" 
    << std::setfill('.') << std::setw(12) << std::right << pop2 << std::endl                
    << std::setw(9) << std::left << "Угрюмовка"
    << std::setfill('.') << std::setw(12) << std::right <<  pop3 << std::endl;
    return 0;
}
