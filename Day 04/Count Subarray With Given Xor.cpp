#include <bits/stdc++.h>
using namespace std;

int subarraysXor(vector<int> &arr, int x)
{
    map<int, int> freq;
    int cnt = 0, xorr = 0;

    for (auto it : arr)
    {
        xorr = xorr ^ it;
        if (xorr == x)
        {
            cnt++;
        }

        if (freq.find(xorr ^ x) != freq.end())
            cnt += freq[xorr ^ x];

        freq[xorr] += 1;
    }
    return cnt;
}