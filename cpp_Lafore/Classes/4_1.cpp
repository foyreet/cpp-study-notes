#include <iostream>

int id_index = 0;

class Employee {
    private:
     int id;
     int salary;
    public:

     Employee() {
	this->id = id_index++;
     }

     void set_salary(int salary) {
	this->salary = salary;
     }

     int get_salary() {
	return this->salary;
     }

     int get_id() {
	return this->id;
     }
};

void display_info(Employee*);

int main() {
    Employee patrick;

    patrick.set_salary(1000000);
    display_info(&patrick);
}

void display_info(Employee* employee) {
    std::cout << "id: " << (*employee).get_id() << " Salary: " << employee->get_salary();
}


