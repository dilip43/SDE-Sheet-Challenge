#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i = 0, k = 0;
    while (i < nums.size())
    {
        if (i > 0 and nums[i] == nums[i - 1])
        {
            i++;
            continue;
        }
        nums[k] = nums[i];
        i++;
        k++;
    }
    return k;
}

int removeDuplicates(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}