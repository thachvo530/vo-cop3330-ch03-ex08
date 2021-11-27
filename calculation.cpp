#include <iostream>
#include "header.h"

using namespace std;

void calculation(int n)
{
    if (n % 2 == 0)
        cout << "The number " << n << " is an even number.";
    
    else {
        cout << "The number " << n << " is an odd number.";
    }
}