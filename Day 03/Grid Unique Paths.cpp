#include <bits/stdc++.h>
using namespace std;

int uniquePaths(int m, int n)
{
    int totalNumberOfStep = m + n - 2;
    int r = m - 1;
    double res = 1;

    for (int i = 1; i <= r; i++)
    {
        res = res * (totalNumberOfStep - r + i) / i;
    }
    return res;
}