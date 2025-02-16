#include <iostream>

enum Etype {
    laborer, secretary, manager, accountant, executive, researcher
};

struct Date {
    int month;
    int day;
    int year;
};

struct Employee {
    int number_employee;
    float salary;
    Etype etype;
    Date date;
};

int main() {
    std::cout << "Введите номер, величину зарплаты, число-должность(0,1,2,3,4,5) и дату принятия на работу"<< '\n';
    Employee employee;
    char sep_1;
    char sep_2;
    int a;
    std::cin >> employee.number_employee >> employee.salary >> a 
        >> employee.date.day >> sep_1 >> employee.date.month 
        >> sep_2 >> employee.date.year;

    std::cout << employee.number_employee << '\n' << employee.salary << '\n'; 
        
    switch (a) {
        case 0:
            std::cout << "accountant";
            break;
        case 1:
            std::cout << "laborer";
            break;
        case 2:
            std::cout << "secretary";
            break;
        case 3:
            std::cout << "manager";
            break;
        case 4:
            std::cout << "executive";
            break;
        case 5:
            std::cout << "researcher";
            break;
    }
    std::cout << '\n';
    std::cout << employee.date.day << sep_1 << employee.date.month 
        << sep_2 << employee.date.year;
    return 0;
}

