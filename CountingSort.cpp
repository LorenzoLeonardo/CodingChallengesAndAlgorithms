#include "Header.h"

vector<int> countingSort(vector<int> arr)
{
    int vCounter[100];
    int n = 0;
    int val = 0;

    memset(vCounter, 0, sizeof(vCounter));

    for (int i = 0; i < arr.size(); i++)
    {
        vCounter[arr[i]]++;
    }
    vector<int> answer(std::begin(vCounter), std::end(vCounter));
    return answer;
}