#include "Header.h"

string caesarCipher(string s, int k) 
{
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            for (int n = 0; n < k; n++)
            {
                if ((s[i] != 'z') && (s[i] != 'Z'))
                {
                    s[i]++;
                }
                else
                {
                    if (s[i] == 'z')
                        s[i] = 'a';
                    else if (s[i] == 'Z')
                        s[i] = 'A';
                }
            }
        }
    }
    return s;
}