#include<bits/stdc++.h>
using namespace std;

string reverseWords(string ans)
{
    stringstream s(ans);
    vector<string> result;
    string word;
    while (getline(s, word, ' '))
    {
        result.push_back(word);
    }
    reverse(result.begin(), result.end());
    string temp;
    for (string a : result)
    {
        temp += a + " ";
    }
    return temp.substr(0, temp.size() - 1);
}