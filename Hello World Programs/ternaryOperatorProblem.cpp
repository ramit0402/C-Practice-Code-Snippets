#include<iostream>

int main() {
    int age;
    bool canVote;

    std::cout << "Enter your age: ";
    std::cin >> age;

    canVote = (age >= 18) ? true : false; //ternary operator

    std::cout.setf(std::ios::boolalpha);
    std::cout << "Can he vote: " << canVote;
    return 0;
}