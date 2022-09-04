#include <bits/stdc++.h>
using namespace std;

// Naive Approach

bool ispalindrome(string s)
{
    int l = s.length();
    int j;

    for (int i = 0, j = l - 1; i <= j; i++, j--)
    {
        if (s[i] != s[j])
            return false;
    }
    return true;
}

int minCharsforPalindrome(string s)
{
    int cnt = 0;
    int flag = 0;

    while (s.length() > 0)
    {
        if (ispalindrome(s))
        {
            flag = 1;
            break;
        }
        else
        {
            cnt++;
            s.erase(s.begin() + s.length() - 1);
        }
    }

    if (flag)
        return cnt;
}

// T.C -> O(n) and A.C -> O(1)
int minCharsforPalindrome(string str)
{
    int n = str.size();
    int left = 0, right = n - 1, added = 0;
    while (left < right)
    {
        // if left and right character are same increase left and decrease right pointer
        if (str[left] == str[right])
        {
            left++;
            right--;
        }
        // else think of adding some character at front and start comparing the element again
        else
        {
            left = 0;
            added = n - right;
            while (str[left] == str[right])
            {
                added--;
                left++;
            }
            right--;
        }
    }
    return added;
}