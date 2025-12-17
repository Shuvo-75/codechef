#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        long long gcd_value = __gcd(x,y);
        long long b = y/gcd_value;
        cout << b << endl;
    }
    
    return 0;
}