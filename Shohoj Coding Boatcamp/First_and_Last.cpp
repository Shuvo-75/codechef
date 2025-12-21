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
        vector<int> arr(n);

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // int last = arr[n-1];
        // for(int i = n-1; i > 0; i--)
        // {
        //     arr[i] = arr[i-1];
        // }
        // arr[0] = last;

        int max_value = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            rotate(arr.begin(), arr.end() - 1, arr.end());
            int value = arr[0] + arr[n-1];

            max_value = max(value, max_value);
        }
        cout << max_value << endl;
    }
    
    return 0;
}