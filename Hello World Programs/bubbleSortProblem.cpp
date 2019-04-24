#include<iostream>
#include<vector>

void bubbleSort(std::vector<int>& iVector);

int main() {
    std::vector<int> iVector;
    int array[] = {10, 15, 13, 9, 4, 7};
    iVector.assign(array, array + 6);
    bubbleSort(iVector);

    std::cout << "Sorted Vector: ";
    for(int x: iVector) {
        std::cout << x << " ";
    }
    return 0;
}


void bubbleSort(std::vector<int>& iVector) {
    int i = iVector.size() - 1;
    while(i >= 1) {
        int j = 0;
        while(j < i) {
            //std::cout << iVector[j + 1] << std::endl;
            if(iVector[j] > iVector[j + 1]) {
                int temp = iVector[j];
                iVector[j] = iVector[j + 1];
                iVector[j + 1] = temp;
            }
            j++;
        }
        i--;
    }
}