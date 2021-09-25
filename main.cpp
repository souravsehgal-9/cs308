#include <iostream>
#include "functions.h"
using namespace std;
int main()
{
    cout<<endl;
    print_hello();
    cout << endl;
    cout << "The factorial of 11 is " << factorial(11) << endl;
    int x = 56;
    int y = 92;
    cout << "The gcd of " << x << " " << y << " is " << gcd(x, y) << endl;
}
