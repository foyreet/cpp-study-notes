#include <iostream>

enum Etype {
    laborer, secretary, manager, accountant, executive, researcher
};

int main() {
    std::cout << "Введите 1-ую букву должности" << std::endl;
    std::cout << "laborer, secretary, manager, accountant, executive, researcher" << std::endl;
    char ch;
    Etype etype;
    std::cin >> ch;
    switch (ch) {
        case 'a':
            etype = accountant;
            break;
        case 'l':
            etype = laborer;
            break;
        case 's':
            etype = secretary;
            break;
        case 'm':
            etype = manager;
            break;
        case 'e':
            etype = executive;
            break;
        case 'r':
            etype = researcher;
            break;
    }

    std::cout << "Полное название должности " << std::endl;
    
    switch (etype) {
        case accountant:
            std::cout << "accountant";
            break;
        case laborer:
            std::cout << "laborer";
            break;
        case secretary:
            std::cout << "secretary";
            break;
        case manager:
            std::cout << "manager";
            break;
        case executive:
            std::cout << "executive";
            break;
        case researcher:
            std::cout << "researcher";
            break;
    }
    return 0;        
}
