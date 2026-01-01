// Problem link: https://www.codechef.com/START219D/problems/CAKEBAKE7

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int x = 2 * n; 
    if(x <= m)
    {
        cout << n << endl; 
    }else
    {
        cout << m - n << endl; 
    }
    return 0;
}