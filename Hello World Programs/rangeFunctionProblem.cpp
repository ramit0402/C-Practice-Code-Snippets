#include<iostream>
#include<vector>
#include<numeric>

std::vector<double> Range(int startIndex, int endIndex, double incrementValue);

int main() {
    int startIndex, endIndex;
    double incrementValue;
    std::vector<double> dVector;

    std::cout << "Enter start index: ";
    std::cin >> startIndex;
    std::cout << "Enter end index: ";
    std::cin >> endIndex;
    std::cout << "Enter increment value: ";
    std::cin >> incrementValue;

    dVector = Range(startIndex, endIndex, incrementValue);

    std::cout << "Printing values in vector: " << std::endl;
    for(int i = 0; i < dVector.size(); i++) {
         std::cout << dVector[i] << std::endl;
     }

    return 0;
}

std::vector<double> Range(int startIndex, int endIndex, double incrementValue) {
     std::vector<double> dVector;

     for(double i = startIndex; i <= endIndex; i+=incrementValue) {
         dVector.push_back(i);
     }

     return dVector;
}