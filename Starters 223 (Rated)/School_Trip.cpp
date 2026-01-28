// Problem link: https://www.codechef.com/START223D/problems/SCHOOLTRIP

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;

        int remainder = x % k; 
        int ans = remainder; 

        if(x + (k - remainder) <= n)
        {
            ans = min(ans, k-remainder); 
        }

        cout << ans << endl; 
    }
    
    return 0;
}