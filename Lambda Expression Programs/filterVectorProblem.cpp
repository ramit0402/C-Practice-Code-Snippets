#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>

std::vector<int> randomListGenerator(int startIndex, int endIndex, int length);

int main() {
    std::vector<int> randomNumberList, filteredVectorList;

    randomNumberList = randomListGenerator(1, 50, 10);

    std::cout << "Random Numbers List: ";
    for(int x: randomNumberList) {
        std::cout << x << " ";
    }
    
    std::cout << std::endl;
    std::copy_if(randomNumberList.begin(), randomNumberList.end(), std::back_inserter(filteredVectorList), [](int x){return x % 2 == 0;});
    std::cout << "Filtered List: ";
    for(int x: filteredVectorList) {
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