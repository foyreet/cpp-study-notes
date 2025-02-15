#include <iostream>

int main() {
    struct phone {
        int code_town;
        int number_telefon;
        int number_abonent;
    };
    
    phone phone_1 = { 991, 296, 9144 };
    phone phone_2;
    std::cout << "Введите код города, номер станции и номер абонента" << std::endl;
    std::cin >> phone_2.code_town >> phone_2.number_telefon >> phone_2.number_abonent;
    std::cout << "Мой номер " << phone_1.code_town << ' ' << 
         phone_1.number_telefon << '-' << phone_1.number_abonent << std::endl;
    std::cout << "Ваш номер " << phone_2.code_town << ' ' <<
         phone_2.number_telefon << '-' << phone_2.number_abonent << std::endl;
    return 0;
}
