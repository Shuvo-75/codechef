#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x;
        cin >> a >> b >> c >> x;

        if(a+b >= x || b+c >= x || a+c >= x)
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}