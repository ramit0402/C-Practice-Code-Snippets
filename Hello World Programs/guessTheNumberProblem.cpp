#include<iostream>
#include<ctime>

int main() {
    srand(time(NULL));
    int secretNum = std::rand() % 11;
    int guess = -1;

    while(guess != secretNum) {
        std::cout << "Guess the number: ";
        std::cin >> guess;

        if(guess > secretNum)
            std::cout << "too Big..." << std::endl;
        else if(guess < secretNum)
            std::cout << "too Small..." << std::endl;
    }
    std::cout << "You Guessed it..";
}