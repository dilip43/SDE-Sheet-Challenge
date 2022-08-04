#include <bits/stdc++.h>
using namespace std;

void sort(vector<int> &nums)
{
    int left = 0, right = nums.size() - 1;
    while (left < right)
    {
        if (nums[left] == 1)
        {
            if (nums[right] != 1)
                swap(nums[left], nums[right]);
            right--;
        }
        else
        {
            left++;
        }
    }
}
