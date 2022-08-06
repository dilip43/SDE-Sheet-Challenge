#include <bits/stdc++.h>
using namespace std;

// T.C. -> O(n^2)
bool searchMatrix(vector < vector<int> & matrix, int target)
{
    int row = matrix.size(), col = matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == target)
                return true;
        }
    }
    return false;
}

bool searchMatrix(vector < vector<int> & matrix, int target)
{
    int row = 0, column = matrix[0].size() - 1;
    while (row < matrix.size() and column >= 0)
    {
        if (matrix[row][column] == target)
            return true;
        else if (matrix[row][column] < target)
        {
            row++;
        }
        else
        {
            column--;
        }
    }
    return false;
}

// T.C. -> O(log(n*m)) S.C. -> O(1)
bool searchMatrix(vector < vector<int> & matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();

    int low = 0, high = (n * m) - 1;

    while (low <= high)
    {
        int mid = (low + (high - low) / 2);
        if (matrix[mid / m][mid % m] == target)
            return true;
        if (matrix[mid / m][mid % m] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}