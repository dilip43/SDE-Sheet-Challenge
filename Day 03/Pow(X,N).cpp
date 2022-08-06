#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n)
{
    if (n == 0)
        return 1;

    double small_ans = myPow(x, n / 2);
    small_ans *= small_ans;
    if (n > 0)
    {
        return n % 2 == 0 ? small_ans : x * small_ans;
    }
    return n % 2 == 0 ? small_ans : small_ans / x;
}

// T.C. ->log(n)
double myPow(double x, int n)
{
    double ans = 1.0;
    long long nn = n;
    if (nn < 0)
        nn = -1 * nn;

    while (nn)
    {
        if (nn % 2)
        {
            ans = ans * x;
            nn = nn - 1;
        }
        else
        {
            x = x * x;
            nn = nn / 2;
        }
    }
    if (n < 0)
        ans = (double)(1.0) / (double)(ans);
    return ans;
}