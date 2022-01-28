#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional> 
#include <cctype>
#include <locale>
#include <unordered_map>
#include <iomanip>
#include <sstream>
#include <map>

using namespace std;

static inline std::string& ltrim(std::string& s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(),
        std::not1(std::ptr_fun<int, int>(std::isspace))));
    return s;
}
static inline std::string& rtrim(std::string& s) {
    s.erase(std::find_if(s.rbegin(), s.rend(),
        std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
    return s;
}
static inline std::string& trim(std::string& s) {
    return ltrim(rtrim(s));
}

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

    void frontEle()
    {
        if (s1.empty())
        {
            while (!s2.empty())
            {
                s1.push_back(s2[s2.size()-1]);
                s2.pop_back();
            }
        }
        cout << s1[s1.size()-1] << "\n";
    }

};

string gridChallenge(vector<string> grid);
int superDigit(string n, int k);
string isBalanced(string s);
string cropMessage(string& message, int K);
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
int lengthOfLongestSubstring(string s);


