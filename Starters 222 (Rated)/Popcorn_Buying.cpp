// Problem link: https://www.codechef.com/START222D/problems/POPCORN7

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int ticket = x - 100; 
    if(ticket >= 50)
    {
        cout << ticket/50 << endl; 
    }else
    {
        cout << 0 << endl; 
    }
    return 0;
}