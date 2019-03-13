#include<iostream>

int fibonacci(int n);

int main() {
    int number = 7;

    int fibonacciNumber = fibonacci(number);
    std::cout << "Fibonacci of " << number << " is: " << fibonacciNumber;
    return 0;
}

int fibonacci(int n) {
    if(n <= 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}