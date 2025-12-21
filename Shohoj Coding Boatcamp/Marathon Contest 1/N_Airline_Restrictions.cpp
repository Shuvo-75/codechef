// N - Airline Restrictions

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        
        bool solve = false;
        
        if((a + b <= d && c <= e) || (a + c <= d && b <= e) || (b + c <= d && a <= e))
        {
            solve = true;
        }
        
        if(solve)
        {
            cout << "YES" << endl; 
        }else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}