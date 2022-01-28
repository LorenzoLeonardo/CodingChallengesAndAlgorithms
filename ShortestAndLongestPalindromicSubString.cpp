#include "Header.h"

vector<string> shortestAndLongestPalindromicSubString(string s)
{
    long long nLow = 0;
    long long nHigh = 0;
    long long nStartOfPalindromeMaxIndex = 0;
    long long nStartOfPalindromeMinIndex = 0;
    long long nCurrentMaxlength = 0;
    long long nCurrentMinlength = 0;
    bool bFoundFirstPal = false;

    for (long long i = 1; i < s.size(); i++)
    {
        nLow = i - 1;
        nHigh = i;

        while (nLow >= 0 && (nHigh < s.size()) &&
            s[nLow] == s[nHigh])
        {
            nLow--;
            nHigh++;
        }

        nLow++;
        nHigh--;

        if (s[nLow] == s[nHigh] && nLow != nHigh)
        {
            if (nCurrentMaxlength < (nHigh - nLow) + 1)
            {
                nCurrentMaxlength = (nHigh - nLow) + 1;
                nStartOfPalindromeMaxIndex = nLow;

                if (!bFoundFirstPal)
                {
                    nCurrentMinlength = (nHigh - nLow) + 1;
                    nStartOfPalindromeMinIndex = nLow;
                    bFoundFirstPal = true;
                }
            }

            if (nCurrentMinlength > (nHigh - nLow) + 1)
            {
                nCurrentMinlength = (nHigh - nLow) + 1;
                nStartOfPalindromeMinIndex = nLow;
            }
        }

        nLow = i - 1;
        nHigh = i + 1;
        while (nLow >= 0 && (nHigh < s.size()) &&
            s[nLow] == s[nHigh])
        {
            nLow--;
            nHigh++;
        }
        nLow++;
        nHigh--;

        if (s[nLow] == s[nHigh] && nLow != nHigh)
        {
            if (nCurrentMaxlength < (nHigh - nLow) + 1)
            {
                nCurrentMaxlength = (nHigh - nLow) + 1;
                nStartOfPalindromeMaxIndex = nLow;

                if (!bFoundFirstPal)
                {
                    nCurrentMinlength = (nHigh - nLow) + 1;
                    nStartOfPalindromeMinIndex = nLow;
                    bFoundFirstPal = true;
                }
            }

            if (nCurrentMinlength > (nHigh - nLow) + 1)
            {
                nCurrentMinlength = (nHigh - nLow) + 1;
                nStartOfPalindromeMinIndex = nLow;
            }
        }
    }
    vector<string> result;

    result.push_back(s.substr(nStartOfPalindromeMinIndex, nCurrentMinlength));
    result.push_back(s.substr(nStartOfPalindromeMaxIndex, nCurrentMaxlength));
    return result;
}