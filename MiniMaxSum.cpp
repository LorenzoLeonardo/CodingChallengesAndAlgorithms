#include "Header.h"

void miniMaxSum(vector<int> arr) 
{

    sort(arr.begin(), arr.end());

    long nMin = 0;
    long nMax = 0;

    for (int i = 0; (i < 4) && (i < arr.size()); i++)
    {
        nMin += (long)arr[i];
        nMax += (long)arr[(arr.size() - 1) - i];
    }

    cout << nMin << "  " << nMax;

}