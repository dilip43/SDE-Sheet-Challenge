#include <bits/stdc++.h>
using namespace std;

// Approach 1 - T.C.-> O(m*n), S.C.->O(m+n)
void setZeroes(vector<vector<int>> &matrix)
{
    int r = matrix.size();
    int c = matrix[0].size();
    set<int> rows, cols;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matrix[i][j] == 0)
            {
                rows.insert(i);
                cols.insert(j);
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (rows.find(i) != rows.end() || cols.find(j) != cols.end())
            {
                matrix[i][j] = 0;
            }
        }
    }
}

// Approach 2 - T.C.-> O(m*n), S.C.->O(1)