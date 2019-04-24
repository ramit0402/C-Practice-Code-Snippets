#include<iostream>

int getFactorial(int num);

int main() {
    int num, factorial;
     std::cout << "Enter the number: ";
     std::cin >> num;

     factorial = getFactorial(num);

     std::cout << "Factorial of " << num << " is " << factorial;
    return 0;
}

int getFactorial(int num) {
    if(num == 1)
        return 1;
    return num * getFactorial(num - 1);
}