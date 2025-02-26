#include <iostream>

class Int {
    private:
     int i;
    public:
     Int() : i(0){}
     Int(int ii){
	i = ii;
     }
     void cin_int() {
	std::cin >> i;
     }
     void cout_int() {
	std::cout << i << std::endl;
     }
     void add(const Int& a, const Int& b) {
	i = a.i + b.i;
     } 
};


int main() {
    Int a, b, c;
    a.cin_int();
    b.cin_int();
    c.add(a, b);
    c.cout_int();
    return 0;
}

