#include<iostream>
#include<vector>
#include<functional>

int main() {
    int number;

    std::cout << "Enter the number: ";
    std::cin >> number;
    std::vector<int> fibonacciList(number + 1);

    std::function<int(int)> Fib = [&](int n) { 
        int fibo;
        if(fibonacciList.at(n) != 0) 
            fibo = fibonacciList.at(n);
        else if(n == 0) 
            fibo = n;
        else if(n == 1) {
            fibo = n;
            fibonacciList.at(1) = fibo;
        }
        else {
            fibo = Fib(n - 1) + Fib(n - 2);
            fibonacciList.at(n) = fibo;
        }
        return fibo;
    };

    Fib(number);

    for(int x: fibonacciList) {
        std::cout << x << " ";
    }
    return 0;
};