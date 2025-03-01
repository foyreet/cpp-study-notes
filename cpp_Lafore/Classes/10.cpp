#include <iostream>

class Ship {
  private:
    static int counter;
    int number;
    int degrees;
    float minutes;
    char orientation;

  public:
    Ship(int d, float m, char o) : 
	degrees(d), minutes(m), orientation(o) {
	    counter++;
	    number = counter;
	}
    void display() {
	std::cout << number << " " << degrees << "\u00B0" << minutes << "'" << orientation	    << std::endl;
    }
};

int Ship::counter = 0;

int main() {
    Ship ship1(23, 23.4, 'E');
    ship1.display();
    Ship ship2(24, 45.3, 'N');
    ship2.display();
}
