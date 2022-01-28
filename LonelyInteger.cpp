#include "Header.h"

int lonelyInteger(vector<int> a) 
{
    map<int, int> vMap;
    int nLonely = 0;
    for (int i = 0; i < a.size(); i++)
    {
        vMap[a[i]]++;
    }

    std::map<int, int>::iterator it = vMap.begin();
    while (it != vMap.end())
    {
        if (it->second == 1)
        {
            nLonely = it->first;
            break;
        }
        it++;
    }
    return nLonely;
}