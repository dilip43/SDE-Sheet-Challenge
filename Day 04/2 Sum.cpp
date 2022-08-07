#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> remaining;
    for (int i = 0; i < nums.size(); i++)
    {
        if (remaining.find(nums[i]) != remaining.end())
        {
            return {remaining[nums[i]], i};
        }
        remaining.insert({target - nums[i], i});
    }
    return {0, 0};
}