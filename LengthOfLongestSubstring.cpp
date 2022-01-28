#include "Header.h"

int lengthOfLongestSubstring(string s) 
{
    int n = s.length(), ans = 0;
    map<char, int> mMap;

    for (int j = 0, i = 0; j < n; j++)
    {
        map<char, int>::iterator it = mMap.find(s.at(j));

        if (it != mMap.end())
        {
            i = max(mMap.at(s.at(j)), i);
        }
        ans = max(ans, j - i + 1);

        it = mMap.find(s.at(j));
        if (it == mMap.end())
        {
            mMap.insert({ s.at(j), j + 1 });
        }
        else
        {
            mMap[s.at(j)] = j + 1;
        }
    }
    return ans;
}