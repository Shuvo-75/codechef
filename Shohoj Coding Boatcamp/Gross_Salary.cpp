#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x;
        cin >> x;
        double gross;

        if (x < 1500)
        {
            gross = x + (x * 0.10) + (x * 0.90);
        }
        else
        {
            gross = x + 500 + (x * 0.98);
        }

        cout << fixed << setprecision(2) << gross << endl;
    }

    return 0;
}
