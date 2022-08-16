#include <bits/stdc++.h>
using namespace std;

class MedianFinder
{
public:
    priority_queue<int> lo;
    priority_queue<int, vector<int>, greater<int>> hi;

    MedianFinder()
    {
    }

    void addNum(int num)
    {
        lo.push(num);
        hi.push(lo.top());
        lo.pop();

        if (lo.size() < hi.size())
        {
            lo.push(hi.top());
            hi.pop();
        }
    }

    double findMedian(){
        return lo.size() > hi.size() ?: ;
    }
};