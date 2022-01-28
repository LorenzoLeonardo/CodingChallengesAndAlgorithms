#include "Header.h"

bool isValidPassword(string pass)
{
    int nAlphaCount = 0;
    int nNumberCount = 0;
    for (int i = 0; i < (int)pass.length(); i++)
    {
        if (isdigit(pass[i]))
        {
            nNumberCount++;
        }
        else if (isalpha(pass[i]))
        {
            nAlphaCount++;
        }
        else
        {
            return false;
        }
    }

    //if Alphabet even && number is odd OK
    if (((nAlphaCount % 2) == 0) && ((nNumberCount % 2) != 0))
        return true;

    //if alpha bet even && number is even NOT OK
    if (((nAlphaCount % 2) != 0) && ((nNumberCount % 2) == 0))
        return false;

    return false;

}

vector<string> convertToVector(string S)
{
    vector<string> s;
    string substring;
    trim(S);

    substring = S;
    size_t nTerminate = 0;
    nTerminate = substring.find(' ', sizeof(char));
    while (nTerminate != (int)string::npos)
    {
        s.push_back(substring.substr(0, nTerminate));
        substring = substring.substr(nTerminate, substring.length());
        trim(substring);
        nTerminate = substring.find(' ', sizeof(char));
    }
    if (!substring.empty())
        s.push_back(substring);

    return s;
}

int longestPassword(string& S) {
    // write your code in C++14 (g++ 6.2.0)
    vector<string> vPass;
    int nMaxLen = -1;
    vPass = convertToVector(S);
    for (int i = 0; i < (int)vPass.size(); i++)
    {
        if (isValidPassword(vPass[i]))
        {
            if (nMaxLen < (int)vPass[i].length())
            {
                nMaxLen = (int)vPass[i].length();
            }
        }
    }
    return nMaxLen;
}