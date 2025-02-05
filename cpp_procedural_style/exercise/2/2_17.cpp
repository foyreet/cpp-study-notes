#include <iostream>

int main() {
    int i;
    int &ri = i;
    i = 5;
    ri = 10;
    std::cout << "i " << i << " " << "ri " << ri << std::endl;
    return 0;
}
