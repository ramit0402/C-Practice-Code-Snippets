#include<iostream>
#include<vector>
#include <numeric> 

int main() {
    std:: vector<int> iVector(10);
    std::iota(std::begin(iVector), std::end(iVector), 1);

    std::cout << "Even integers in the list are: \n";
    for(int i = 0; i < iVector.size(); i++) {
        if(iVector[i] % 2 == 0) {
            std::cout << iVector[i] << std::endl;
        }
    }

    std::cout << "Even integers in the list are: \n";
    for(auto iValue: iVector) {
        if(iValue % 2 == 0) {
            std::cout << iValue << std::endl;
        }
    }

    return 0;
}