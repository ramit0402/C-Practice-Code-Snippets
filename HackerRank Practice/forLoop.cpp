#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int start, end;
    string arrayOfNumbers[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d", &start);
    scanf("%d", &end);

    for(int i = start; i <= end; i++) {
        if(i > 9) {
            if(i % 2 == 0)
                printf("even\n");
            else
                printf("odd\n");
        }
        else
            printf("%s\n", arrayOfNumbers[i].c_str());
    }
    return 0;
}