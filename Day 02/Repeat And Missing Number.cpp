#include <bits/stdc++.h>
using namespace std;

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    int repeated, sum = 0;
    unordered_map<int, int> map;
    for (int i : arr)
    {
        sum += i;
        if (map[i])
        {
            repeated = i;
        }
        map[i] = 1;
    }
    int missing = (n * (n + 1) / 2) - sum + repeated;
    pair<int, int> ans(missing, repeated);
    return ans;
}

// XOR Approach
pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    int xor1 = arr[0];
    //  Get the Xor of all the array elements
    for (int i = 0; i < n; i++)
    {
        xor1 = xor1 ^ arr[i];
    }
}