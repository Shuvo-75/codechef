// // Problem link: https://www.codechef.com/START223D/problems/LEQMAX

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n); 
//         int maxValue = 0; 
//         for(int i = 0; i < n; i++)
//         {
//             cin >> arr[i]; 
//             maxValue = max(arr[i], maxValue); 
//         }

//         vector<int> freq(maxValue + 2, 0);
//         for (int i = 0; i < n; i++) 
//         {
//             freq[arr[i]]++;
//         }

//         int ans = 0; 
//         int prev = freq[1]; 

//         ans += prev; 

//         for(int i = 2; i <= n; i++)
//         {
//             int take_value = min(freq[i], prev); 

//             ans += take_value; 
//             prev = take_value; 
//         }

//         cout << ans << endl;

        
//     }
    
//     return 0;
// }

// Problem link: https://www.codechef.com/START223D/problems/LEQMAX

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
        int maxA = 0;
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
            maxA = max(maxA, arr[i]);
        }

        vector<int> count(maxA + 2, 0);
        int ans = 0;

        for (int i = 0; i < n; i++) 
        {
            if (arr[i] == 1) 
            {
                count[1]++;
                ans++;
            } else if (count[arr[i]-1] > 0) 
            {
                count[arr[i]]++;
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
