// Problem link: https://www.codechef.com/START217D/problems/ADD13

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        bool is_it_possible = false;
        if(n <= m && (m-n) % 2 == 0)
        {
            if(m <= 3 * n)
            {
                is_it_possible = true; 
            }
        }


        if(is_it_possible)
            cout << "YES" << endl; 
        else
            cout << "NO" << endl; 
    }
    
    return 0;
}