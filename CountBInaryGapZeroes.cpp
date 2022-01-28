#include "Header.h"

int countBinaryGapZeros(int N)
{
    // write your code in C++14 (g++ 6.2.0)
    int nRemainder = 0;
    int nQuotient = N;

    string bArray;

    do
    {
        nRemainder = nQuotient % 2;
        nQuotient = nQuotient / 2;

        bArray.insert(bArray.begin(), *to_string(nRemainder).c_str());

    } while (nQuotient != 0);


    int nCountZero = 0;
    int nMaxCountZero = 0;
    for (int i = 0; i < (int)bArray.length(); i++)
    {
        int j = i + 1;
        if (bArray[i] == '1')
        {

            while ((bArray[j] == '0') && (j < (int)bArray.length()))
            {
                nCountZero++;
                j++;
            };
        }
        else
        {
            if (nMaxCountZero < nCountZero)
                nMaxCountZero = nCountZero;
            nCountZero = 0;
        }

        if (j == (int)bArray.length())
            break;
    }

    return nMaxCountZero;
}