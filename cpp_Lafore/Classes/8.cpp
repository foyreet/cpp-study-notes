#include <iostream>

class Counter {
    private:
      static int counter;
      int number;
    public:
      Counter() {
	counter++;
	number = counter;
      }
      
      void display() const {
	std::cout << "Мой порядковый номер: " << number << std::endl;
      }
      
};

int Counter::counter = 0;

int main() {
    Counter c1;
    c1.display();
    Counter c2;
    c2.display();
    Counter c3;
    c3.display();
}

