#include <iostream>
#include <string>
#include <vector>

std::string TrimWhitespaces(std::string sString);

int main() {
    std::string sString = "   Hi this is Ramit   ";
    std::string sTrimmedString = TrimWhitespaces(sString);

    std::cout << "*" << sTrimmedString << "*" << std::endl;

    return 0;
}

std::string TrimWhitespaces(std::string sString) {
    std::string sTrimmedString = sString;
    std::string sWhitespaceChar = " \n\t\f\r";
    sTrimmedString.erase(sTrimmedString.find_last_not_of(sWhitespaceChar) + 1);
    sTrimmedString.erase(0, sTrimmedString.find_first_not_of(sWhitespaceChar));
    
    return sTrimmedString;
}