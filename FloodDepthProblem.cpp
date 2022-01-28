#include "Header.h"

int floodDepth(vector<int>& A)
{
    // write your code in C++14 (g++ 6.2.0)
    int left = 0;
    int right = (int)A.size() - 1;
    int maxHeightFromLeft = 0;
    int maxHeightFromRight = 0;
    int ans = 0;

    while (left < right)
    {
        if (A[left] <= A[right])
        {
            maxHeightFromLeft = std::max(maxHeightFromLeft, A[left]);
            ans = std::max(ans, maxHeightFromLeft - A[left++]);
        }
        else
        {
            maxHeightFromRight = std::max(maxHeightFromRight, A[right]);
            ans = std::max(ans, maxHeightFromRight - A[right--]);
        }
    }
    return ans;
}