#include <iostream>

int main() {
    int i = 5;
    int *pi = &i; // pi указывает на переменную типа int 
    int **ppi = &pi; // ppi указывает на указатель pi на переменную типа int
    std::cout << "pi " << *pi << std::endl;                     
    std::cout << "ppi " << **ppi << std::endl;
    return 0;
    
}
