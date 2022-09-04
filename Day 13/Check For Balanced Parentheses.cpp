#include <bits/stdc++.h>
using namespace std;

bool ismatch(char a, char b)
{
    if (a == '}' and b == '{')
        return true;
    else if (a == ']' and b == '[')
        return true;
    else if (a == ')' and b == '(')
        return true;
    else
        return false;
}

bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char a = s[i];
        if (a == '{' || a == '[' | a == '(')
            st.push(a);

        if (a == '}' || a == ']' | a == ')')
        {
            if (st.empty())
                return false;
            else if (!ismatch(a, st.top()))
                return false;
            else
                st.pop();
        }
    }

    if (st.empty())
        return true;
    else
        return false;
}
