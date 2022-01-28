#include "Header.h"

bool isSparse(int n)
{
    while (n > 0)
    {
        if ((n & 3) == 3)
            return false;
        n >>= 1;
    }
    return true;
}

int sparseBinaryDecomposition(int nGiven)
{
    int nSparse = 0;

    for (int i = 0; i <= nGiven; i++)
    {
        if (isSparse(i) && isSparse(nGiven - i))
        {
            nSparse = i;
            break;
        }
    }
    return nSparse;
}

