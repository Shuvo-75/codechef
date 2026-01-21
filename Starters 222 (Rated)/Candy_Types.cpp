// Problem link: https://www.codechef.com/START222D/problems/CANDYTYPE

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
        int store = (x * (x + 1))/2; 

        vector<int> freq(x + 1, 0);
        
        for(int i = 0; i < x; i++)
        {
            int n;
            cin >> n; 
            freq[n]++;  
        }
        int max_freq = 0; 
        int ans = 1; 
        for(int i = 1; i <= x; i++)
        {
            if(freq[i] > max_freq)
            {
                max_freq = freq[i]; 
                ans = i; 
            }
        }

        cout << ans << endl; 
    }
    
    return 0;
}