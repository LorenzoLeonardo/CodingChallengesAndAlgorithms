#include "Header.h"

vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<int> sums;

    // check each element in array
    for (int i = 0; i < nums.size(); i++) {

        // check each other element in the array
        for (int j = i + 1; j < nums.size(); j++) {

            // determine if these two elements sum to S
            if (nums[i] + nums[j] == target) {
                sums.push_back(i);
                sums.push_back(j);

            }

        }

    }

    // return all pairs of integers that sum to S
    return sums;

}