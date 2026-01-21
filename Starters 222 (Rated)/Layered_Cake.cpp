// Problem link: https://www.codechef.com/START222D/problems/LAYERCAKE

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> first(n), second(m); 
        for(int i = 0; i < n; i++)
        {
            cin >> first[i]; 
        }

        for(int i = 0; i < m; i++)
        {
            cin >> second[i]; 
        }
        int count = 0; 
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(first[i] > second[j])
                {
                    count++; 
                }
            }
        }

        cout << count << endl; 
    }
    
    return 0;
}