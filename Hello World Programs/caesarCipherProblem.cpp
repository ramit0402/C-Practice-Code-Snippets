#include <iostream>
#include <string>

std::string caesarCipher(std::string sString, int cipher, bool bEncDec);

int main() {
    std::string sString = "Make me secret";
    std::string sEncryptedText = "";
    std::string sDecryptedText = "";
    int cipher = 31;

    sEncryptedText = caesarCipher(sString, cipher, true);
    sDecryptedText = caesarCipher(sString, cipher, false);

    std::cout << "Encrypted Text: " << sEncryptedText << std::endl;
    std::cout << "Decrypted Text: " << sDecryptedText << std::endl;
    return 0;
}

std::string caesarCipher(std::string sString, int cipher, bool bEncDec) {
    std::string sCipherText = "";
    if(!bEncDec)
        cipher *= -1;

    for(char c: sString) {
        if(isupper(c)) {
            int i = (int)c - 64;
            i += cipher;
            while(i < 0) 
                i = 26 + i;
            i %= 26;
            if(i == 0) 
                i = 26;
            i = i + 64;
            c = (char)i; 
        }
        else if(islower(c)) {
            int i = (int)c - 96;
            i += cipher;
             while(i < 0) 
                i = 26 + i;
            i %= 26;
            if(i == 0) 
                i = 26;
            i = i + 96;
            c = (char)i;
        }
        sCipherText  += c;
    }

    return sCipherText;
}