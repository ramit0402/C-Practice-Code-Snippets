#include<iostream>
#include<functional>

int main() {
    int number;

    std::cout << "Enter the number: ";
    std::cin >> number;

    std::function<int(int)> Fib = [&Fib](int n){ return (n < 2)? n : Fib(n - 1) + Fib(n - 2);};

    std::cout << "Fibonacci of " << number << " is: " << Fib(number);
    return 0;
}