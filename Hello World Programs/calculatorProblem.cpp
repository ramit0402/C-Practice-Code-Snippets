#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main() {
    std::string sInput = "";
    std::vector<std::string> sVectorOp;
    std::string sIndividualOp;
    char cSpace = ' ', cOperator;
    double dOperand1, dOperand2;

    std::cout << "Enter any expression: ";
    getline(std::cin, sInput );

    std::stringstream ss(sInput);

    while(getline(ss, sIndividualOp, cSpace)) {
        sVectorOp.push_back(sIndividualOp);
    }

    dOperand1 = stod(sVectorOp[0]);
    dOperand2 = stod(sVectorOp[2]);
    cOperator = sVectorOp[1][0];

    if(cOperator == '+') {
        std::cout << dOperand1 << " + " << dOperand2 << " = " << (dOperand1 + dOperand2);
    } else if(cOperator == '-') {
        std::cout << dOperand1 << " - " << dOperand2 << " = " << (dOperand1 - dOperand2);
    } else if(cOperator == '*') {
        std::cout << dOperand1 << " * " << dOperand2 << " = " << (dOperand1 * dOperand2);
    } else if(cOperator == '/') {
        std::cout << dOperand1 << " / " << dOperand2 << " = " << (dOperand1 / dOperand2);
    } else {
        std::cout << "Incorrect expression/Expression not supported";
    }

    return 0;
}