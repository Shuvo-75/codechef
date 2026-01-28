// Problem link: https://www.codechef.com/START223D/problems/CASHBACK

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    if(t >= 200)
    {
        cout <<  t - ((t/200) * 50) << endl; 
    }else
    {
        cout << t << endl; 
    }
    return 0;
}