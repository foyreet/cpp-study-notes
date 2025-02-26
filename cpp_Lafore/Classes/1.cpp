#include <iostream>

class Int {
    private:
      int i;
    public:
      Int() {
	this->i = 0;
      }
      Int(int i) {
	this->i = i;
      }

      void cout() {
	std::cout << this->i << std::endl;
      }

      int add(Int* other) {
	return this->i + other->i;		
      }
};

int main() {
    Int x(5), y(6);
    std::cout << x.add(&y) << std::endl;
}
