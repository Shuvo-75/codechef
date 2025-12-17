// O - Candy Love

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        long long sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];

            sum += arr[i];
        }
        if(sum % 2 == 0)
        {
            cout << "NO" << endl;
        }else
        {
            cout << "YES" << endl;
        }
        
    }
    
    return 0;
}