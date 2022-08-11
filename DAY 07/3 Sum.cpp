#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> mans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 and nums[i] == nums[i - 1])
            continue;

        int left = i + 1, right = nums.size() - 1;
        while (left < right)
        {
            vector<int> ans;
            int threeSum = nums[i] + nums[left] + nums[right];
            if (threeSum > 0)
                right--;
            else if (threeSum < 0)
                left++;
            else
            {
                ans.insert(ans.end(), {nums[i], nums[left], nums[right]});
                mans.push_back(ans);
                while (num[left] == nums[left - 1] and left < right)
                    left++;
            }
        }
    }
    return mans;
}