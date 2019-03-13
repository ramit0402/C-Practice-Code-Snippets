#include<iostream>
#include<vector>
#include<ctime>

std::vector<int> randomListGenerator(int startIndex, int endIndex, int length);

int main() {
    int startIndex, endIndex, length;
    std::vector<int> randomNumberList;

    std::cout << "Enter Start index: ";
    std::cin >> startIndex;
    std::cout << "Enter End index: ";
    std::cin >> endIndex;
    std::cout << "Enter Length of the Random Numbers List: ";
    std::cin >> length;

    randomNumberList = randomListGenerator(startIndex, endIndex, length);

    std::cout << "Random Numbers List: ";
    for(int x: randomNumberList) {
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