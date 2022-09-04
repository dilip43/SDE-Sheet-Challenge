#include <bits/stdc++.h>
using namespace std;

int compareVersion(string version1, string version2)
{
    int i = 0, j = 0, n1 = version1.size(), n2 = version2.size(), num1 = 0, num2 = 0;
    while (i < n1 || j < n2)
    {
        while (i < n1 and version1[i] != '.')
        {
            num1 = num1 * 10 + (version1[i] - '0');
            ++i;
        }
        while (j < n2 and version2[j] != '.')
        {
            num2 = num2 * 10 + (version2[j] - '0');
            ++j;
        }

        if (num1 > num2)
            return 1;
        if (num1 < num2)
            return -1;

        ++i;
        ++j;
        num1 = 0, num2 = 0;
    }
    return 0;
}

int compareVersion(string version1, string version2)
{
    vector<int> v1, v2;

    stringstream s(version1);
    string word;

    while (getline(s, word, '.'))
    {
        int num = stoi(word);
        v1.push_back(num);
    }

    stringstream s2(version2);
    while (getline(s2, word, '.'))
    {
        int num = stoi(word);
        v2.push_back(num);
    }

    auto &smaller = (v1.size() < v2.size()) ? v1 : v2;
    auto &greater = (smaller == v1) ? v2 : v1;
    while (smaller.size() < greater.size())
        smaller.push_back(0);

    for (int i = 0; i < smaller.size(); i++)
    {
        if (v1[i] == v2[i])
            continue;
        if (v1[i] < v2[i])
            return -1;
        else
            return 1;
    }
    return 0;
}