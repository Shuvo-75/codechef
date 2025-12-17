#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        vector<int> arr(x);
        int store = INT_MAX; 
        int n_p = 0; 
        int possible;

        for(int i = 0; i < x; i++)
        {
            cin >> arr[i];
            if(arr[i] < y)
            {
                n_p++;
            }else
            {
                possible = arr[i] % y;
                store = min(store, possible);
            }
            
        }

        if(n_p == y)
        {
            cout << "-1" << endl;
        }else
        {
            cout << store << endl;
        }

    }
    
    return 0;
}