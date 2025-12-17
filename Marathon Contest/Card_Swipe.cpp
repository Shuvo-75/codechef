#include <bits/stdc++.h>
using namespace std;
int total_swipe(int n)
{

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int enter = 0, leave = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int total_in = 0, total_out = 0;
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                int total_out = total_swipe(arr[i]);
            }
        }

        cout << enter << " " << leave << endl;
    }
    
    return 0;
}