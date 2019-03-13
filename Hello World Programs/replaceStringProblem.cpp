#include <iostream>
#include <string>
#include <vector>

std::vector<int> findStringIndex(std::string sString, std::string sSearchString);

std::string replaceStringWith(std::string sString, std::string sReplaceString, int index, int length);

int main() {
    std::string sString = "to know to not to know";
    std::string replaceString = "know";
    std::string replacedString = "be";
    
    std::vector<int> iStringIndex = findStringIndex(sString, replaceString);

    for(int i = iStringIndex.size() - 1; i >= 0; i--) {
        //std::cout << i;
        sString = replaceStringWith(sString, replacedString, iStringIndex[i], replaceString.length());
    }

    std::cout << sString;

    return 0;
}

std::vector<int> findStringIndex(std::string sString, std::string sSearchString) {
    std::vector<int> iMatches;
    int index = 0;
    index = sString.find(sSearchString, index);
    while(index != std::string::npos) {
        iMatches.push_back(index);
        index = sString.find(sSearchString, index + 1);
    }
    return iMatches;
}

std::string replaceStringWith(std::string sString, std::string sReplaceString, int iIndex, int length) {
   sString.replace(iIndex, length, sReplaceString);
   return sString;
}