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



string      gridChallenge(vector<string> grid);
int         superDigit(string n, int k);
string      isBalanced(string s);
string      cropMessage(string& message, int K);
double      findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
int         lengthOfLongestSubstring(string s);
string      longestPalindrome(string s);
int         countBinaryGapZeros(int N);
int         longestPassword(string& S);
int         floodDepth(vector<int>& A);
int         numOfFiltersFactory(vector<int>& A);
int         longestSubarray(vector<int> arr);
int         countPairBitwiseAndPow2(vector<int> n);
string      timeConversion(string s);
void        miniMaxSum(vector<int> arr);
int         lonelyInteger(vector<int> a);
vector<int> countingSort(vector<int> arr);
string      caesarCipher(string s, int k);
vector<int> sequentialDigits(int low, int high);
vector<int> twoSum(vector<int>& nums, int target);
vector<string> shortestAndLongestPalindromicSubString(string s);
string      shortestPalindrome2(string s);
string      shortestPalindrome(string s);
vector<int> sortOddAndEven(vector<int> v);



