#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arrayOfNumbers[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if(n > 9)
        printf("Greater than 9");
    else
        printf("%s", arrayOfNumbers[n].c_str());

    return 0;
}
