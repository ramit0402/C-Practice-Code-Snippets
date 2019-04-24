#include <iostream>
#include <vector>
#include <string>
#include <sstream>

void solveEquation(std::string equation);

std::vector<std::string> stringToVector(std::string sString, char seperator);

int main() {
    std::string equation = "";

    std::cout << "Enter the Equation ";
    std::getline(std::cin, equation);

    solveEquation(equation);
    return 0;
}

void solveEquation(std::string equation) {
    std::vector<std::string> equationVector = stringToVector(equation, ' ');

    int a = std::stoi(equationVector[2]);
    int b = std::stoi(equationVector[4]);

    std::cout << "value of x is " << (b - a) << std::endl;
}

std::vector<std::string> stringToVector(std::string sString, char seperator) {
    std::vector<std::string> sSepetaredVector;

    std::stringstream ss(sString);
    std::string sIndividual;

    while(getline(ss, sIndividual, seperator)) {
        sSepetaredVector.push_back(sIndividual);
    }
    return sSepetaredVector;
} 