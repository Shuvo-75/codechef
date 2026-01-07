// Problem link: https://www.codechef.com/START220D/problems/FBMATCH

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
        string s;
        cin >> s;

        unordered_map<char, int> store; 
        for(char c : s)
        {
            store[c]++; 
        }

        bool possible = false; 
        for(auto &c : store)
        {
            if(c.second >= 2)
            {
                possible = true; 
                break;
            }
        }
        if(possible)
        {
            cout << "Yes" << endl; 
        }else
        {
            cout << "No" << endl; 
        }
    }
    
    return 0;
}