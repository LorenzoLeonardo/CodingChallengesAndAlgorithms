#include "Header.h"

int longestSubarray(vector<int> arr)
{
    if ((int)arr.size() < 2)
        return (int)arr.size();

    int nBest = 1;
    int nBestLower = 1;
    int nBestHigher = 1;

    for (int i = 1; i < (int)arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            nBestLower = nBestLower + 1;
            nBestHigher = nBestHigher + 1;

        }
        else if (arr[i] - 1 == arr[i - 1])
        {
            nBestLower = 1 + nBestHigher;
            nBestHigher = 1;

        }
        else if (arr[i] + 1 == arr[i - 1])
        {
            nBestHigher = 1 + nBestLower;
            nBestLower = 1;

        }
        else
        {
            nBestLower = 1;
            nBestHigher = 1;
        }

        nBest = std::max(nBest, std::max(nBestLower, nBestHigher));
    }

    return nBest;
}