#include <iostream>
int main() {
    // Переменную типа const нельзя изменять
    const int x = 5;
    x = 6; // будет ошибка

    // Переменную типа const нужно всегда инициализировать
    const int y = 7;
    const int k; // ошибка: k - неинициализированная константа
    
    // Инициализация и константы 
    int i = 8;
    const int ki = i; // ok: значение i копируется в ki
    int j = ki; // ok: значение ki копируется в j
                
    // Определение и инициализация константы, которая доступна для других файлов

    // file_1.cpp
    extern const int x = 10;

    //file_1.h
    extern const int x;
    return 0;
}
