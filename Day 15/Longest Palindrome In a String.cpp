#include <bits/stdc++.h>
using namespace std;

string expandPalindrome(string s, int left, int right)
{
    while (left >= 0 && right < s.length() && s[left] == s[right])
    {
        left--;
        right++;
    }

    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(string s)
{
    string lps = "";
    int n = s.length();
    
}