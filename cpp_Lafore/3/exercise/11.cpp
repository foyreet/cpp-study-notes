#include <iostream>
int main() {
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
    // Вычисление суммы
    std::cout << "Вычисление суммы" << std::endl;
    int sum = sum_1 + sum_2;
    int res_f = sum / 240;
    int res_sh = (sum - 240 * res_f) / 12;
    int res_p = sum - 240 * res_f - 12 * res_sh;
    std::cout << "Всего: " << res_f << " " << res_sh << " " << res_p << std::endl;
    // Вычисление разности
    std::cout << "Вычисление разности" << std::endl;
    int dif = sum_1 - sum_2;
    int res_f_2 = dif / 240;
    int res_sh_2 = (dif - 240 * res_f_2) / 12;
    int res_p_2 = dif - 240 * res_f_2 - 12 * res_sh_2;
    std::cout << res_f_2 << " " << res_sh_2 << ' ' << res_p_2 << std::endl;
    std::cout << "Умножение денежной суммы на вещественное число" << std::endl;
    double chislo = 0.0;
    std::cin >> chislo;
    double multiple = sum_1 * chislo;
    int result_f = multiple / 240;
    int result_sh = (multiple - 240 * result_f) / 12;
    int result_p = multiple - 240 * result_f - 12 * result_sh;
    std::cout << result_f << ' ' << result_sh << ' ' << result_p << std::endl;

    return 0;

}
