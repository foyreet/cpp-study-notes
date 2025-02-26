#include <iostream>

class Post {
    private:
      const double TICKET_PRICE;

      unsigned int paying_cars;
      unsigned int unpaing_cars;
    public:
      Post() : paying_cars(0), unpaing_cars(0), TICKET_PRICE(0.5) {}
      void account_car(bool paid) {
	if (paid) {
	    paying_cars++;
	} else {
	    unpaing_cars++;
	}
      }

      double get_missed_income() {
	return unpaing_cars * TICKET_PRICE;
      }
      
      double get_income() {
	return paying_cars * TICKET_PRICE;
      }
      
      void display() {
	std::cout << get_missed_income() << ' ' << get_income() << '\n';
      }
};

int main() {
    Post post;
    while (true) {
	bool paid;
	std::cin >> paid;
	if (std::cin.fail()) {
	    std::cout << "Invalid input\n";
	    break;
	}
	post.account_car(paid);
	post.display();
    }
}
