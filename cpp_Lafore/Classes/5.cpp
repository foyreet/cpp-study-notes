#include <iostream>

class Date {
  private:
    int month;
    int day;
    int year;
  public:
    Date() : month(2), day(28), year(2025) {}

    bool is_valid() {
	if (month == 0 || month > 12) {
	    return false;
	} 

	if (day == 0 || day > days_in_month(year, month)) {
	    return false;
	}

	return true;	
    }

    int days_in_month(int year, int month) {
	switch (month) {
	    case 2:
	      return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 29 : 28;
	    case 4: case 6: case 9: case 11:
	      return 30;
	    default:
	      return 31;
	}
    }
    void get_date() {
    	char slash1, slash2;
	std::cin >> month >> slash1 >> day >> slash2 >> year;

	if (!is_valid()) {
	    std::cerr << "Ошибка некорректная дата" << std::endl;
	    month = day = year = 0;
	}
    }   

    void show_date() const {
	std::cout << month << '/' << day << '/' << year; 
    }
}; 

int main() {
    Date date;
    date.get_date();
    date.show_date();
}
