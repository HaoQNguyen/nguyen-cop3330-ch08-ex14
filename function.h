#include <iostream>

using namespace std;

int sum(int a, int b)
{
    a = a + 1;
    return a + b;
}

int sum2(const int a, int b)
{
    // a = a + 1;
    return a + b;
}