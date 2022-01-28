#include "Header.h"
//By : Lorenzo Leonardo
bool isPalindrome(char* s, int nLow, int nHigh)
{
    while (nLow < nHigh)
    {
        if (s[nLow] != s[nHigh])
            return false;
        nLow++;
        nHigh--;
    }
    return true;
}
//By : Lorenzo Leonardo
int findMinLengthToInsert(char* str, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (isPalindrome(str, 0, i))
            return (n - i - 1);
    }
    return 0;
}

//By : Lorenzo Leonardo
string shortestPalindrome(string s)
{
    int nMinInsert = findMinLengthToInsert((char*)s.c_str(), s.size());

    if (nMinInsert == 0)
        return s;

    string str = "";

    str = s.substr(s.size() - nMinInsert, nMinInsert);
    reverse(str.begin(), str.end());

    return str + s;
}

//this is the answer
string shortestPalindrome2(string s)
{
    int n = s.size();
    string rev(s);
    reverse(rev.begin(), rev.end());
    string s_new = s + "#" + rev;
    int n_new = s_new.size();
    vector<int> f(n_new, 0);
    for (int i = 1; i < n_new; i++)
    {
        int t = f[i - 1];
        while (t > 0 && s_new[i] != s_new[t])
            t = f[t - 1];
        if (s_new[i] == s_new[t])
            ++t;
        f[i] = t;
    }
    return rev.substr(0, n - f[n_new - 1]) + s;
}