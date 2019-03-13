#include<iostream>
#include<vector>

bool isPrime(int num);

std::vector<int> getPrimeList(int limit);

int main() {
    int limit = 0;
    std::vector<int> primeNumList;
    std::cout << "Enter the limit: ";
    std::cin >> limit;

    primeNumList = getPrimeList(limit);

    std::cout << "List of prime numbers are: ";
    for(int x: primeNumList) {
        std::cout << x << " ";
    }

    return 0;
}

bool isPrime(int num) {
    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0)
            return false;
    }
    return true;
}

std::vector<int> getPrimeList(int limit) {
    std::vector<int> primeNumList;

    for(int i = 2; i <= limit; i++) {
        if(isPrime(i)) {
            primeNumList.push_back(i);
        }
    }

    return primeNumList;
}