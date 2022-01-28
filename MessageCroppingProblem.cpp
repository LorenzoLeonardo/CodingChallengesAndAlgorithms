#include "Header.h"



string cropMessage(string& message, int K)
{
    // write your code in C++14 (g++ 6.2.0)
    trim(message);


    if ((int)message.length() > K)
    {
        string substring;
        substring = message;

        substring = substring.substr(0, K);
        //return string not sliced if K is a space, if no 
        if (message[K] == ' ')
        {
            trim(substring);
            return substring;
        }
        else
        {
            int i = 0;
            for (i = (int)(substring.size() - 1); (i >= 0); i--)
            {
                if ((substring[i] == ' '))
                {
                    substring = substring.substr(0, i);
                    break;
                }
            }
            if (i == -1)
                return "";
            else
            {
                trim(substring);
                return substring;
            }
        }


    }
    //K is greater than string legnth return all string;
    else
    {
        trim(message);
        return message;
    }
}