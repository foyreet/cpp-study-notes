/*Программа читает данные пока не встретит не число типа int 
 Объект типа istream переходит в недопустимое состояние по достижении конца файла
 или при вводе недопустимых данных (например строки вместo числа)

 Для ввода символа конца файла на unix macos используется 
 Enter
 <Ctrl + d>
*/

#include <iostream>

int main() {
    int sum = 0;
    int value = 0;
    while (std::cin >> value) {
        sum += value;
        std::cout << sum << std::endl;
    }
    return 0;
}
