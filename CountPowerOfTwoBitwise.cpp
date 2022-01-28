#include "Header.h"

bool isPowerOfTwo(int nNum)
{
    return (nNum > 0) && !(nNum & (nNum - 1));
}
int countPairBitwiseAndPow2(vector<int> n)
{
    int nCounter = 0;
    int nSizeLen = (int)n.size();
    int nPadding = 0;

    if (nSizeLen % 2 != 0)
        nPadding = 1;

    for (int i = 0; i < nSizeLen; i++)
    {
        for (int j = i + 1; j < nSizeLen; j++)
        {
            if (isPowerOfTwo((n[i] & n[j])))
            {
                nCounter++;
            }
            cout << "(" << n[i] << "," << n[j] << ")";
        }
        cout << endl;

    }
    return nCounter;
}