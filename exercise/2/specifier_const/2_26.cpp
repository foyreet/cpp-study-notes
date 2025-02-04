#include <iostream>

int main() {
    const int buf; // недопустимо, потому что не проинициализировано
    int cnt = 0; // допустимо
    const int sz = cnt // допустимо если cnt определено ранее
    ++cnt; ++sz; // ++cnt допустимо ++sz недопустимо
}
