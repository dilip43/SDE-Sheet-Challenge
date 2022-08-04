#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int currentSum = 0, totalSum = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            currentSum += nums[i];
            totalSum = max(currentSum, totalSum);
            currentSum = max(0, currentSum);
        }
        return totalSum;
    }
};
