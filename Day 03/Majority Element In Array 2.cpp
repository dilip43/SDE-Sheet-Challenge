#include <bits/stdc++.h>
using namespace std;

vector<int> majority(vector<int> &nums)
{
    int element1 = nums[0], cnt1 = 1;
    int element2 = 0, cnt2 = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (element1 == nums[i])
        {
            cnt1++;
        }
        else if (element2 == nums[i])
        {
            cnt2++;
        }
        else if (cnt1 == 0)
        {
            element1 = nums[i];
            cnt1++;
        }
        else if (cnt2 == 0)
        {
            element2 = nums[i];
            cnt2++;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }

    cnt1 = cnt2 = 0;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (element1 == nums[i])
            cnt1++;
        else if (element2 == nums[i])
            cnt2++;
    }

    if (cnt1 > nums.size() / 3)
        ans.push_back(element1);
    if (cnt2 > nums.size() / 3)
        ans.push_back(element2);

    return ans;
}