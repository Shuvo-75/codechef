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

        int len = s.length();
        int mid = len / 2; 

        string first, last; 

        if(len % 2 == 0)
        {
            first = s.substr(0, mid);
            last = s.substr(mid);
        }else
        {
            first = s.substr(0, mid);
            last = s.substr(mid + 1);
        }

        sort(first.begin(), first.end());
        sort(last.begin(), last.end());

        if(first == last)
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}