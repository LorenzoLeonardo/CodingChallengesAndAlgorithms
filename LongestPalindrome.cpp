#include "Header.h"

string longestPalindrome(string s)
{
    long maxLength = 1;
    long start = 0;
    long len = s.length();
    long low, high;

    for (long i = 1; i < len; ++i)
    {
        low = i - 1;
        high = i;
        while (low >= 0 && high < len
            && s[low] == s[high])
        {
            --low;
            ++high;
        }

        ++low; --high;
        if (s[low] == s[high] && high - low + 1 > maxLength)
        {
            start = low;
            maxLength = high - low + 1;
        }

        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len
            && s[low] == s[high])
        {
            --low;
            ++high;
        }

        ++low; --high;
        if (s[low] == s[high] && high - low + 1 > maxLength)
        {
            start = low;
            maxLength = high - low + 1;
        }
    }

    size_t ans = maxLength;
    string result;
    while (ans--)
        result.push_back(s[start++]);
    
    return result;
}