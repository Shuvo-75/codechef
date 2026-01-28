// Problem link: https://www.codechef.com/START223D/problems/ADD1234

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int pairs = min(a, c) + (b/2); 
        
        cout << pairs << endl; 
    }
    
    return 0;
}