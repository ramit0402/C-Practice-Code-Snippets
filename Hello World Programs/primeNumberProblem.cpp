#include<iostream>
#include<vector>

bool isPrime(int num);

int main() {
    int num = 0;
    std::cout << "Enter the number to check: ";
    std::cin >> num;

    std::cout.setf(std::ios::boolalpha);
    std::cout << "Is " << num << " Prime: " << isPrime(num);

    return 0;
}

bool isPrime(int num) {
    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0)
            return false;
    }
    return true;
}