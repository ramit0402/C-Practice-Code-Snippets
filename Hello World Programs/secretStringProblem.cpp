#include<iostream>
#include<string>

int main() {
    std::string sNormalStr, sSecretString = "";

    std::cout << "Enter the String: ";
    std::getline(std::cin, sNormalStr);

    for(int i = 0; i < sNormalStr.length(); i++) {
        char individualChar = sNormalStr[i];
        if(individualChar != ' ')
            sSecretString += std::to_string((int) individualChar);
        else
            sSecretString += " ";
    }

    std::cout << "Secret string: " << sSecretString;

    return 0;
}