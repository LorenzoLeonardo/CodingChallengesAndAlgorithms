#include "Header.h"

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
{

    vector<int> vec;
    int nSize = 0;
    vec.insert(vec.begin(), nums1.begin(), nums1.end());
    vec.insert(vec.end(), nums2.begin(), nums2.end());

    nSize = vec.size();
    std::sort(vec.begin(), vec.end());

    if ((nSize % 2) == 1)
    {
        return (double)vec[(nSize / 2)];
    }
    else
    {
        return (double)(((double)vec[(nSize / 2) - 1] + (double)vec[(nSize / 2)]) / 2);
    }
}