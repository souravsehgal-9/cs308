#include "functions.h"
#include <iostream>
#include <stdexcept>
using namespace std;
int factorial(int n)
{
    if (n < 0)
    {
        cout<<"Invalid Input. Please enter positive integers only\n"<<endl;
        return INT_MIN;
    }
    if (n != 1)
    {
        return (n * factorial(n - 1));
    }
    else
        return 1;
}
