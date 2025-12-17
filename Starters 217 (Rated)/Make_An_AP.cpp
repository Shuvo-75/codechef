// Problem link: https://www.codechef.com/START217D/problems/MAKEAP7

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long d = 0;

        for (int i = 1; i < n; i++)
        {
            d = __gcd(d, a[i] - a[i - 1]);
        }

        long long operation = 0;

        for (int i = 1; i < n; i++)
        {
            operation += (a[i] - a[i - 1]) / d - 1;
        }

        cout << operation << endl;
    }
    return 0;
}
