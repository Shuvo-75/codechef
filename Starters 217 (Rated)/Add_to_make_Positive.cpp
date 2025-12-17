// Problem link: https://www.codechef.com/START217D/problems/ADDPOS

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

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }

        if (sum >= 0)
        {
            cout << 0 << endl;
        }else
        {
            cout << ((-1) * sum + n - 1) / n << endl;
        }
    }
    return 0;
}
