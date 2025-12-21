// Problem link: https://www.codechef.com/START216D/problems/SCORING

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

        int alice = (x + y) / 2; 

        int bob = alice - x; 


        cout << alice << " " << bob << endl;
    }
    
    return 0;
}