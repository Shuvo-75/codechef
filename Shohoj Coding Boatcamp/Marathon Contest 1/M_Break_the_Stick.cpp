// M - Break the Stick

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        if(x >= n)
        {
            cout << "NO" << endl; 
            return 0;
        }
        if(n % 2 == 0)
        {
            cout << "YES" << endl;
        }else
        {
            if(x % 2 == 1)
            {
                cout << "YES" << endl;
            }else
            {
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}