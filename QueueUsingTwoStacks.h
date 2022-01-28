#pragma once
#include <vector>

using namespace std;
class MyQueue
{
    vector<long> s1, s2;
public:
    void enQueue(long x)
    {
        if (s1.empty() && s2.empty())
        {
            s1.push_back(x);
        }
        else
        {
            s2.push_back(x);
        }
    }

    void deQueue()
    {
        if (s1.empty())
        {
            while (!s2.empty())
            {
                s1.push_back(s2[s2.size() - 1]);
                s2.pop_back();
            }
        }
        s1.pop_back();
    }

    long frontElement()
    {
        if (s1.empty())
        {
            while (!s2.empty())
            {
                s1.push_back(s2[s2.size() - 1]);
                s2.pop_back();
            }
        }
        return s1[s1.size() - 1];
    }

};