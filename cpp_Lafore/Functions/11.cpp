#include <iostream>

struct Sterling{
    int pounds;
    int shellings;
    int pence;
};

void cin_money(Sterling& sterling);
Sterling sum_money(Sterling& sterling_1, Sterling& sterling_2);
void cout_money(Sterling& sterling);

int main() {
    Sterling sum_sterling, sterling_1, sterling_2;
    cin_money(sterling_1);
    cin_money(sterling_2);    
    sum_sterling = sum_money(sterling_1, sterling_2);
    cout_money(sum_sterling);
    return 0;
}

void cin_money(Sterling& sterling) {
    std::cout << "Введите кол-во фунтов, шиллингов и пенсов " << std::endl;
    std::cin >> sterling.pounds >> sterling.shellings >> sterling.pence;
}

Sterling sum_money(Sterling& sterling_1, Sterling& sterling_2) {
    Sterling sum_sterling;
    sum_sterling.pounds = sterling_1.pounds + sterling_2.pounds;
    sum_sterling.shellings = sterling_1.shellings + sterling_2.shellings;
    sum_sterling.pence = sterling_1.pence + sterling_2.pence;
    return sum_sterling;
}

void cout_money(Sterling& sum_sterling) {
    std::cout << "Вывод суммы: " << std::endl;
    std::cout << sum_sterling.pounds << '.' << sum_sterling.shellings <<
       '.' << sum_sterling.pence << std::endl;	    
}
