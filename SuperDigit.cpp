#include "Header.h"

//By : Lorenzo Leonardo
inline int superDigit(string n, int k)
{
    if (n.length() == 1)
        return stoi(n);

    long num = 0;
    long sum = 0;

    if (k != 0)
    {
        for (long i = 0; i < n.length(); i++)
        {
            sum += ((long)n[i] - 48);
        }
        sum = sum * k;
        n = to_string(sum);
    }
    else
    {
        num = stol(n);
        do
        {
            sum += (num % 10);
            num = num / 10;
        } while (num);

        n = to_string(sum);
    }
    return superDigit(n, 0);
}
