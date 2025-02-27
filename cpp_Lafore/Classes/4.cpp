#include <iostream>

class Employee {
    private:
     int id;
     static int id_unique; // Переменная для генерации уникального ID сотрудника
     long long salary;
    public:
     Employee(long long new_salary) : id(id_unique++) {
	set_salary(new_salary);
     } 

     void set_salary(long long new_salary) {
	if (new_salary >= 0) {
	    salary = new_salary;
	} else {
	    std::cout << "Неверный ввод" << std::endl;
	    salary = 0;
	}
     }

     int get_id() const {return id;}
     long long get_salary() const {return salary;}

     void display() const {
	std::cout << "Id: " << id << " Salary: " << salary << std::endl;
     }
};

int Employee::id_unique = 1;

int main() {
    Employee emp1(-10000);
    Employee emp2(20000);
    Employee emp3(30000);
    emp1.display();
    emp2.display();
    emp3.display();
}
