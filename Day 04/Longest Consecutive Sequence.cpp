#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    set<int> num_set(nums.begin(), nums.end());

    int longestStreak = 0;
    for (int num : num_set)
    {
        if (num_set.find(num - 1) == num_set.end())
        {
            int currentNum = num;
            int currentStreak = 1;

            while (num_set.find(currentNum + 1) != num_set.end())
            {
                currentNum += 1;
                currentStreak += 1;
            }
            longestStreak = max(longestStreak, currentStreak);
        }
    }
    return longestStreak;
}