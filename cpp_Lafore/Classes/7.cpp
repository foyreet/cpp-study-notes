#include <iostream>

class Angle {
  private:
    int degrees;
    float minutes;
    char orientation;
  public:
    Angle(int d, float m, char o) : degrees(d), minutes(m), orientation(o) {}

    void display() {
	std::cout << degrees << "\u00B0" << minutes << "'" << orientation << std::endl;
    }    
};

int main() {
    Angle angle(179, 59.9, 'E');
    angle.display();
}
