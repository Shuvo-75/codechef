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

        vector<int> step(n);
        string store = "";
        for(int i = 0; i < n; i++)
        {
            cin >> step[i];
            if(step[i] % k == 0)
            {
                store += '1';
            }else
            {
                store += '0';
            }
        }
        cout << store << endl;
    }
    
    return 0;
}