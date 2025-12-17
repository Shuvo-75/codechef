// C - Mathison and pangrams

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = 26; 
        vector<int> arr(x);
        for(int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }

        string s;
        cin >> s;

        vector<bool> have(26, false);

        for(char c : s)
        {
            have[c - 'a'] = true;
        }

        int dont_have = 0;
        for(int i = 0; i < x; i++)
        {
            if(!have[i])
            {
                dont_have += arr[i];
            }
        }

        cout << dont_have << endl;
    }
    
    
    return 0;
}