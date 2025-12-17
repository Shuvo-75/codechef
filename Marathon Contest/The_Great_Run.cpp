// The Great Run

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

        int arr[n];
        int max_girls = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(int i = 0; i <= n - k; i++)
        {
            int girls = 0;
            for(int j = 0; j < k; j++)
            {
                girls += arr[i + j];
            }
            max_girls = max(max_girls, girls);
        }
        cout << max_girls << endl;

    }
    
    return 0;
}