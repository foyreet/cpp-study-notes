#include <iostream>
#include <string>

int main() {
    std::string s = "abc";

    try {
	std::cout << s.at(3)<< std::endl;
    } catch(const std::out_of_range& e) {
	std::cout << "Error " << e.what() << std::endl;
    }
}

