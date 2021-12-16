#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = 1.0;
        long long nn = n;
        if (n < 0)
        {
            nn = -1 * nn;
        }
        while (nn)
        {
            if (nn % 2 == 0)
            {
                x = x * x;
                nn = nn / 2;
            }
            else
            {
                ans *= x;
                nn = nn - 1;
            }
        }

        if (n < 0)
        {
            ans = 1 / ans;
        }
        return ans;
    }
};
