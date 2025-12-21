#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        string s1 = s;
        reverse(s1.begin(), s1.end());

        if(s == s1)
        {
            cout << "wins" << endl;
        }else
        {
            cout << "loses" << endl;
        }
    }
    
    return 0;
}