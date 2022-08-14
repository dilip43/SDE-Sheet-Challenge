#include <bits/stdc++.h>
using namespace std;

double Multiply(double Number, int n)
{
    double ans = 1.0;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * Number;
    }
    return ans;
}

// T.C.->n *log(m * 10 ^ d)

double getNthRoot(int n, int m)
{
    double low = 1, high = m, eps = 1e-6;
    while ((high - low) > eps)
    {
        double mid = (low + high) / 2.0;
        if (Multiply(mid, n) < m)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}