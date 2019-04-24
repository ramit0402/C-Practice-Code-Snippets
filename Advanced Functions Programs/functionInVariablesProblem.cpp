#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include<functional>
 
// 1. Created to store as a variable and to
// pass into other functions
double MultBy2(double num) {
    return num * 2;
}
 
int main()
{
    //You can store functions as variables
    auto times2 = MultBy2;
    std::cout << "5 * 2 = " << times2(5) << "\n";
    return 0;
}