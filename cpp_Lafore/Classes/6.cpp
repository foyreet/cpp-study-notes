#include <iostream>
#include <string>

class Date {
  private:
    int month;
    int day;
    int year;
  public:
    Date(int month, int day, int year) : month(month), day(day), year(year) {}

    void get_date() const{
	std::cout << month << '/' << day << '/' << year << std::endl;
    }
};

class Employee {
  private:
    int id;
    long long salary;
    Date date;

  public:

    enum Etype {
	laborer, secretary, manager, accountant, executive, researcher
    };	
  private:
    Etype position;
  public:
    Employee(int id, long long salary, int m, int d, int y, Etype pos) : 
	id(id), salary(salary), date(m, d, y), position(pos) {}

    std::string show_position() const  {
	switch (position) {
	    case laborer:
	     return "laborer";
	    case secretary:
	     return "secretary";
	    case manager:
	     return "manager";
	    case accountant:
	     return "accountant";
	    case executive:
	     return "executive";
	    case researcher:
	     return "researcher";
	    default:
	     return "Unknown position";
	}
    }
      
    void get_employee() const {
	std::cout << "id " << id << " salary " << salary << std::endl;
	std::cout << "Date: ";
	date.get_date();
    }

};

int main() {
    Employee emp(5, 10000, 11, 4, 2024, Employee::laborer);
    emp.get_employee();
    std::cout << "Должность " << emp.show_position();
}
