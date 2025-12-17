#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr(3);
        int min_value = INT_MAX;
        int sum = 0; 
        for(int i = 0; i < 3; i++)
        {
            cin >> arr[i];
            min_value = min(arr[i], min_value);
            sum += arr[i];
        }

        int total_amount = 0; 
        if(min_value > 0)
        {
            total_amount += min_value * 10;
            for (int i = 0; i < 3; i++)
                total_amount += (arr[i] - min_value) * 3;
        }else
            total_amount += sum * 3;

        cout << total_amount << endl;
    }
    
    return 0;
}