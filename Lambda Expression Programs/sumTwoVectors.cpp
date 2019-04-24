#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>

std::vector<int> randomListGenerator(int startIndex, int endIndex, int length);

int main() {
    std::vector<int> randomNumberList1, randomNumberList2, sumVectorList(10);

    randomNumberList1 = randomListGenerator(1, 49, 10);
    randomNumberList2 = randomListGenerator(50, 99, 10);

    std::cout << "Random Numbers List 1: ";
    for(int x: randomNumberList1) { 
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "Random Numbers List 2: ";
    for(int x: randomNumberList2) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::transform(randomNumberList1.begin(), randomNumberList1.end(), randomNumberList2.begin(), sumVectorList.begin(), [](int x, int y){ return x + y; });

    std::cout << "Sum of two list: ";
    for(int x: sumVectorList) {
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