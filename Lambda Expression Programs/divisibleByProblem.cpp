#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>

std::vector<int> randomListGenerator(int startIndex, int endIndex, int length);

int main() {
    std::vector<int> randomNumberList, filteredNumberList;
    int divisibleNumber;

    std::cout << "Enter the number to which numbers should be divisoble by: ";
    std::cin >> divisibleNumber;

    randomNumberList = randomListGenerator(1, 50, 10);

    std::cout << "Random Numbers List: ";
    for(int x: randomNumberList) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    std::copy_if(randomNumberList.begin(), randomNumberList.end(), std::back_inserter(filteredNumberList), [divisibleNumber](int x){return x % divisibleNumber == 0;});
    std::cout << "Filtered List: ";
    for(int x: filteredNumberList) {
        std::cout << x << " ";
    }

    return 0;
}

std::vector<int> randomListGenerator(int startIndex, int endIndex, int length) {
    std::vector<int> randomNumberList;
    int diff = endIndex - startIndex + 1;
    int secretNum = 0;

    srand(time(NULL));

    for(int i = 0; i < length; i++) {
        secretNum = startIndex + (std::rand() % diff);
        randomNumberList.push_back(secretNum);
    }
    return randomNumberList;
}