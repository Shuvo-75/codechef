#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        string s;
        cin >> s;

        long long special = 0, non_special = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                if(arr[i] > 0) non_special += arr[i];
            }else
            {
                if(arr[i] > 0) special += arr[i];
            }
        }

        if(non_special >= c)
        {
            long long pay = non_special - c + special;
            cout << max(non_special, pay) << endl;
        }else
        {
            cout << non_special << endl;
        }

    }
    
    return 0;
}