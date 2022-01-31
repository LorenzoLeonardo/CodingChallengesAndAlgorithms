#include "Header.h"


bool cmpoddeven(int a, int b)
{
    // If both numbers are even,
    // smaller number should
    // be placed at lower index
    if (a % 2 == 0 && b % 2 == 0)
        return a < b;

    // If both numbers are odd larger number
    // should be placed at lower index
    if (a % 2 != 0 && b % 2 != 0)
        return a < b;

    // If a is odd and b is even,
    // a should be placed before b
    if (a % 2 != 0)
        return true;

    // If b is odd and a is even,
    // b should be placed before a
    return false;
}
vector<int> sortOddAndEven(vector<int> v)
{
    //int p[] = {34, 23, 12, 43, 6, 89, 1, 35, 34, 62};

   //int n = sizeof(p) / sizeof(int);

    sort(v.begin(), v.end(), cmpoddeven);
    return v;
}