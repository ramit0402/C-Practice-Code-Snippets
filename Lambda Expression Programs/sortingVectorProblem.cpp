#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>

std::vector<int> randomListGenerator(int startIndex, int endIndex, int length);

int main() {

    std::vector<int> randomNumberList;

    randomNumberList = randomListGenerator(1, 50, 10);

    std::cout << "Random Numbers List: ";
    for(int x: randomNumberList) {
        std::cout << x << " ";
    }
    
    std::cout << std::endl;

    std::sort(randomNumberList.begin(), randomNumberList.end(), [](int x, int y){return x < y;});

    std::cout << "Sorted List: ";
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