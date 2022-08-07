#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    vector<vector<int>> ans;

    if (nums.empty() || nums.size() < 4)
        return ans;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 3; i++)
    {
        if (i > 0 and nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < nums.size() - 2; j++)
        {
            if (j > i + 1 and nums[j] == nums[j - 1])
                continue;

            int left = j + 1, right = nums.size() - 1;
            int t = target - nums[i] - nums[j];
            while (left < right)
            {
                int sum = nums[left] + nums[right];
                if (sum == t)
                {
                    ans.push_back({nums[i], nums[j], nums[left], nums[right]});
                    left++;
                    right--;

                    while (left < right and nums[left] == nums[left - 1])
                        left++;

                    while (left < right and nums[right] == nums[right + 1])
                        right--;
                }

                else if (sum > t)
                    right--;
                else
                    left++;
            }
        }
    }
    return ans;
}