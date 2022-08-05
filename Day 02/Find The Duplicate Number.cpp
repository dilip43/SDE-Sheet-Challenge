#include <bits/stdc++.h>
using namespace std;

// T.C. -> O(n) and S.C. -> O(n)
int findDuplicate(vector<int> &nums)
{
    unordered_set<int> seen;
    for (auto &num : nums)
    {
        if (seen.count(num))
            return num;

        seen.insert(num);
    }
    return -1;
}

// T.C.-> O(n) and S.C. -> O(1)
int findDuplicate(vector<int> &nums)
{
    while (nums[0] != nums[nums[0]])
        swap(nums[0], nums[nums[0]]);

    return nums[0];
}

int findDuplicate(vector<int> &nums)
{
    int slow = nums[0], fast = nums[0];
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    fast = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}