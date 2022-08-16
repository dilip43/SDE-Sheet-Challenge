#include <bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> pq(nums.begin(), nums.end());
    k--;
    while (k--)
    {
        pq.pop();
    }
    return pq.top();
}