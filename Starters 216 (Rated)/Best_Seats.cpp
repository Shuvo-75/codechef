// Problem link: https://www.codechef.com/START216D/problems/BESTSEATS

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

        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }

        int best_seat = INT_MAX; 
        for(int i = 0; i < x-1; i++)
        {
            best_seat = min(arr[i] + arr[i+1], best_seat);
        }

        cout << best_seat << endl; 
    }

    return 0;
}
