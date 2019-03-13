#include<iostream>

void printArray(int arr[]);
void printLine(int length);
void printValue(int value);

int main() {
    int array[] = {10, 6, 4, 17, 31, 5};
    

    printArray(array);

    return 0;
}

void printArray(int *arr) {
    int arraySize = sizeof(*arr);
    printLine(arraySize);
    for(int i = 0; i < arraySize; i++) 
        printValue(i);
    std::cout << "|" << std::endl; //for closing the index line
    
    printLine(arraySize);
    for(int i = 0; i < arraySize; i++) 
        printValue(arr[i]);
    std::cout << "|" << std::endl;  //for closing the array value line
    
    printLine(arraySize);

}

void printLine(int length) {
    for(int i = 0; i < length; i++) 
        std::cout << "------";
    std::cout << std::endl;
}

void printValue(int value) {
    if(value >= 10) 
        std::cout << "| " << value << "  ";
    else 
        std::cout << "|  " << value << "  ";
}