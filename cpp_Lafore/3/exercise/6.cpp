#include <iostream>
/*Измените программу factor, приведенную в этой главе, таким образом, чтобы она циклически запрашивала ввод пользователем числа и вычисля- ла его факториал, пока пользователь не введет 0. В этом случае програм- ма должна завершиться. При необходимости вы можете использовать со- ответствующие операторы программы factor в цикле do или while.
 */
int main() {
    unsigned int numb;
    unsigned long fact = 1;
    while (numb != 0) {
        std::cout << "Введите целое число: ";
        std::cin >> numb;
        for (int j = numb; j > 0; j--) {
            fact *= j;
        }
        std::cout << "Факториал числа равен " << fact << std::endl;
    }
    return 0;
}
