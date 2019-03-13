#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main(int argc, char** argv){
    std::cout << "Hello World" << std::endl;
    std::cout << "Ramit" << std::endl;

    if(argc != 1) {
        std::cout << "You entered " << argc << " arguments" << std::endl;
    }

    for(int i = 0; i < argc; i++) {
        std::cout << argv[i] << std::endl;
    }

    return -1;
}

//Compile: 
//g++ helloWorld.cpp -std=c++11 -o helloWorld