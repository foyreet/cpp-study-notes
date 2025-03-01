#include <iostream>

class Fraction {
    private:
      int numerator;
      int denominator;
    public:
      Fraction() {}
      Fraction(int num, int den) : numerator(num), denominator(den) {}

      void display() {
	std::cout << numerator << '/' << denominator << std::endl;
      }

      void add(Fraction f1, Fraction f2) {
	numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
	denominator = f1.denominator * f2.denominator;
      }
};

int main() {
    Fraction f1(3,4), f2(3,5), f_add;
    f_add.add(f1, f2);
    f_add.display();
}


