#include <iostream>

int main() {
    std::string sAge = "";
    int iAge;

    std::cout << "Enter your age: ";
    getline(std::cin, sAge);
    iAge = std::stoi(sAge);

    if(iAge < 5) {
        std::cout << "Too young for school";
    }
    else if(iAge == 5) {
        std::cout << "Go to Kindergarten";
    }
    else if(iAge > 5 && iAge < 18) {
        std::cout << "Go to class: " << (iAge - 5);
    } else {
        std::cout << "Go to College";
    }

    return 0;
}