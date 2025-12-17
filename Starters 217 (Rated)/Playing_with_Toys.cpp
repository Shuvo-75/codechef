// Problem link: https://www.codechef.com/START217D/problems/TOYS

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b; 
    cin >> a >> b; 

    if(a > b)
    {
        cout << abs(a-b) << endl; 
    }else
    {
        cout << 0 << endl; 
    }
    return 0;
}