#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        vector<int> arr(x);


        for(int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        int second_min = arr[0];
        int sum = 0; 
        for(int i = 0; i < x; i++)
        {
            sum += arr[i];
        }
        cout << (2 * sum) - arr[0] - arr[1] << endl;

    }
    
    return 0;
}