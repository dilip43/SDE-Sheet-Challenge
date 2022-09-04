#include <bits/stdc++.h>
using namespace std;

string countAndSay(int n)
{
    if (n == 1)
        return "1";
    if (n == 2)
        return "11";

    string s = "11";
    for (int i = 3; i <= n; i++)
    {
        string t = "";
        s += '&';
        int c = 1;
        for (int j = 1; j < s.size(); j++)
        {
            if (s[j] != s[j - 1])
            {
                t = t + to_string(c);
                t += s[j - 1];
                c = 1;
            }
            else
            {
                c++;
            }
        }
        s = t;
    }
    return s;
}

// T.C.= O(4)^n/3
string countAndSay(int n)
{
    string currentString = "1";
    for (int i = 2; i <= n; i++)
    {
        string nextString;
        for (int j = 0, k = 0; j < currentString.size(); j = k)
        {
            while (k < currentString.size() && currentString[k] == currentString[j])
                k++;
            nextString += to_string(k - j) + currentString[j];
        }
        currentString = nextString;
    }
    return currentString;
}