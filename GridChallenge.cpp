#include "Header.h"

string gridChallenge(vector<string> grid) 
{
    // Write your code here
    for (int i = 0; i < grid.size(); ++i) 
    {
        sort(grid[i].begin(), grid[i].end());
    }

    for (int i = 0; i < grid.size() - 1; i++) 
    {
        for (int j = 0; j < grid[i].length(); j++) 
        {
            if (grid[i][j] > grid[i + 1][j]) 
            {
                return "NO";
            }
        }
    }
    return "YES";
}