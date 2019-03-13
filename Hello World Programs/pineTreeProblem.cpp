#include<iostream>

int main() {
    int height;

    std::cout << "Enter the height of the tree: ";
    std::cin >> height;

    int width = 1;
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < height - i - 1; j++) 
            std::cout << " ";
        for(int j = 0; j < width; j++) 
            std::cout << "#";
        width += 2;
        std::cout << "\n";
    }
    for(int i = 0; i < width / 2 - 1; i++)
        std::cout << " ";
    std::cout << "#";
    return 0;
}