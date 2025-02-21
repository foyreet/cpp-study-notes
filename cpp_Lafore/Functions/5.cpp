#include <iostream>

long hms_to_secs(int, int, int);

int main() {
    int h, m, s;
    do {
        std::cout << "Введите кол-во часов, минут, секунд: " << std::endl;
        std::cin >> h >> m >> s;
        long result = hms_to_secs(h, m, s);
        std::cout << "Кол-во секунд равно: " << result << std::endl;
    } while (h != 0 && m != 0 && s != 0);
    return 0;
}

long hms_to_secs(int h, int m, int s) {
    long total_sec = h * 3600 + m * 60 + s;
    return total_sec;
}
