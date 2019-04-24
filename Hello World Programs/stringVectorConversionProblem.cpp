#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::string VectorToString(std::vector<std::string> sVector, char seperator);

std::vector<std::string> StringToVector(std::string sString, char seperator);

int main() {
    std::vector<std::string> sVector(3);
    sVector[0] = "Ramit";
    sVector[1] = "Shrijan";
    sVector[2] = "Sayali";
    std::string sConvatinatedVector = VectorToString(sVector, ' ');

    std::cout << sConvatinatedVector << std::endl;

    std::vector<std::string> sString = StringToVector(sConvatinatedVector, ' ');
    for(auto y: sString) {
        std::cout << y << std::endl;
    }
    return 0;
}

std::string VectorToString(std::vector<std::string> sVector, char seperator) {
    std::string sConvatinatedString = "";
    for(int i = 0; i < sVector.size(); i++) {
        sConvatinatedString += sVector[i] + seperator;
    }
    return sConvatinatedString;
}

std::vector<std::string> StringToVector(std::string sString, char seperator) {
    std::vector<std::string> sSepetaredVector;

    std::stringstream ss(sString);
    std::string sIndividual;

    while(getline(ss, sIndividual, seperator)) {
        sSepetaredVector.push_back(sIndividual);
    }
    return sSepetaredVector;
} 