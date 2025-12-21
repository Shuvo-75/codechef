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
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int Wolverine = 0; 
        for(int i = 0; i < n; i++)
        {
            if((arr[i] + k) % 7 == 0)
            {
                Wolverine++;
            }
        }

        cout << Wolverine << endl;
    }
    
    return 0;
}