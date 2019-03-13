#include <iostream>
#include <string>
#include <vector>

std::vector<int> findMatches(std::string sString, std::string sSubstring);

std::vector<int> findMatches2(std::string sString, std::string sSubstring);

int main() {
    std::string sString = "to be or not to be";

    std::vector<int> iMatches = findMatches2(sString, "be");

    for(auto i: iMatches)
        std::cout << i << std::endl;

    return 0;
}

std::vector<int> findMatches(std::string sString, std::string sSubstring) {
    std::vector<int> iMatches;

    for(int i = 0; i < sizeof(sString); i++) {
        int j = i;
        bool flag = true;
        for(char c: sSubstring) {
            if(c != sString[j]) {
                flag = false;
                break;
            }
            j++;
        }
        if(flag)
            iMatches.push_back(i);
    }
    return iMatches;
}

std::vector<int> findMatches2(std::string sString, std::string sSubstring) {
    std::vector<int> iMatches;
    int index = 0;
    index = sString.find(sSubstring, index);
    while(index != std::string::npos) {
        iMatches.push_back(index);
        index = sString.find(sSubstring, index + 1);
    }
    return iMatches;
}