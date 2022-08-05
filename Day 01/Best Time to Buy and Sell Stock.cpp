#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int minprice = INT_MAX, res = 0;

    for (auto &a : prices)
    {
        minprice = min(a, minprice);
        res = max(a - minprice, res);
    }

    return res;
}
