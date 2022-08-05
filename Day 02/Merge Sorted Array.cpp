#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &num1, int m, vector<int> &num2, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (j >= 0)
    {
        num1[k--] = (i >= 0 and num1[i] > num2[j]) ? num1[i--] : num2[j--];
    }
}