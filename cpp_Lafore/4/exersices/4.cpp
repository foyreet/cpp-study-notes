#include <iostream>

struct employee {
    int number_employee;
    float salary;
};

int main() {
    std::cout << "Введите данные 3-ёх сотрудников" << std::endl;
    employee employee_1, employee_2, employee_3;
    std::cout << "1-ый сотрудник: " << std::endl;
    std::cin >> employee_1.number_employee >> employee_1.salary; 
    std::cout << "Номер 1 - ого сотрудника " << employee_1.number_employee
        << " Зарплата 1-ого сотрудника " << employee_1.salary << '\n';
    std::cout << "2-oй сотрудник: " << std::endl;
    std::cin >> employee_2.number_employee >> employee_2.salary; 
    std::cout << "Номер 2 - ого сотрудника " << employee_2.number_employee
        <<  " Зарплата 2-ого сотрудника " << employee_2.salary << '\n';
    std::cout << "3-ий сотрудник: " << std::endl;
    std::cin >> employee_3.number_employee >> employee_3.salary;
    std::cout << "Номер 3 - ого сотрудника " << employee_3.number_employee
        << " Зарплата 3-ого сотрудника " << employee_3.salary << '\n';
    return 0;
}
