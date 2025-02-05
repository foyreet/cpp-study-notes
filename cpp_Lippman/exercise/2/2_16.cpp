#include <iostream>

int main(){
    int i = 1;
    int &r1 = i;
    double d = 2.13;
    double &r2 = d;
    std::cout << "r2 " << r2 << std::endl;
    i = r2;
    std::cout << "i " << i << std::endl;
    r2 = r1;
    std::cout << "r2 " << r2 << std::endl;
    r1 = d;
    std::cout << "r1 " << r1 << std::endl;
    return 0;
}
