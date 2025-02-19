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
    employee.etype = static_cast<Etype>(a);
    std::cout << employee.number_employee << '\n' << employee.salary << '\n'; 
        
    switch (employee.etype) {
        case accountant:
            std::cout << "accountant";
            break;
        case laborer:
            std::cout << "laborer";
            break;
        case secretary:
            std::cout << "secretary";
            break;
        case manager:
            std::cout << "manager";
            break;
        case executive:
            std::cout << "executive";
            break;
        case researcher:
            std::cout << "researcher";
            break;
    }
    std::cout << '\n';
    std::cout << employee.date.day << sep_1 << employee.date.month 
        << sep_2 << employee.date.year;
    return 0;
}

