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
        int arr[x];
        for(int i = 0; i < x; i++)
        {
            cin >> arr[i]; 
        }

        sort(arr, arr + x);

        int unique_value = 0; 

        for(int i = 0; i < x; i++)
        {
            unique_value ^= arr[i];
        }

        cout << unique_value << endl;

    }
    
    return 0;
}