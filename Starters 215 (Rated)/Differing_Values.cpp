#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int zero_count = 0, one_count = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
                zero_count++;
            else
                one_count++;
        }

        if(max(zero_count, one_count) <= (n + 1) / 2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}


// not accepted 
