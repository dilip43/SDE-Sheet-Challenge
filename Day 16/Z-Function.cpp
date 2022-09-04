#include <bits/stdc++.h>
using namespace std;

// Naive Approach
int zAlgorithm(string txt, string pat)
{
    int patlen = pat.length();
    int txtlen = txt.length();
    int cnt = 0;
    for (int i = 0; i < txtlen - patlen + 1; i++)
    {
        if (pat == txt.substr(i, patlen))
        {
            cnt++;
        }
    }
    return cnt;
}

int zAlgorithm(string txt, string pat, int m, int n)
{
    int patlen = pat.length();
    int txtlen = txt.length();
    vector<int> ans;
    string new_string = pat + "$" + txt;
    vector<int> z;
    int i = 0;
    while (i < new_string.size())
    {
        if (i <= patlen)
            z.push_back(0);
        else
        {
            int left = 0, right = 0;
            if (new_string[left] == new_string[i])
            {
                right = i;
                while (new_string[left] == new_string[right] &&
                       right < new_string.size())
                {
                    left++;
                    right++;
                }
            }
            z.push_back(left);
        }
        i++;
    }
    for (int i = 0; i < new_string.size(); i++)
    {
        if (z[i] == patlen)
            ans.push_back(i - patlen);
    }
    return ans.size();
}