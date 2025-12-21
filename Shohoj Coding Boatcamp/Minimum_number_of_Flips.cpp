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
        int sum = 0; 
        for(int i = 0; i < x; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if(sum % 2 == 0 || sum == 0)
        {
            if(sum == 0)
            {
                cout << "0" << endl;
            }else
            {
                cout << sum/2 << endl;
            }
        }else 
        {
            cout << "-1" << endl;
        }
    }
    
    return 0;
}