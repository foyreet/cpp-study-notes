#include <iostream>

int main() {
    char ch;
    do {
        std::cout << "Введите первую сумму: J" << std::endl;
        int f_1;
        int sh_1;
        int p_1;
        std::cin >> f_1 >> sh_1 >> p_1;
        std::cout << std::endl;
        std::cout << "Введите вторую сумму: J" << std::endl;
        int f_2;
        int sh_2;
        int p_2;
        std::cin >> f_2 >> sh_2 >> p_2;
        int sum_1 = f_1 * 240 + sh_1 * 12 + p_1;
        int sum_2 = f_2 * 240 + sh_2 * 12 + p_2;
        int sum = sum_1 + sum_2;
        int res_f = sum / 240;
        int res_sh = (sum - 240 * res_f) / 12;
        int res_p = sum - 240 * res_f - 12 * res_sh;
        std::cout << "Всего: " << res_f << " " << res_sh << " " << res_p << std::endl;
        std::cout << "Продолжить(y/n) ?" << std::endl;
        std::cin >> ch;
    } while (ch != 'n');
    return 0;
}
