// Problem link: https://www.codechef.com/START220D/problems/MOVHYPE

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

        vector<int> arr(n + 1);
        for(int i = 0; i < n+1; i++)
        {
            cin >> arr[i]; 
        } 

        int max_loudness = max(arr[0], arr[1]); 

        for(int i = 1; i < n; i++)
        {
            int current_loudness = max(arr[i], arr[i+1]); 

            if(current_loudness < max_loudness)
            {
                max_loudness = current_loudness; 
            }
        }

        cout << max_loudness << endl; 
    }
    
    return 0;
}